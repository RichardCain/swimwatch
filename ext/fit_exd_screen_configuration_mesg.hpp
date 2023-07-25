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


#if !defined(FIT_EXD_SCREEN_CONFIGURATION_MESG_HPP)
#define FIT_EXD_SCREEN_CONFIGURATION_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class ExdScreenConfigurationMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 ScreenIndex = 0;
       static const FIT_UINT8 FieldCount = 1;
       static const FIT_UINT8 Layout = 2;
       static const FIT_UINT8 ScreenEnabled = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    ExdScreenConfigurationMesg(void) : Mesg(Profile::MESG_EXD_SCREEN_CONFIGURATION)
    {
    }

    ExdScreenConfigurationMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of screen_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsScreenIndexValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns screen_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetScreenIndex(void) const
    {
        return GetFieldUINT8Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set screen_index field
    ///////////////////////////////////////////////////////////////////////
    void SetScreenIndex(FIT_UINT8 screenIndex)
    {
        SetFieldUINT8Value(0, screenIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of field_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFieldCountValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns field_count field
    // Comment: number of fields in screen
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetFieldCount(void) const
    {
        return GetFieldUINT8Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set field_count field
    // Comment: number of fields in screen
    ///////////////////////////////////////////////////////////////////////
    void SetFieldCount(FIT_UINT8 fieldCount)
    {
        SetFieldUINT8Value(1, fieldCount, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of layout field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLayoutValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns layout field
    ///////////////////////////////////////////////////////////////////////
    FIT_EXD_LAYOUT GetLayout(void) const
    {
        return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set layout field
    ///////////////////////////////////////////////////////////////////////
    void SetLayout(FIT_EXD_LAYOUT layout)
    {
        SetFieldENUMValue(2, layout, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of screen_enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsScreenEnabledValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns screen_enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetScreenEnabled(void) const
    {
        return GetFieldENUMValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set screen_enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetScreenEnabled(FIT_BOOL screenEnabled)
    {
        SetFieldENUMValue(3, screenEnabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_EXD_SCREEN_CONFIGURATION_MESG_HPP)
