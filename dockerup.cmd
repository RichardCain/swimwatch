docker build -t swimwatch .
docker run -p 8080:80 -p 9000:9000 --name swimwatch swimwatch