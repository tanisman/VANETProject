//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/saors/base/SAORS_BEACON.msg.
//

#ifndef _INET__INETMANET_SAORS_BEACON_M_H_
#define _INET__INETMANET_SAORS_BEACON_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/routing/extras/dymo_fau/DYMO_RM_m.h"
#include "inet/routing/extras/dymo_fau/DYMO_PacketBBMessage_m.h"
#include "SAORSBase_BeaconBlock.h"
#include "inet/routing/extras/dymo_fau/DYMO_AddressBlock.h"
#include "inet/routing/extras/dymo_fau/InspectorHelpers.h"
#include <vector>
#include <sys/types.h>
#include <iostream>
// }}


namespace inet {
namespace inetmanet {

// cplusplus {{
typedef std::vector<SAORSBase_BeaconBlock> VectorOfSAORSBeaconBlocks;

inline std::ostream& operator<<(std::ostream& out, VectorOfSAORSBeaconBlocks& vctr) {
	SAORSBase_BeaconBlock entry;
	
	out << "{";
	
    for(std::vector<SAORSBase_BeaconBlock>::iterator iter=vctr.begin(); iter < vctr.end(); iter++) {
    	entry=*iter;
    	out << "Address: " << entry.getAddress() << " Prob: " << entry.getBeacons() << ", " << endl;
    }

    out << "}" << endl;

    return out;
}
// }}

/**
 * Class generated from <tt>routing/extras/saors/base/SAORS_BEACON.msg:77</tt> by nedtool.
 * <pre>
 * //
 * // <b> The SAORS Beacon Message </b>
 * //
 * // SAORS is an opportunistic routing protocol development system
 * // and therefore based on a beacon mechanism. Consequently, beacons
 * // are the most important component of the system. Beacons are 
 * // transmitted periodically and contain information such as the
 * // social neighbours of a node and other global metrics such
 * // as betweenness. The metrics that are contained in the routing
 * // entries are transmitted using the BeaconEntries, achieving
 * // differentiation between each entry. On the other hand, metrics
 * // characterizing the transmitting node itself, are send included
 * // dirrectly into the beacon. 
 * //
 * // @see SAORSBase
 * //
 * // @author: Nikolaos Vastardis
 * //
 * message SAORS_BEACON extends DYMO_RM
 * {
 *     double betw;
 *     VectorOfSAORSBeaconBlocks BeaconEntries;
 * }
 * </pre>
 */
class SAORS_BEACON : public ::inet::inetmanet::DYMO_RM
{
  protected:
    double betw_var;
    VectorOfSAORSBeaconBlocks BeaconEntries_var;

  private:
    void copy(const SAORS_BEACON& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SAORS_BEACON&);

  public:
    SAORS_BEACON(const char *name=NULL, int kind=0);
    SAORS_BEACON(const SAORS_BEACON& other);
    virtual ~SAORS_BEACON();
    SAORS_BEACON& operator=(const SAORS_BEACON& other);
    virtual SAORS_BEACON *dup() const {return new SAORS_BEACON(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual double getBetw() const;
    virtual void setBetw(double betw);
    virtual VectorOfSAORSBeaconBlocks& getBeaconEntries();
    virtual const VectorOfSAORSBeaconBlocks& getBeaconEntries() const {return const_cast<SAORS_BEACON*>(this)->getBeaconEntries();}
    virtual void setBeaconEntries(const VectorOfSAORSBeaconBlocks& BeaconEntries);
};

inline void doPacking(cCommBuffer *b, SAORS_BEACON& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SAORS_BEACON& obj) {obj.parsimUnpack(b);}

} // namespace inetmanet
} // namespace inet

#endif // ifndef _INET__INETMANET_SAORS_BEACON_M_H_
