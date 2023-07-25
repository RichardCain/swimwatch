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


#if !defined(FIT_MET_ZONE_MESG_HPP)
#define FIT_MET_ZONE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class MetZoneMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 HighBpm = 1;
       static const FIT_UINT8 Calories = 2;
       static const FIT_UINT8 FatCalories = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    MetZoneMesg(void) : Mesg(Profile::MESG_MET_ZONE)
    {
    }

    MetZoneMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of message_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMessageIndexValid() const
    {
        const Field* field = GetField(254);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of high_bpm field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHighBpmValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns high_bpm field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetHighBpm(void) const
    {
        return GetFieldUINT8Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set high_bpm field
    ///////////////////////////////////////////////////////////////////////
    void SetHighBpm(FIT_UINT8 highBpm)
    {
        SetFieldUINT8Value(1, highBpm, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of calories field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCaloriesValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns calories field
    // Units: kcal / min
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetCalories(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set calories field
    // Units: kcal / min
    ///////////////////////////////////////////////////////////////////////
    void SetCalories(FIT_FLOAT32 calories)
    {
        SetFieldFLOAT32Value(2, calories, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of fat_calories field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFatCaloriesValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns fat_calories field
    // Units: kcal / min
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetFatCalories(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set fat_calories field
    // Units: kcal / min
    ///////////////////////////////////////////////////////////////////////
    void SetFatCalories(FIT_FLOAT32 fatCalories)
    {
        SetFieldFLOAT32Value(3, fatCalories, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_MET_ZONE_MESG_HPP)
