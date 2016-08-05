//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/generic/GenericDatagram.msg.
//

#ifndef _INETVEINS_GENERICDATAGRAM_M_H_
#define _INETVEINS_GENERICDATAGRAM_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/common/TLVOption.h"
#include "inetveins/networklayer/common/L3Address.h"
#include "inetveins/networklayer/common/IPProtocolId_m.h"
// }}


namespace inetveins {

/**
 * Enum generated from <tt>inetveins/networklayer/generic/GenericDatagram.msg:35</tt> by nedtool.
 * <pre>
 * //
 * // Generic protocol TLV option types
 * //
 * enum GenericTLVOptionTypes
 * {
 * 
 *     GENERIC_TLVOPTION_NOP1 = 0;
 *     GENERIC_TLVOPTION_NOPN = 1;
 *     GENERIC_TLVOPTION_TLV_GPSR = 47;
 * }
 * </pre>
 */
enum GenericTLVOptionTypes {
    GENERIC_TLVOPTION_NOP1 = 0,
    GENERIC_TLVOPTION_NOPN = 1,
    GENERIC_TLVOPTION_TLV_GPSR = 47
};

/**
 * Class generated from <tt>inetveins/networklayer/generic/GenericDatagram.msg:47</tt> by nedtool.
 * <pre>
 * //
 * // Represents a generic network datagram with generic network addresses. 
 * //
 * packet GenericDatagram
 * {
 *     @customize(true);
 *     L3Address sourceAddress @getter(_getSrcAddr);
 *     L3Address destinationAddress @getter(_getDestAddr);
 *     int transportProtocol @enum(IPProtocolId) = IP_PROT_NONE;
 *     short hopLimit;
 *     TLVOptions tlvOptions;
 * }
 * </pre>
 *
 * GenericDatagram_Base is only useful if it gets subclassed, and GenericDatagram is derived from it.
 * The minimum code to be written for GenericDatagram is the following:
 *
 * <pre>
 * class GenericDatagram : public GenericDatagram_Base
 * {
 *   private:
 *     void copy(const GenericDatagram& other) { ... }

 *   public:
 *     GenericDatagram(const char *name=NULL, int kind=0) : GenericDatagram_Base(name,kind) {}
 *     GenericDatagram(const GenericDatagram& other) : GenericDatagram_Base(other) {copy(other);}
 *     GenericDatagram& operator=(const GenericDatagram& other) {if (this==&other) return *this; GenericDatagram_Base::operator=(other); copy(other); return *this;}
 *     virtual GenericDatagram *dup() const {return new GenericDatagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from GenericDatagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(GenericDatagram);
 * </pre>
 */
class GenericDatagram_Base : public ::cPacket
{
  protected:
    L3Address sourceAddress_var;
    L3Address destinationAddress_var;
    int transportProtocol_var;
    short hopLimit_var;
    TLVOptions tlvOptions_var;

  private:
    void copy(const GenericDatagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GenericDatagram_Base&);
    // make constructors protected to avoid instantiation
    GenericDatagram_Base(const char *name=NULL, int kind=0);
    GenericDatagram_Base(const GenericDatagram_Base& other);
    // make assignment operator protected to force the user override it
    GenericDatagram_Base& operator=(const GenericDatagram_Base& other);

  public:
    virtual ~GenericDatagram_Base();
    virtual GenericDatagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class GenericDatagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual L3Address& _getSrcAddr();
    virtual const L3Address& _getSrcAddr() const {return const_cast<GenericDatagram_Base*>(this)->_getSrcAddr();}
    virtual void setSourceAddress(const L3Address& sourceAddress);
    virtual L3Address& _getDestAddr();
    virtual const L3Address& _getDestAddr() const {return const_cast<GenericDatagram_Base*>(this)->_getDestAddr();}
    virtual void setDestinationAddress(const L3Address& destinationAddress);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit);
    virtual TLVOptions& getTlvOptions();
    virtual const TLVOptions& getTlvOptions() const {return const_cast<GenericDatagram_Base*>(this)->getTlvOptions();}
    virtual void setTlvOptions(const TLVOptions& tlvOptions);
};

} // namespace inetveins

#endif // ifndef _INETVEINS_GENERICDATAGRAM_M_H_

