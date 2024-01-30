#include <Timer.h>
#include "MYMSG.h"

configuration MyMainAppC {
}
implementation {
/****** COMPONENTS *****/
  components MainC;
  components MyMainC as App;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new TimerMilliC() as PendingShutdownTimer;
  components ActiveMessageC;
  components new AMSenderC(AM_PARAMETER);
  components new AMReceiverC(AM_PARAMETER);
/****** INTERFACES *****/
  App.Boot -> MainC;

// radio Control
  App.AMControl -> ActiveMessageC;
  App.PacketAcknowledgements -> AMSenderC.Acks;
  App.AMSend -> AMSenderC;
  App.Packet -> AMSenderC;
  App.Receive -> AMReceiverC;
  App.AMPacket -> AMSenderC;
  
// timer interface  
  App.Timer0 -> Timer0;
  App.Timer1 -> Timer1;
  App.PendingShutdownTimer -> PendingShutdownTimer;
  

 

}
