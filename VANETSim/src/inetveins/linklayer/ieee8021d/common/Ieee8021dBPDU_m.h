//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/linklayer/ieee8021d/common/Ieee8021dBPDU.msg.
//

#ifndef _INETVEINS_IEEE8021DBPDU_M_H_
#define _INETVEINS_IEEE8021DBPDU_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/linklayer/common/MACAddress.h"
// }}


namespace inetveins {

/**
 * Class generated from <tt>inetveins/linklayer/ieee8021d/common/Ieee8021dBPDU.msg:30</tt> by nedtool.
 * <pre>
 * //
 * // Represents a BPDU (Bridge PDU) used by the STP and RSTP protocols,
 * // as defined in the 802.1D-1998 specification.
 * //
 * packet BPDU
 * {
 *     byteLength = 35;
 *     unsigned int protocolIdentifier;          // 0 for STP, 1 for RSTP (TODO use them)
 *     unsigned int protocolVersionIdentifier;   // currently 0
 * 
 *     unsigned int bpduType;                    // 0 for Configuration BPDU, 1 for Topology Change Notification BPDU
 *     bool tcaFlag;                             // Topology Change Acknowledgment flag
 *     bool tcFlag;                              // Topology Change flag
 * 
 *     MACAddress rootAddress;                   // address of the tree root (first part of Root Identifier)
 *     unsigned int rootPriority;                // priority of the tree root (second part of Root Identifier)
 *     unsigned int rootPathCost;                // cost to the root
 * 
 *     MACAddress bridgeAddress;                 // address of sender bridge (first part of Bridge Identifier)
 *     unsigned int bridgePriority;              // priority of sender bridge (second part of Bridge Identifier)
 * 
 *     unsigned int portNum;                     // port number (ethg[] gate index) of sender port (first part of Port Identifier)
 *     unsigned int portPriority;                // priority of sender port (second part of Port Identifier)
 * 
 *     simtime_t messageAge;                     // Message Age in seconds
 *     simtime_t maxAge;                         // maximum lifetime of the BPDU (seconds)
 *     simtime_t helloTime;                      // Hello Time of the sender bridge
 *     simtime_t forwardDelay;                   // Forward Delay timer of the sender bridge
 * }
 * </pre>
 */
class BPDU : public ::cPacket
{
  protected:
    unsigned int protocolIdentifier_var;
    unsigned int protocolVersionIdentifier_var;
    unsigned int bpduType_var;
    bool tcaFlag_var;
    bool tcFlag_var;
    MACAddress rootAddress_var;
    unsigned int rootPriority_var;
    unsigned int rootPathCost_var;
    MACAddress bridgeAddress_var;
    unsigned int bridgePriority_var;
    unsigned int portNum_var;
    unsigned int portPriority_var;
    simtime_t messageAge_var;
    simtime_t maxAge_var;
    simtime_t helloTime_var;
    simtime_t forwardDelay_var;

  private:
    void copy(const BPDU& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BPDU&);

  public:
    BPDU(const char *name=NULL, int kind=0);
    BPDU(const BPDU& other);
    virtual ~BPDU();
    BPDU& operator=(const BPDU& other);
    virtual BPDU *dup() const {return new BPDU(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getProtocolIdentifier() const;
    virtual void setProtocolIdentifier(unsigned int protocolIdentifier);
    virtual unsigned int getProtocolVersionIdentifier() const;
    virtual void setProtocolVersionIdentifier(unsigned int protocolVersionIdentifier);
    virtual unsigned int getBpduType() const;
    virtual void setBpduType(unsigned int bpduType);
    virtual bool getTcaFlag() const;
    virtual void setTcaFlag(bool tcaFlag);
    virtual bool getTcFlag() const;
    virtual void setTcFlag(bool tcFlag);
    virtual MACAddress& getRootAddress();
    virtual const MACAddress& getRootAddress() const {return const_cast<BPDU*>(this)->getRootAddress();}
    virtual void setRootAddress(const MACAddress& rootAddress);
    virtual unsigned int getRootPriority() const;
    virtual void setRootPriority(unsigned int rootPriority);
    virtual unsigned int getRootPathCost() const;
    virtual void setRootPathCost(unsigned int rootPathCost);
    virtual MACAddress& getBridgeAddress();
    virtual const MACAddress& getBridgeAddress() const {return const_cast<BPDU*>(this)->getBridgeAddress();}
    virtual void setBridgeAddress(const MACAddress& bridgeAddress);
    virtual unsigned int getBridgePriority() const;
    virtual void setBridgePriority(unsigned int bridgePriority);
    virtual unsigned int getPortNum() const;
    virtual void setPortNum(unsigned int portNum);
    virtual unsigned int getPortPriority() const;
    virtual void setPortPriority(unsigned int portPriority);
    virtual simtime_t getMessageAge() const;
    virtual void setMessageAge(simtime_t messageAge);
    virtual simtime_t getMaxAge() const;
    virtual void setMaxAge(simtime_t maxAge);
    virtual simtime_t getHelloTime() const;
    virtual void setHelloTime(simtime_t helloTime);
    virtual simtime_t getForwardDelay() const;
    virtual void setForwardDelay(simtime_t forwardDelay);
};

inline void doPacking(cCommBuffer *b, BPDU& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BPDU& obj) {obj.parsimUnpack(b);}

} // namespace inetveins

#endif // ifndef _INETVEINS_IEEE8021DBPDU_M_H_

