////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2016 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.14Release
// Tag = production/akw/20.14.00-0-g448ef52
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_HR_MESG_LISTENER_HPP)
#define FIT_HR_MESG_LISTENER_HPP

#include "fit_hr_mesg.hpp"

namespace fit
{

class HrMesgListener
{
public:
    virtual ~HrMesgListener() {}
    virtual void OnMesg(HrMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_HR_MESG_LISTENER_HPP)
