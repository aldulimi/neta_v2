//
// Generated file, do not edit! Created by nedtool 4.6 from detection/controlmessages/droppingDetectorStandalone/NA_DroppingDetectorStandaloneMessage.msg.
//

#ifndef _NA_DROPPINGDETECTORSTANDALONEMESSAGE_M_H_
#define _NA_DROPPINGDETECTORSTANDALONEMESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>detection/controlmessages/droppingDetectorStandalone/NA_DroppingDetectorStandaloneMessage.msg:26</tt> by nedtool.
 * <pre>
 * message NA_DroppingDetectorStandaloneMessage
 * {
 *     long SentRTS;
 *     long ReceivedCTS;
 *     long pMob;
 *     long FordwardedCount;
 *     long ReceivedCount;
 *     long RREQCount;
 *     long EventWindowSize;
 * }
 * </pre>
 */
class NA_DroppingDetectorStandaloneMessage : public ::cMessage
{
  protected:
    long SentRTS_var;
    long ReceivedCTS_var;
    long pMob_var;
    long FordwardedCount_var;
    long ReceivedCount_var;
    long RREQCount_var;
    long EventWindowSize_var;

  private:
    void copy(const NA_DroppingDetectorStandaloneMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NA_DroppingDetectorStandaloneMessage&);

  public:
    NA_DroppingDetectorStandaloneMessage(const char *name=NULL, int kind=0);
    NA_DroppingDetectorStandaloneMessage(const NA_DroppingDetectorStandaloneMessage& other);
    virtual ~NA_DroppingDetectorStandaloneMessage();
    NA_DroppingDetectorStandaloneMessage& operator=(const NA_DroppingDetectorStandaloneMessage& other);
    virtual NA_DroppingDetectorStandaloneMessage *dup() const {return new NA_DroppingDetectorStandaloneMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual long getSentRTS() const;
    virtual void setSentRTS(long SentRTS);
    virtual long getReceivedCTS() const;
    virtual void setReceivedCTS(long ReceivedCTS);
    virtual long getPMob() const;
    virtual void setPMob(long pMob);
    virtual long getFordwardedCount() const;
    virtual void setFordwardedCount(long FordwardedCount);
    virtual long getReceivedCount() const;
    virtual void setReceivedCount(long ReceivedCount);
    virtual long getRREQCount() const;
    virtual void setRREQCount(long RREQCount);
    virtual long getEventWindowSize() const;
    virtual void setEventWindowSize(long EventWindowSize);
};

inline void doPacking(cCommBuffer *b, NA_DroppingDetectorStandaloneMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NA_DroppingDetectorStandaloneMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _NA_DROPPINGDETECTORSTANDALONEMESSAGE_M_H_

