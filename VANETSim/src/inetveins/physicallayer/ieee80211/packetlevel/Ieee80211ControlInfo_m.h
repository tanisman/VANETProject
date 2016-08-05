//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg.
//

#ifndef _INETVEINS__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H_
#define _INETVEINS__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inetveins/physicallayer/contract/packetlevel/RadioControlInfo_m.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211ModeSet.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211Channel.h"
// }}


namespace inetveins {
namespace physicallayer {

// cplusplus {{
typedef const Ieee80211ModeSet * Ieee80211ModeSetPtr;
typedef const IIeee80211Mode * IIeee80211ModePtr;
typedef IIeee80211Band * IIeee80211BandPtr;
typedef Ieee80211Channel * Ieee80211ChannelPtr;
// }}

/**
 * Class generated from <tt>inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:44</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a configure command that is sent to the ~Radio.
 * //
 * class Ieee80211ConfigureRadioCommand extends ConfigureRadioCommand
 * {
 *     string opMode;                         // new default operation mode or "" if not set.
 *     Ieee80211ModeSetPtr modeSet = nullptr; // new default mode set or nullptr if not set.
 *     IIeee80211ModePtr mode = nullptr;      // new default transmission mode or nullptr if not set.
 *     IIeee80211BandPtr band = nullptr;      // new default band or nullptr if not set.
 *     Ieee80211ChannelPtr channel = nullptr; // new default band and channel or nullptr if not set.
 *     int channelNumber = -1;                // new default channel number in the range [0, numChannels] or -1 if not set.
 * }
 * </pre>
 */
class Ieee80211ConfigureRadioCommand : public ::inetveins::physicallayer::ConfigureRadioCommand
{
  protected:
    opp_string opMode_var;
    Ieee80211ModeSetPtr modeSet_var;
    IIeee80211ModePtr mode_var;
    IIeee80211BandPtr band_var;
    Ieee80211ChannelPtr channel_var;
    int channelNumber_var;

  private:
    void copy(const Ieee80211ConfigureRadioCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ConfigureRadioCommand&);

  public:
    Ieee80211ConfigureRadioCommand();
    Ieee80211ConfigureRadioCommand(const Ieee80211ConfigureRadioCommand& other);
    virtual ~Ieee80211ConfigureRadioCommand();
    Ieee80211ConfigureRadioCommand& operator=(const Ieee80211ConfigureRadioCommand& other);
    virtual Ieee80211ConfigureRadioCommand *dup() const {return new Ieee80211ConfigureRadioCommand(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getOpMode() const;
    virtual void setOpMode(const char * opMode);
    virtual Ieee80211ModeSetPtr& getModeSet();
    virtual const Ieee80211ModeSetPtr& getModeSet() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getModeSet();}
    virtual void setModeSet(const Ieee80211ModeSetPtr& modeSet);
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual IIeee80211BandPtr& getBand();
    virtual const IIeee80211BandPtr& getBand() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getBand();}
    virtual void setBand(const IIeee80211BandPtr& band);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
};

inline void doPacking(cCommBuffer *b, Ieee80211ConfigureRadioCommand& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ConfigureRadioCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:57</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent down to the ~Ieee80211Radio.
 * //
 * class Ieee80211TransmissionRequest extends TransmissionRequest
 * {
 *     IIeee80211ModePtr mode = nullptr;      // override default transmission mode or nullptr if not set.
 *     int channelNumber = -1;                // override default channel or -1 if not set.
 *     Ieee80211ChannelPtr channel = nullptr; // override default band and channel or nullptr if not set.
 * }
 * </pre>
 */
class Ieee80211TransmissionRequest : public ::inetveins::physicallayer::TransmissionRequest
{
  protected:
    IIeee80211ModePtr mode_var;
    int channelNumber_var;
    Ieee80211ChannelPtr channel_var;

  private:
    void copy(const Ieee80211TransmissionRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211TransmissionRequest&);

  public:
    Ieee80211TransmissionRequest();
    Ieee80211TransmissionRequest(const Ieee80211TransmissionRequest& other);
    virtual ~Ieee80211TransmissionRequest();
    Ieee80211TransmissionRequest& operator=(const Ieee80211TransmissionRequest& other);
    virtual Ieee80211TransmissionRequest *dup() const {return new Ieee80211TransmissionRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211TransmissionRequest*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211TransmissionRequest*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
};

inline void doPacking(cCommBuffer *b, Ieee80211TransmissionRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211TransmissionRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:67</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent up from the ~Ieee80211Radio.
 * //
 * class Ieee80211ReceptionIndication extends ReceptionIndication
 * {
 *     IIeee80211ModePtr mode = nullptr;      // specifies reception mode.
 *     Ieee80211ChannelPtr channel = nullptr; // specifies reception band and channel
 *     // TODO: remove already inherited fields
 *     double snr;
 *     double lossRate;
 *     double recPow;
 *     bool airtimeMetric;
 *     double testFrameDuration;
 *     double testFrameError;
 *     int testFrameSize;
 * }
 * </pre>
 */
class Ieee80211ReceptionIndication : public ::inetveins::physicallayer::ReceptionIndication
{
  protected:
    IIeee80211ModePtr mode_var;
    Ieee80211ChannelPtr channel_var;
    double snr_var;
    double lossRate_var;
    double recPow_var;
    bool airtimeMetric_var;
    double testFrameDuration_var;
    double testFrameError_var;
    int testFrameSize_var;

  private:
    void copy(const Ieee80211ReceptionIndication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ReceptionIndication&);

  public:
    Ieee80211ReceptionIndication();
    Ieee80211ReceptionIndication(const Ieee80211ReceptionIndication& other);
    virtual ~Ieee80211ReceptionIndication();
    Ieee80211ReceptionIndication& operator=(const Ieee80211ReceptionIndication& other);
    virtual Ieee80211ReceptionIndication *dup() const {return new Ieee80211ReceptionIndication(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211ReceptionIndication*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211ReceptionIndication*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
    virtual double getSnr() const;
    virtual void setSnr(double snr);
    virtual double getLossRate() const;
    virtual void setLossRate(double lossRate);
    virtual double getRecPow() const;
    virtual void setRecPow(double recPow);
    virtual bool getAirtimeMetric() const;
    virtual void setAirtimeMetric(bool airtimeMetric);
    virtual double getTestFrameDuration() const;
    virtual void setTestFrameDuration(double testFrameDuration);
    virtual double getTestFrameError() const;
    virtual void setTestFrameError(double testFrameError);
    virtual int getTestFrameSize() const;
    virtual void setTestFrameSize(int testFrameSize);
};

inline void doPacking(cCommBuffer *b, Ieee80211ReceptionIndication& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ReceptionIndication& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inetveins

#endif // ifndef _INETVEINS__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H_

