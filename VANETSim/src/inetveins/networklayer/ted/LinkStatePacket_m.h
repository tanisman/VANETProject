//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/ted/LinkStatePacket.msg.
//

#ifndef _INETVEINS_LINKSTATEPACKET_M_H_
#define _INETVEINS_LINKSTATEPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/networklayer/ted/TED_m.h"
// }}


namespace inetveins {

/**
 * Class generated from <tt>inetveins/networklayer/ted/LinkStatePacket.msg:33</tt> by nedtool.
 * <pre>
 * //
 * // Packet for disseminating link state information (~TELinkStateInfo[]) by the
 * // ~LinkStateRouting module which implements a minimalistic link state routing
 * // protocol.
 * //
 * packet LinkStateMsg
 * {
 *     TELinkStateInfo linkInfo[];
 * 
 *     bool request = false; // if true, receiver is expected to send back its own link state database to the sender --FIXME really needed?
 *         // bool ack = false; -- apparently unused, removed -- TODO check with Vojta
 * 
 *     int command = LINK_STATE_MESSAGE; // FIXME maybe do without this...
 * }
 * </pre>
 */
class LinkStateMsg : public ::cPacket
{
  protected:
    TELinkStateInfo *linkInfo_var; // array ptr
    unsigned int linkInfo_arraysize;
    bool request_var;
    int command_var;

  private:
    void copy(const LinkStateMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LinkStateMsg&);

  public:
    LinkStateMsg(const char *name=NULL, int kind=0);
    LinkStateMsg(const LinkStateMsg& other);
    virtual ~LinkStateMsg();
    LinkStateMsg& operator=(const LinkStateMsg& other);
    virtual LinkStateMsg *dup() const {return new LinkStateMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setLinkInfoArraySize(unsigned int size);
    virtual unsigned int getLinkInfoArraySize() const;
    virtual TELinkStateInfo& getLinkInfo(unsigned int k);
    virtual const TELinkStateInfo& getLinkInfo(unsigned int k) const {return const_cast<LinkStateMsg*>(this)->getLinkInfo(k);}
    virtual void setLinkInfo(unsigned int k, const TELinkStateInfo& linkInfo);
    virtual bool getRequest() const;
    virtual void setRequest(bool request);
    virtual int getCommand() const;
    virtual void setCommand(int command);
};

inline void doPacking(cCommBuffer *b, LinkStateMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LinkStateMsg& obj) {obj.parsimUnpack(b);}

} // namespace inetveins

#endif // ifndef _INETVEINS_LINKSTATEPACKET_M_H_

