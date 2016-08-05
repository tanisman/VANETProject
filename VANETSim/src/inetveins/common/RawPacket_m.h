//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/common/RawPacket.msg.
//

#ifndef _INETVEINS_RAWPACKET_M_H_
#define _INETVEINS_RAWPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/common/INETDefs.h"

#include "inetveins/common/ByteArray.h"
// }}


namespace inetveins {

/**
 * Class generated from <tt>inetveins/common/RawPacket.msg:31</tt> by nedtool.
 * <pre>
 * //
 * // Packet that carries raw network bytes.
 * // Used with emulation-related features.
 * //
 * packet RawPacket
 * {
 *     @customize(true);
 *     @fieldNameSuffix("_var"); //TODO remove when OMNeT++ 4.x compatibility is no longer required
 *     ByteArray byteArray;
 * }
 * </pre>
 *
 * RawPacket_Base is only useful if it gets subclassed, and RawPacket is derived from it.
 * The minimum code to be written for RawPacket is the following:
 *
 * <pre>
 * class RawPacket : public RawPacket_Base
 * {
 *   private:
 *     void copy(const RawPacket& other) { ... }

 *   public:
 *     RawPacket(const char *name=NULL, int kind=0) : RawPacket_Base(name,kind) {}
 *     RawPacket(const RawPacket& other) : RawPacket_Base(other) {copy(other);}
 *     RawPacket& operator=(const RawPacket& other) {if (this==&other) return *this; RawPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RawPacket *dup() const {return new RawPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RawPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RawPacket);
 * </pre>
 */
class RawPacket_Base : public ::cPacket
{
  protected:
    ByteArray byteArray_var;

  private:
    void copy(const RawPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RawPacket_Base&);
    // make constructors protected to avoid instantiation
    RawPacket_Base(const char *name=NULL, int kind=0);
    RawPacket_Base(const RawPacket_Base& other);
    // make assignment operator protected to force the user override it
    RawPacket_Base& operator=(const RawPacket_Base& other);

  public:
    virtual ~RawPacket_Base();
    virtual RawPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RawPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual ByteArray& getByteArray();
    virtual const ByteArray& getByteArray() const {return const_cast<RawPacket_Base*>(this)->getByteArray();}
    virtual void setByteArray(const ByteArray& byteArray);
};

} // namespace inetveins

#endif // ifndef _INETVEINS_RAWPACKET_M_H_

