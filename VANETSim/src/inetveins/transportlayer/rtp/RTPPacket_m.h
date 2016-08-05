//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/transportlayer/rtp/RTPPacket.msg.
//

#ifndef _INETVEINS__RTP_RTPPACKET_M_H_
#define _INETVEINS__RTP_RTPPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/common/INETDefs.h"
// }}


namespace inetveins {
namespace rtp {

/**
 * Enum generated from <tt>inetveins/transportlayer/rtp/RTPPacket.msg:27</tt> by nedtool.
 * <pre>
 * enum RTPPacketEnums
 * {
 * 
 *     RTPPACKET_FIX_HEADERLENGTH = 12;
 * }
 * </pre>
 */
enum RTPPacketEnums {
    RTPPACKET_FIX_HEADERLENGTH = 12
};

/**
 * Class generated from <tt>inetveins/transportlayer/rtp/RTPPacket.msg:40</tt> by nedtool.
 * <pre>
 * //
 * // This class represents an RTP data packet. Real data can either
 * // be encapsulated, or simulated by adding length.
 * //
 * // The following RTP header fields exist but aren't used:
 * // padding, extension, csrcCount. The csrcList can't be used
 * // because csrcCount is always 0.
 * //
 * packet RTPPacket
 * {
 *     @customize(true);  // see the generated C++ header for more info
 *     @fieldNameSuffix("_var"); //TODO remove when OMNeT++ 4.x compatibility is no longer required
 * 
 *     byteLength = RTPPACKET_FIX_HEADERLENGTH;  // 12-byte fixed header
 * 
 *     // The rtp version of this ~RTPPacket.
 *     uint8 version = 2;
 * 
 *     // Set to 1 if padding is used in this ~RTPPacket, 0 otherwise.
 *     // This implementation doesn't use padding bytes, so it is always 0.
 *     bool padding = false;
 * 
 *     // Set to 1, if this ~RTPPacket contains an rtp header extension, 0 otherwise.
 *     // This implementation doesn't support rtp header extensions, so it is always 0.
 *     bool extension = false;
 * 
 *     // The marker.
 *     bool marker = false;
 * 
 *     // The type of payload carried in this ~RTPPacket.
 *     int8 payloadType;
 * 
 *     // The sequence number of this ~RTPPacket.
 *     uint16 sequenceNumber;
 * 
 *     // The rtp time stamp of this ~RTPPacket.
 *     uint32 timeStamp;
 * 
 *     // The ssrc identifier of the creator of this ~RTPPacket.
 *     uint32 ssrc;
 * 
 *     // no mixers, no contributing sources
 *     uint32 csrc[];
 * 
 *     abstract int headerLength;
 * 
 *     abstract int payloadLength;
 * }
 * </pre>
 *
 * RTPPacket_Base is only useful if it gets subclassed, and RTPPacket is derived from it.
 * The minimum code to be written for RTPPacket is the following:
 *
 * <pre>
 * class RTPPacket : public RTPPacket_Base
 * {
 *   private:
 *     void copy(const RTPPacket& other) { ... }

 *   public:
 *     RTPPacket(const char *name=NULL, int kind=0) : RTPPacket_Base(name,kind) {}
 *     RTPPacket(const RTPPacket& other) : RTPPacket_Base(other) {copy(other);}
 *     RTPPacket& operator=(const RTPPacket& other) {if (this==&other) return *this; RTPPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTPPacket *dup() const {return new RTPPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTPPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTPPacket);
 * </pre>
 */
class RTPPacket_Base : public ::cPacket
{
  protected:
    uint8 version_var;
    bool padding_var;
    bool extension_var;
    bool marker_var;
    int8 payloadType_var;
    uint16 sequenceNumber_var;
    uint32 timeStamp_var;
    uint32 ssrc_var;
    uint32 *csrc_var; // array ptr
    unsigned int csrc_arraysize;

  private:
    void copy(const RTPPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPPacket_Base&);
    // make constructors protected to avoid instantiation
    RTPPacket_Base(const char *name=NULL, int kind=0);
    RTPPacket_Base(const RTPPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTPPacket_Base& operator=(const RTPPacket_Base& other);

  public:
    virtual ~RTPPacket_Base();
    virtual RTPPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class RTPPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint8 getVersion() const;
    virtual void setVersion(uint8 version);
    virtual bool getPadding() const;
    virtual void setPadding(bool padding);
    virtual bool getExtension() const;
    virtual void setExtension(bool extension);
    virtual bool getMarker() const;
    virtual void setMarker(bool marker);
    virtual int8 getPayloadType() const;
    virtual void setPayloadType(int8 payloadType);
    virtual uint16 getSequenceNumber() const;
    virtual void setSequenceNumber(uint16 sequenceNumber);
    virtual uint32 getTimeStamp() const;
    virtual void setTimeStamp(uint32 timeStamp);
    virtual uint32 getSsrc() const;
    virtual void setSsrc(uint32 ssrc);
    virtual void setCsrcArraySize(unsigned int size);
    virtual unsigned int getCsrcArraySize() const;
    virtual uint32 getCsrc(unsigned int k) const;
    virtual void setCsrc(unsigned int k, uint32 csrc);
    virtual int getHeaderLength() const = 0;
    virtual void setHeaderLength(int headerLength) = 0;
    virtual int getPayloadLength() const = 0;
    virtual void setPayloadLength(int payloadLength) = 0;
};

} // namespace rtp
} // namespace inetveins

#endif // ifndef _INETVEINS__RTP_RTPPACKET_M_H_

