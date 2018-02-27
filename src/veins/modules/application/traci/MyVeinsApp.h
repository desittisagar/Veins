#ifndef __VEINS_MYVEINSAPP_H_
#define __VEINS_MYVEINSAPP_H_

#include <omnetpp.h>
#include "veins/modules/application/ieee80211p/BaseWaveApplLayer.h"

using namespace omnetpp;


/**
 * @brief
 * This is a stub for a typical Veins application layer.
 * Most common functions are overloaded.
 * See MyVeinsApp.cc for hints
 *
 * @author David Eckhoff
 *
 */
struct neighbour{
                    int id;
                    int sid;
                    Coord pos;
                    Coord spd;
                    double dist;
                    double x;
                    double y;
                    string rid;
                    int b=0;
                    double SF;
                    simtime_t t;
                    double vi;
                    double di;
               //     bool ta=false;
                };
struct pre_pos{
    int id;
    double x;
    double y;
};


class MyVeinsApp : public BaseWaveApplLayer {
    public:
        virtual void initialize(int stage);
        virtual void finish();
        virtual int Find_back(int id);
        virtual int Find_rsu(int id);
        //simtime_t dp[10];
  //

    protected:
        virtual void onBSM(BasicSafetyMessage* bsm);
        virtual void onWSM(WaveShortMessage* wsm);
        virtual void onWSA(WaveServiceAdvertisment* wsa);

        virtual void handleSelfMsg(cMessage* msg);
        virtual void handlePositionUpdate(cObject* obj);
        vector<struct neighbour> v;
        struct pre_pos p;
        virtual double calculateQ(int id);

        virtual bool return_Value();


    };

#endif
