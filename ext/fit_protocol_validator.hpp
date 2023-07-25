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


#if !defined(PROTOCOL_VALIDATOR_HPP)
#define PROTOCOL_VALIDATOR_HPP

#include "fit.hpp"

namespace fit
{
class MesgDefinition;
class Mesg;

class Validator
{
public:
    virtual ~Validator() {}

    virtual bool ValidateMesg( const Mesg& mesg ) = 0;
    virtual bool ValidateMesgDefn( const MesgDefinition& defn ) = 0;
};

class ProtocolValidator
    : public Validator
{
public:
    ProtocolValidator() = delete;
    explicit ProtocolValidator( ProtocolVersion version );
    ~ProtocolValidator();

    bool ValidateMesg( const Mesg& mesg ) override final;
    bool ValidateMesgDefn( const MesgDefinition& defn ) override final;

private:
    Validator* validator;
};

class V1Validator
    : public Validator
{
public:
    bool ValidateMesg( const Mesg& mesg ) override final;
    bool ValidateMesgDefn( const MesgDefinition& defn ) override final;
};

} // namespace fit

#endif // defined(PROTOCOL_VALIDATOR_HPP)
