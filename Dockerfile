FROM php:7.2-fpm

##  NGINX ########################
RUN apt-get update -y \
    && apt-get install -y nginx

## PHP extensions #################
# PHP_CPPFLAGS are used by the docker-php-ext-* scripts
ENV PHP_CPPFLAGS="$PHP_CPPFLAGS -std=c++11"

RUN docker-php-ext-install pdo_mysql \
    && docker-php-ext-install opcache \
    && apt-get install libicu-dev -y \
    && docker-php-ext-configure intl \
    && docker-php-ext-install intl \
    && apt-get remove libicu-dev icu-devtools -y
RUN { \
        echo 'opcache.memory_consumption=128'; \
        echo 'opcache.interned_strings_buffer=8'; \
        echo 'opcache.max_accelerated_files=4000'; \
        echo 'opcache.revalidate_freq=2'; \
        echo 'opcache.fast_shutdown=1'; \
        echo 'opcache.enable_cli=1'; \
    } > /usr/local/etc/php/conf.d/php-opocache-cfg.ini

## COPY Various files to the container ################
COPY nginx-site.conf /etc/nginx/sites-enabled/default
COPY entrypoint.sh /etc/entrypoint.sh
RUN chmod +x /etc/entrypoint.sh

COPY /www /var/www/swimwatch
COPY /sql /var/www/swimwatch/data
COPY /ext /var/www/swimwatch/ext

## C++ Extensions #############################
WORKDIR /var/www/swimwatch/ext
RUN cd /var/www/swimwatch/ext \
&& phpize \
&& ./configure \
&& make \
&& make install
COPY swt.ini /usr/local/etc/php/conf.d


## SQLITE3 ###########################################
RUN apt install sqlite3 -y
RUN sqlite3 -batch "/var/www/swimwatch/data/swt.sqlite3" < "/var/www/swimwatch/data/swtdb.sql"
RUN chmod a+rw /var/www/swimwatch/data/swt.sqlite3
RUN chmod -R 777 /var/www/swimwatch/data

## ZIP Archive ##############################
RUN apt-get install -y libzip-dev zip && docker-php-ext-install zip

## FINAL BIT #########################
WORKDIR /var/www/swimwatch
EXPOSE 80 443
ENTRYPOINT ["sh", "/etc/entrypoint.sh"]

######################### END ########################