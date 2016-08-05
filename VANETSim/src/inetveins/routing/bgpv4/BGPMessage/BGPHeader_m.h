//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/routing/bgpv4/BGPMessage/BGPHeader.msg.
//

#ifndef _INETVEINS__BGP_BGPHEADER_M_H_
#define _INETVEINS__BGP_BGPHEADER_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
namespace inetveins {
const int BGP_HEADER_OCTETS = 19;
} // namespace inet
// }}


namespace inetveins {
namespace bgp {

/**
 * Enum generated from <tt>inetveins/routing/bgpv4/BGPMessage/BGPHeader.msg:33</tt> by nedtool.
 * <pre>
 * //
 * // BGPv4 message types
 * //
 * enum BGPType
 * {
 * 
 *     BGP_OPEN = 1;
 *     BGP_UPDATE = 2;
 *     BGP_NOTIFICATION = 3;
 *     BGP_KEEPALIVE = 4;
 * }
 * </pre>
 */
enum BGPType {
    BGP_OPEN = 1,
    BGP_UPDATE = 2,
    BGP_NOTIFICATION = 3,
    BGP_KEEPALIVE = 4
};

/**
 * Class generated from <tt>inetveins/routing/bgpv4/BGPMessage/BGPHeader.msg:49</tt> by nedtool.
 * <pre>
 * //
 * // Represents a BGPv4 message header.
 * //
 * // Header fields modeled:
 * //   - Marker: 16 octets (authentication)
 * //   - Length: 2 octets  (total size of the message)
 * //   - Type: 1 octet
 * //
 * packet BGPHeader
 * {
 *     byteLength = BGP_HEADER_OCTETS;
 *     char type @enum(BGPType);
 * }
 * </pre>
 */
class BGPHeader : public ::cPacket
{
  protected:
    char type_var;

  private:
    void copy(const BGPHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BGPHeader&);

  public:
    BGPHeader(const char *name=NULL, int kind=0);
    BGPHeader(const BGPHeader& other);
    virtual ~BGPHeader();
    BGPHeader& operator=(const BGPHeader& other);
    virtual BGPHeader *dup() const {return new BGPHeader(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getType() const;
    virtual void setType(char type);
};

inline void doPacking(cCommBuffer *b, BGPHeader& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BGPHeader& obj) {obj.parsimUnpack(b);}

} // namespace bgp
} // namespace inetveins

#endif // ifndef _INETVEINS__BGP_BGPHEADER_M_H_

