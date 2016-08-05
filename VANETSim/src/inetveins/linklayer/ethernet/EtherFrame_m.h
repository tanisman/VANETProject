//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/linklayer/ethernet/EtherFrame.msg.
//

#ifndef _INETVEINS_ETHERFRAME_M_H_
#define _INETVEINS_ETHERFRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/linklayer/ethernet/Ethernet.h"
#include "inetveins/linklayer/common/MACAddress.h"
#include "inetveins/linklayer/common/Ieee802Ctrl_m.h" // for enums
// }}


namespace inetveins {

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:40</tt> by nedtool.
 * <pre>
 * //
 * // This class should never be instantiated by the models, only specific
 * // subclasses: EthernetJam, EtherIFG and submodules of ~EtherFrame.
 * //
 * packet EtherTraffic
 * {
 * }
 * </pre>
 */
class EtherTraffic : public ::cPacket
{
  protected:

  private:
    void copy(const EtherTraffic& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherTraffic&);

  public:
    EtherTraffic(const char *name=NULL, int kind=0);
    EtherTraffic(const EtherTraffic& other);
    virtual ~EtherTraffic();
    EtherTraffic& operator=(const EtherTraffic& other);
    virtual EtherTraffic *dup() const {return new EtherTraffic(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, EtherTraffic& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherTraffic& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:47</tt> by nedtool.
 * <pre>
 * //
 * // Represents jam on the Ethernet.
 * //
 * packet EtherJam extends EtherTraffic
 * {
 *     long abortedPkTreeID = 0;  // this field stores the packetTreeId of the aborted packet
 * }
 * </pre>
 */
class EtherJam : public ::inetveins::EtherTraffic
{
  protected:
    long abortedPkTreeID_var;

  private:
    void copy(const EtherJam& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherJam&);

  public:
    EtherJam(const char *name=NULL, int kind=0);
    EtherJam(const EtherJam& other);
    virtual ~EtherJam();
    EtherJam& operator=(const EtherJam& other);
    virtual EtherJam *dup() const {return new EtherJam(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getAbortedPkTreeID() const;
    virtual void setAbortedPkTreeID(long abortedPkTreeID);
};

inline void doPacking(cCommBuffer *b, EtherJam& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherJam& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // Represents a filled inter-frame gap in burst mode.
 * // Also used for calculating IFG times.
 * //
 * packet EtherIFG extends EtherTraffic
 * {
 *     bitLength = INTERFRAME_GAP_BITS;
 * }
 * </pre>
 */
class EtherIFG : public ::inetveins::EtherTraffic
{
  protected:

  private:
    void copy(const EtherIFG& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherIFG&);

  public:
    EtherIFG(const char *name=NULL, int kind=0);
    EtherIFG(const EtherIFG& other);
    virtual ~EtherIFG();
    EtherIFG& operator=(const EtherIFG& other);
    virtual EtherIFG *dup() const {return new EtherIFG(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, EtherIFG& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherIFG& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:77</tt> by nedtool.
 * <pre>
 * //
 * // Common base class for classes representing Ethernet II and 802.3 frame types,
 * // containing their common header fields.
 * //
 * // This class should never be instantiated by the models, only specific
 * // subclasses: ~EthernetIIFrame, ~EtherFrameWithLLC and ~EtherFrameWithSNAP.
 * //
 * // Source and destination MAC address are stored in data members.
 * // Other Ethernet header fields include:
 * //  - preamble: not stored (only contributes to length)
 * //  - length: stored in cPacket byteLength; during tranmission, cPacket byteLength
 * //    includes pyhsical layer overhead and the frameByteLength field stores the
 * //    actual frame length
 * //  - payload: stored a encapsulated packet (cPacket::encapsulate())
 * //  - crc: represented by cPacket::hasBitError()
 * //
 * packet EtherFrame extends EtherTraffic
 * {
 *     MACAddress dest;
 *     MACAddress src;
 *     int frameByteLength;  // frame length without physical layer overhead (preamble, SFD, carrier extension); used by MAC layer
 * }
 * </pre>
 */
class EtherFrame : public ::inetveins::EtherTraffic
{
  protected:
    MACAddress dest_var;
    MACAddress src_var;
    int frameByteLength_var;

  private:
    void copy(const EtherFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrame&);

  public:
    EtherFrame(const char *name=NULL, int kind=0);
    EtherFrame(const EtherFrame& other);
    virtual ~EtherFrame();
    EtherFrame& operator=(const EtherFrame& other);
    virtual EtherFrame *dup() const {return new EtherFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getDest();
    virtual const MACAddress& getDest() const {return const_cast<EtherFrame*>(this)->getDest();}
    virtual void setDest(const MACAddress& dest);
    virtual MACAddress& getSrc();
    virtual const MACAddress& getSrc() const {return const_cast<EtherFrame*>(this)->getSrc();}
    virtual void setSrc(const MACAddress& src);
    virtual int getFrameByteLength() const;
    virtual void setFrameByteLength(int frameByteLength);
};

inline void doPacking(cCommBuffer *b, EtherFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:91</tt> by nedtool.
 * <pre>
 * //
 * // Ethernet II headers contain a 16-bit ~EtherType to identify
 * // the encapsulated protocol.
 * //
 * // Header length: src(6)+dest(6)+etherType(2) = 14 bytes
 * //
 * packet EthernetIIFrame extends EtherFrame
 * {
 *     int etherType @enum(EtherType);
 * }
 * </pre>
 */
class EthernetIIFrame : public ::inetveins::EtherFrame
{
  protected:
    int etherType_var;

  private:
    void copy(const EthernetIIFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EthernetIIFrame&);

  public:
    EthernetIIFrame(const char *name=NULL, int kind=0);
    EthernetIIFrame(const EthernetIIFrame& other);
    virtual ~EthernetIIFrame();
    EthernetIIFrame& operator=(const EthernetIIFrame& other);
    virtual EthernetIIFrame *dup() const {return new EthernetIIFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
};

inline void doPacking(cCommBuffer *b, EthernetIIFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EthernetIIFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:102</tt> by nedtool.
 * <pre>
 * //
 * // Ethernet frame with 802.3 LLC header.
 * //
 * // Header length: src(6)+dest(6)+length(2)+ssap(1)+dsap(1)+control(1) = 17 bytes
 * //
 * packet EtherFrameWithLLC extends EtherFrame
 * {
 *     int dsap;
 *     int ssap;
 *     int control;
 * }
 * </pre>
 */
class EtherFrameWithLLC : public ::inetveins::EtherFrame
{
  protected:
    int dsap_var;
    int ssap_var;
    int control_var;

  private:
    void copy(const EtherFrameWithLLC& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrameWithLLC&);

  public:
    EtherFrameWithLLC(const char *name=NULL, int kind=0);
    EtherFrameWithLLC(const EtherFrameWithLLC& other);
    virtual ~EtherFrameWithLLC();
    EtherFrameWithLLC& operator=(const EtherFrameWithLLC& other);
    virtual EtherFrameWithLLC *dup() const {return new EtherFrameWithLLC(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getDsap() const;
    virtual void setDsap(int dsap);
    virtual int getSsap() const;
    virtual void setSsap(int ssap);
    virtual int getControl() const;
    virtual void setControl(int control);
};

inline void doPacking(cCommBuffer *b, EtherFrameWithLLC& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrameWithLLC& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:119</tt> by nedtool.
 * <pre>
 * //
 * // Ethernet frame with 802.3 LLC and SNAP headers.
 * //
 * // The ssap, dsap and control LLC fields are set to fixed values in the
 * // frame: 0xAA, 0xAA, 0x03.
 * //
 * // Header length: src(6)+dest(6)+length(2)+ssap(1)+dsap(1)+control(1)+
 * // orgCode(3)+localCode(2) = 22 bytes
 * //
 * packet EtherFrameWithSNAP extends EtherFrameWithLLC
 * {
 *     dsap = 0xAA;
 *     ssap = 0xAA;
 *     control = 0x03;
 *     int orgCode;   // organizationally unique identifier (OUI); 0 for protocols that have an EtherType (ARP, IPv4, IPv6, etc.)
 *     int localcode; // protocol identifier (PID); stores ~EtherType if orgCode is 0
 * }
 * </pre>
 */
class EtherFrameWithSNAP : public ::inetveins::EtherFrameWithLLC
{
  protected:
    int orgCode_var;
    int localcode_var;

  private:
    void copy(const EtherFrameWithSNAP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherFrameWithSNAP&);

  public:
    EtherFrameWithSNAP(const char *name=NULL, int kind=0);
    EtherFrameWithSNAP(const EtherFrameWithSNAP& other);
    virtual ~EtherFrameWithSNAP();
    EtherFrameWithSNAP& operator=(const EtherFrameWithSNAP& other);
    virtual EtherFrameWithSNAP *dup() const {return new EtherFrameWithSNAP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getOrgCode() const;
    virtual void setOrgCode(int orgCode);
    virtual int getLocalcode() const;
    virtual void setLocalcode(int localcode);
};

inline void doPacking(cCommBuffer *b, EtherFrameWithSNAP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherFrameWithSNAP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:132</tt> by nedtool.
 * <pre>
 * //
 * // Ethernet frame used by the PAUSE protocol
 * //
 * packet EtherPauseFrame extends EtherFrame
 * {
 *     int pauseTime; // in 512 bit-time units
 * }
 * </pre>
 */
class EtherPauseFrame : public ::inetveins::EtherFrame
{
  protected:
    int pauseTime_var;

  private:
    void copy(const EtherPauseFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const EtherPauseFrame&);

  public:
    EtherPauseFrame(const char *name=NULL, int kind=0);
    EtherPauseFrame(const EtherPauseFrame& other);
    virtual ~EtherPauseFrame();
    EtherPauseFrame& operator=(const EtherPauseFrame& other);
    virtual EtherPauseFrame *dup() const {return new EtherPauseFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPauseTime() const;
    virtual void setPauseTime(int pauseTime);
};

inline void doPacking(cCommBuffer *b, EtherPauseFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, EtherPauseFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:141</tt> by nedtool.
 * <pre>
 * // Mod1
 * // Ethernet 802.1Q Tag. VLAN
 * //
 * //
 * packet Ethernet1QTag
 * {
 *     uint8_t pcp;    // Priority Code Point (PCP): a 3-bit field which refers to the IEEE 802.1p priority. It indicates the frame priority level.
 *                     // Values are from 0 (best effort) to 7 (highest); 1 represents the lowest priority.
 *     bool de;        // Drop Eligible (DE): a 1-bit field. May be used separately or in conjunction with PCP to indicate frames eligible to be dropped in the presence of congestion.
 *     short VID = 0;   // VLAN Identifier (VID): a 12-bit field specifying the VLAN to which the frame belongs.
 *                     // The hexadecimal values of 0x000 and 0xFFF are reserved. All other values may be used as VLAN identifiers, allowing up to 4,094 VLANs.
 *                     // The reserved value 0x000 indicates that the frame does not belong to any VLAN; in this case,
 *                     // the 802.1Q tag specifies only a priority and is referred to as a priority tag. On bridges,
 *                     // VLAN 1 (the default VLAN ID) is often reserved for a management VLAN; this is vendor-specific.
 * }
 * </pre>
 */
class Ethernet1QTag : public ::cPacket
{
  protected:
    uint8_t pcp_var;
    bool de_var;
    short VID_var;

  private:
    void copy(const Ethernet1QTag& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ethernet1QTag&);

  public:
    Ethernet1QTag(const char *name=NULL, int kind=0);
    Ethernet1QTag(const Ethernet1QTag& other);
    virtual ~Ethernet1QTag();
    Ethernet1QTag& operator=(const Ethernet1QTag& other);
    virtual Ethernet1QTag *dup() const {return new Ethernet1QTag(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual uint8_t getPcp() const;
    virtual void setPcp(uint8_t pcp);
    virtual bool getDe() const;
    virtual void setDe(bool de);
    virtual short getVID() const;
    virtual void setVID(short VID);
};

inline void doPacking(cCommBuffer *b, Ethernet1QTag& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ethernet1QTag& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/linklayer/ethernet/EtherFrame.msg:158</tt> by nedtool.
 * <pre>
 * // Mod1
 * // Ethernet 802.1ah header.
 * //
 * //
 * packet Ethernet1ahITag
 * {
 *     int ISid = 0; // ISID
 * }
 * </pre>
 */
class Ethernet1ahITag : public ::cPacket
{
  protected:
    int ISid_var;

  private:
    void copy(const Ethernet1ahITag& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ethernet1ahITag&);

  public:
    Ethernet1ahITag(const char *name=NULL, int kind=0);
    Ethernet1ahITag(const Ethernet1ahITag& other);
    virtual ~Ethernet1ahITag();
    Ethernet1ahITag& operator=(const Ethernet1ahITag& other);
    virtual Ethernet1ahITag *dup() const {return new Ethernet1ahITag(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getISid() const;
    virtual void setISid(int ISid);
};

inline void doPacking(cCommBuffer *b, Ethernet1ahITag& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ethernet1ahITag& obj) {obj.parsimUnpack(b);}

} // namespace inetveins

#endif // ifndef _INETVEINS_ETHERFRAME_M_H_

