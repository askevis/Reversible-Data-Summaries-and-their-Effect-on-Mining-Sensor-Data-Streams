#include <Timer.h>
#include "MYMSG.h"
#include "DATA/TEMPDATA_FILE.h"
module MyMainC {
  uses interface Boot;
  uses interface SplitControl as AMControl;
  uses interface Packet;
  uses interface AMSend;
  uses interface Receive;
  uses interface AMPacket;
  uses interface PacketAcknowledgements;
 //uses interface Leds;
  uses interface Timer<TMilli> as Timer0;
  uses interface Timer<TMilli> as Timer1;
  uses interface Timer<TMilli> as PendingShutdownTimer; 
}
implementation {
#define UNICAST_ADDR1 49
#define UNICAST_ADDR2 50
#define UNICAST_ADDR3 51
#define UNICAST_ADDR4 52
#define UNICAST_ADDR5 53
#define UNICAST_ADDR6 54
#define UNICAST_ADDR7 55
#define UNICAST_ADDR8 56
#define MAX_RECEIVED_DATA 30000 // Adjust the size as needed
uint16_t Baseindex = 0; 
uint16_t FAILS = 0; 
uint16_t LOST = 0;
uint16_t index = 0; 
uint16_t receivedData[MAX_RECEIVED_DATA];
uint16_t receivedDataCount = 0; 
uint16_t BasereceivedData[MAX_RECEIVED_DATA];
uint16_t BasereceivedDataCount = 0; 
uint32_t ClusterBytes = 0;
uint32_t ClusterNacks = 0;
uint32_t BaseBytes = 0;
uint32_t BaseNacks = 0;
uint16_t j=0;
uint16_t i=0;
void printReceivedData();  
void sendData(BasicSendReceiveMsg* btrpktt);
void sendDatatoBase(BasicSendReceiveMsg* btrpktt);
void shutdown();
void sendData(BasicSendReceiveMsg*);
bool busy = FALSE;
BasicSendReceiveMsg* btrpkt; 
BasicSendReceiveMsg* btrpkts; 
message_t pkt;
uint16_t receivedFromNode1Counter = 0;
uint16_t receivedFromNode2Counter = 0;
uint16_t receivedFromNode3Counter = 0;
uint16_t receivedFromNode4Counter = 0;
uint16_t receivedFromNode5Counter = 0;
uint16_t receivedFromNode6Counter = 0;
uint16_t receivedFromNode7Counter = 0;
uint16_t receivedFromNode8Counter = 0;
uint16_t receivedFromNode9Counter = 0;
uint16_t receivedFromNode10Counter = 0;
uint16_t receivedFromNode11Counter = 0;
uint16_t receivedFromNode12Counter = 0;
uint16_t receivedFromNode13Counter = 0;
uint16_t receivedFromNode14Counter = 0;
uint16_t receivedFromNode15Counter = 0;
uint16_t receivedFromNode16Counter = 0;
uint16_t receivedFromNode17Counter = 0;
uint16_t receivedFromNode18Counter = 0;
uint16_t receivedFromNode19Counter = 0;
uint16_t receivedFromNode20Counter = 0;
uint16_t receivedFromNode21Counter = 0;
uint16_t receivedFromNode22Counter = 0;
uint16_t receivedFromNode23Counter = 0;
uint16_t receivedFromNode24Counter = 0;
uint16_t receivedFromNode25Counter = 0;
uint16_t receivedFromNode26Counter = 0;
uint16_t receivedFromNode27Counter = 0;
uint16_t receivedFromNode28Counter = 0;
uint16_t receivedFromNode29Counter = 0;
uint16_t receivedFromNode30Counter = 0;
uint16_t receivedFromNode31Counter = 0;
uint16_t receivedFromNode32Counter = 0;
uint16_t receivedFromNode33Counter = 0;
uint16_t receivedFromNode34Counter = 0;
uint16_t receivedFromNode35Counter = 0;
uint16_t receivedFromNode36Counter = 0;
uint16_t receivedFromNode37Counter = 0;
uint16_t receivedFromNode38Counter = 0;
uint16_t receivedFromNode39Counter = 0;
uint16_t receivedFromNode40Counter = 0;
uint16_t receivedFromNode41Counter = 0;
uint16_t receivedFromNode42Counter = 0;
uint16_t receivedFromNode43Counter = 0;
uint16_t receivedFromNode44Counter = 0;
uint16_t receivedFromNode45Counter = 0;
uint16_t receivedFromNode46Counter = 0;
uint16_t receivedFromNode47Counter = 0;
uint16_t receivedFromNode48Counter = 0;
uint16_t receivedFromNode49Counter = 0;
uint16_t receivedFromNode50Counter = 0;
uint16_t receivedFromNode51Counter = 0;
uint16_t receivedFromNode52Counter = 0;
uint16_t receivedFromNode53Counter = 0;
uint16_t receivedFromNode54Counter = 0;
uint16_t receivedFromNode55Counter = 0;
uint16_t receivedFromNode56Counter = 0;	

  event void Boot.booted() {
    call AMControl.start();
    dbg("boot","Application booted.\n");
    dbg_clear("boot","Application booted on node %u.\n", TOS_NODE_ID);
  }
 
 //***************** SplitControl interface ********************//
  event void AMControl.startDone(error_t err) {
  // check if the wireless interface started successfully 
  if (err != SUCCESS) {
      dbg("radio", "Fail to start AMControl\n");    
      call AMControl.start(); // retry to start wireless interface
      return;
  }  
    if (err == SUCCESS) {     
     if (TOS_NODE_ID == 1 || TOS_NODE_ID == 7 || TOS_NODE_ID == 13 || TOS_NODE_ID == 19 || TOS_NODE_ID == 25 || TOS_NODE_ID == 31 || TOS_NODE_ID == 37 || TOS_NODE_ID == 43){     
      call Timer0.startPeriodic(1000);}// start timer  
if (TOS_NODE_ID == 2 || TOS_NODE_ID == 8 || TOS_NODE_ID == 14 || TOS_NODE_ID == 20 || TOS_NODE_ID == 26 || TOS_NODE_ID == 32 || TOS_NODE_ID == 38 || TOS_NODE_ID == 44){     
      call Timer0.startPeriodic(1050);}
if (TOS_NODE_ID == 3 || TOS_NODE_ID == 9 || TOS_NODE_ID == 15 || TOS_NODE_ID == 21 || TOS_NODE_ID == 27 || TOS_NODE_ID == 33 || TOS_NODE_ID == 39 || TOS_NODE_ID == 45){     
      call Timer0.startPeriodic(1100);}
if (TOS_NODE_ID == 4 || TOS_NODE_ID == 10 || TOS_NODE_ID == 16 || TOS_NODE_ID == 22 || TOS_NODE_ID == 28 || TOS_NODE_ID == 34 || TOS_NODE_ID == 40 || TOS_NODE_ID == 46){     
      call Timer0.startPeriodic(1150);}
if (TOS_NODE_ID == 5 || TOS_NODE_ID == 11 || TOS_NODE_ID == 17 || TOS_NODE_ID == 23 || TOS_NODE_ID == 29 || TOS_NODE_ID == 35 || TOS_NODE_ID == 41 || TOS_NODE_ID == 47){     
      call Timer0.startPeriodic(1200);}
if (TOS_NODE_ID == 6 || TOS_NODE_ID == 12 || TOS_NODE_ID == 18 || TOS_NODE_ID == 24 || TOS_NODE_ID == 30 || TOS_NODE_ID == 36 || TOS_NODE_ID == 42 || TOS_NODE_ID == 48){     
      call Timer0.startPeriodic(1250);}   
    }
  }
  
   event void AMControl.stopDone(error_t err) {
  }

  //***************** MilliTimer interface ********************//
event void Timer0.fired() {
    //dbg("timer", "Timer fired\n");
    btrpkt = (BasicSendReceiveMsg*)call Packet.getPayload(&pkt, sizeof(BasicSendReceiveMsg));// Create the packet

    if (btrpkt == NULL) {
        dbg("radio_send", "!!!!!!!Packet not created!!!!!! \n");
        return;
    }   
        if (TOS_NODE_ID != 49 && TOS_NODE_ID != 50 && TOS_NODE_ID != 51 && TOS_NODE_ID != 52 && TOS_NODE_ID != 53 && TOS_NODE_ID != 54 && TOS_NODE_ID != 55 && TOS_NODE_ID != 56 && TOS_NODE_ID != 57) {
            btrpkt->nodeid = TOS_NODE_ID; // this node is sending a message
            btrpkt->data[0] = TEMP_DATA[TOS_NODE_ID-1][index];
            btrpkt->data[1] = TEMP_DATA[TOS_NODE_ID-1][index+1];            
        }         
        sendData(btrpkt);
        if (TOS_NODE_ID == 57){call Timer1.startPeriodic(1000);}
}

  
  void sendData(BasicSendReceiveMsg* btrpktt){
  if (!busy ) {

       if(TOS_NODE_ID != 49 && TOS_NODE_ID != 50 && TOS_NODE_ID != 51 && TOS_NODE_ID != 52 && TOS_NODE_ID != 53 && TOS_NODE_ID != 54 && TOS_NODE_ID != 55 && TOS_NODE_ID != 56 && TOS_NODE_ID != 57)
        { 
        // dbg_clear("radio_send", "\n\tNode %d Sending value:\t\t%d\n",TOS_NODE_ID, btrpkt->data);    
         if(TOS_NODE_ID == 1 || TOS_NODE_ID == 2|| TOS_NODE_ID == 3|| TOS_NODE_ID == 4|| TOS_NODE_ID == 5|| TOS_NODE_ID == 6)
		 { 
             // dbg_clear("radio_ack", "\t ACK requested\n");
			 call PacketAcknowledgements.requestAck(&pkt);
             ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
             if (call AMSend.send(UNICAST_ADDR1, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				{
                   //dbg_clear("radio_send", "\tScheduled message to send\n");
                   busy = TRUE;
                }else dbgerror("radio_send", "Send error!\n");
          }else if(TOS_NODE_ID == 7 || TOS_NODE_ID == 8|| TOS_NODE_ID == 9|| TOS_NODE_ID == 10|| TOS_NODE_ID == 11|| TOS_NODE_ID == 12)  
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR2, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 13 || TOS_NODE_ID == 14|| TOS_NODE_ID == 15|| TOS_NODE_ID == 16|| TOS_NODE_ID == 17|| TOS_NODE_ID == 18)  
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR3, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 19 || TOS_NODE_ID == 20|| TOS_NODE_ID == 21|| TOS_NODE_ID == 22|| TOS_NODE_ID == 23|| TOS_NODE_ID == 24) 
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR4, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 25 || TOS_NODE_ID == 26|| TOS_NODE_ID == 27|| TOS_NODE_ID == 28|| TOS_NODE_ID == 29|| TOS_NODE_ID == 30)  
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR5, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 31 || TOS_NODE_ID == 32|| TOS_NODE_ID == 33|| TOS_NODE_ID == 34|| TOS_NODE_ID == 35|| TOS_NODE_ID == 36)   
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR6, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 37 || TOS_NODE_ID == 38|| TOS_NODE_ID == 39|| TOS_NODE_ID == 40|| TOS_NODE_ID == 41|| TOS_NODE_ID == 42)   
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR7, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }else if(TOS_NODE_ID == 43 || TOS_NODE_ID == 44|| TOS_NODE_ID == 45|| TOS_NODE_ID == 46|| TOS_NODE_ID == 47|| TOS_NODE_ID == 48)   
           {   
		            // dbg_clear("radio_ack", "\t ACK requested\n");
		            call PacketAcknowledgements.requestAck(&pkt);
                    ClusterBytes = ClusterBytes + 8; //COUNTER HERE
			 if(btrpkt->data[0] == 0 && btrpkt->data[1] == 0){FAILS++; ClusterBytes = ClusterBytes - 8;}//CASE: PACKET LOST
                    if (call AMSend.send(UNICAST_ADDR8, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
				       {
                         // dbg_clear("radio_send", "\tScheduled message to send\n");
                         busy = TRUE;
                       }else dbgerror("radio_send", "Send error!\n");
           }    
       }
    }
  }

//********************* AMSend interface ****************//
event void AMSend.sendDone(message_t* msg, error_t err) {
    if (&pkt == msg) {
      busy = FALSE;
    }
    if(err == SUCCESS)
	 {
      //  dbg("radio_send", "Packet sent at time %s \n", sim_time_string());     
      if(call PacketAcknowledgements.wasAcked(msg)) // check if there was an ACK as response
	    {
         //dbg_clear("radio_ack", "\tNODE: %d ACK was received\n",TOS_NODE_ID);
         if (TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
		    {
             Baseindex = Baseindex + 2; 
             if(Baseindex == 468) //Baseindex = total NUM OF DATA from 6 sensors
			 {        
              call Timer1.stop();
              call PendingShutdownTimer.startOneShot(1000);
			 }
             //dbg_clear("radio_ack", "\tNODE (%d) INDEX  AFTER  ACK IS %d\n", TOS_NODE_ID,index);  
            }else if(TOS_NODE_ID == 1 || TOS_NODE_ID == 2 || TOS_NODE_ID == 3|| TOS_NODE_ID == 4|| TOS_NODE_ID == 5|| TOS_NODE_ID == 6 || TOS_NODE_ID == 7 || TOS_NODE_ID == 8|| TOS_NODE_ID == 9|| TOS_NODE_ID == 10|| TOS_NODE_ID == 11 || TOS_NODE_ID == 12 || TOS_NODE_ID == 13 || TOS_NODE_ID == 14 || TOS_NODE_ID == 15|| TOS_NODE_ID == 16|| TOS_NODE_ID == 17|| TOS_NODE_ID == 18|| TOS_NODE_ID == 19 || TOS_NODE_ID == 20 || TOS_NODE_ID == 21|| TOS_NODE_ID == 22|| TOS_NODE_ID == 23|| TOS_NODE_ID == 24 || TOS_NODE_ID == 25 || TOS_NODE_ID == 26|| TOS_NODE_ID == 27|| TOS_NODE_ID == 28|| TOS_NODE_ID == 29|| TOS_NODE_ID == 30 || TOS_NODE_ID == 31 || TOS_NODE_ID == 32|| TOS_NODE_ID == 33|| TOS_NODE_ID == 34|| TOS_NODE_ID == 35|| TOS_NODE_ID == 36 ||  TOS_NODE_ID == 37 ||  TOS_NODE_ID == 38|| TOS_NODE_ID == 39|| TOS_NODE_ID == 40|| TOS_NODE_ID == 41|| TOS_NODE_ID == 42 || TOS_NODE_ID == 43 || TOS_NODE_ID == 44|| TOS_NODE_ID == 45|| TOS_NODE_ID == 46|| TOS_NODE_ID == 47|| TOS_NODE_ID == 48)
		    { 
              index = index + 2;
              if(index == 78) //index = total NUM OF DATA from 1 sensor
			  {       
                call Timer0.stop();
                call PendingShutdownTimer.startOneShot(1000);
			  }
              //dbg_clear("radio_ack", "\t----BASE (%d) INDEX  AFTER  ACK IS %d\n", TOS_NODE_ID,Baseindex);
            }      
        } else 
		  {
             // dbg_clear("radio_ack", "\tNo ACK received,Retrying\n");
             if (TOS_NODE_ID == 1 || TOS_NODE_ID == 2 || TOS_NODE_ID == 3|| TOS_NODE_ID == 4|| TOS_NODE_ID == 5|| TOS_NODE_ID == 6 || TOS_NODE_ID == 7 || TOS_NODE_ID == 8|| TOS_NODE_ID == 9|| TOS_NODE_ID == 10|| TOS_NODE_ID == 11 || TOS_NODE_ID == 12 || TOS_NODE_ID == 13 || TOS_NODE_ID == 14 || TOS_NODE_ID == 15|| TOS_NODE_ID == 16|| TOS_NODE_ID == 17|| TOS_NODE_ID == 18|| TOS_NODE_ID == 19 || TOS_NODE_ID == 20 || TOS_NODE_ID == 21|| TOS_NODE_ID == 22|| TOS_NODE_ID == 23|| TOS_NODE_ID == 24 || TOS_NODE_ID == 25 || TOS_NODE_ID == 26|| TOS_NODE_ID == 27|| TOS_NODE_ID == 28|| TOS_NODE_ID == 29|| TOS_NODE_ID == 30 || TOS_NODE_ID == 31 || TOS_NODE_ID == 32|| TOS_NODE_ID == 33|| TOS_NODE_ID == 34|| TOS_NODE_ID == 35|| TOS_NODE_ID == 36 ||  TOS_NODE_ID == 37 ||  TOS_NODE_ID == 38|| TOS_NODE_ID == 39|| TOS_NODE_ID == 40|| TOS_NODE_ID == 41|| TOS_NODE_ID == 42 || TOS_NODE_ID == 43 || TOS_NODE_ID == 44|| TOS_NODE_ID == 45|| TOS_NODE_ID == 46|| TOS_NODE_ID == 47|| TOS_NODE_ID == 48)
		        {
                  ClusterNacks = ClusterNacks + 8; //COUNTER HERE
                  sendData(btrpkt);
                }
             if (TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
		        {
                  BaseNacks = BaseNacks + 8; //COUNTER HERE
                  sendDatatoBase(btrpkt);}
                }
     }else dbgerror("radio_send", "Send  ERROR!\n"); 
  }

//***************************** Receive interface *****************//
event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){ 
    if (len == sizeof(BasicSendReceiveMsg)) 
	{
       btrpkts = (BasicSendReceiveMsg*)payload;
	   if(TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
	   {
	     if (receivedDataCount < MAX_RECEIVED_DATA) 
		  {
            receivedData[receivedDataCount] = btrpkts->data[0];
            receivedData[receivedDataCount+1] = btrpkts->data[1];
            receivedDataCount = receivedDataCount + 2;
	      }
	   }
       if (TOS_NODE_ID == 50)
		{          
          //dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid); 
          call Timer1.startPeriodic(1050); 
          if (btrpkts->nodeid == 7) { 
				receivedFromNode7Counter = receivedFromNode7Counter + 2;
          } else if (btrpkts->nodeid == 8) {
				receivedFromNode8Counter = receivedFromNode8Counter + 2;
          }else if (btrpkts->nodeid == 9) {
				receivedFromNode9Counter = receivedFromNode9Counter + 2;
          }else if (btrpkts->nodeid == 10) {
				receivedFromNode10Counter = receivedFromNode10Counter + 2;
          }else if (btrpkts->nodeid == 11) {
				receivedFromNode11Counter = receivedFromNode11Counter + 2;
          }else if (btrpkts->nodeid == 12) {
				receivedFromNode12Counter = receivedFromNode12Counter + 2;
          }
         // dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 7:%d,8:%d,9:%d,10:%d,11:%d,12:%d\n",TOS_NODE_ID , receivedFromNode7Counter, receivedFromNode8Counter, receivedFromNode9Counter, receivedFromNode10Counter, receivedFromNode11Counter, receivedFromNode12Counter); 
          if (receivedFromNode7Counter == 78 && receivedFromNode8Counter == 78 && receivedFromNode9Counter == 78 && receivedFromNode10Counter == 78 && receivedFromNode11Counter == 78 && receivedFromNode12Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
	  if (TOS_NODE_ID == 51)
		{ //dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid);  
          call Timer1.startPeriodic(1100); 
          if (btrpkts->nodeid == 13) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
              receivedFromNode13Counter = receivedFromNode13Counter + 2;
          } else if (btrpkts->nodeid == 14) {
              receivedFromNode14Counter = receivedFromNode14Counter + 2;
          }else if (btrpkts->nodeid == 15) {
              receivedFromNode15Counter = receivedFromNode15Counter + 2;
          }else if (btrpkts->nodeid == 16) {
              receivedFromNode2Counter = receivedFromNode2Counter + 2;
          }else if (btrpkts->nodeid == 17) {
			  receivedFromNode17Counter = receivedFromNode17Counter + 2;
          }else if (btrpkts->nodeid == 18) {
              receivedFromNode18Counter = receivedFromNode18Counter + 2;
          }
         // dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 13:%d,14:%d,15:%d,16:%d,17:%d,18:%d\n",TOS_NODE_ID , receivedFromNode13Counter, receivedFromNode14Counter, receivedFromNode15Counter, receivedFromNode2Counter, receivedFromNode17Counter, receivedFromNode18Counter); 

          if (receivedFromNode13Counter == 78 && receivedFromNode14Counter == 78 && receivedFromNode15Counter == 78 && receivedFromNode2Counter == 78 && receivedFromNode17Counter == 78 && receivedFromNode18Counter == 78)
		  {
            // call Timer1.startPeriodic(1000);
            call Timer0.stop();
          }
         
        }
		if (TOS_NODE_ID == 52)
		{ 
          //dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid);  
          call Timer1.startPeriodic(1150); 
          if (btrpkts->nodeid == 19) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode19Counter = receivedFromNode19Counter + 2;
          } else if (btrpkts->nodeid == 20) {
				receivedFromNode20Counter = receivedFromNode20Counter + 2;
          }else if (btrpkts->nodeid == 21) {
				receivedFromNode21Counter = receivedFromNode21Counter + 2;
          }else if (btrpkts->nodeid == 22) {
				receivedFromNode22Counter = receivedFromNode22Counter + 2;
          }else if (btrpkts->nodeid == 23) {
				receivedFromNode23Counter = receivedFromNode23Counter + 2;
          }else if (btrpkts->nodeid == 24) {
				receivedFromNode24Counter = receivedFromNode24Counter + 2;
          }
         // dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 19:%d,20:%d,21:%d,22:%d,23:%d,24:%d\n",TOS_NODE_ID , receivedFromNode19Counter, receivedFromNode20Counter, receivedFromNode21Counter, receivedFromNode22Counter, receivedFromNode23Counter, receivedFromNode24Counter); 
          if (receivedFromNode19Counter == 78 && receivedFromNode20Counter == 78 && receivedFromNode21Counter == 78 && receivedFromNode22Counter == 78 && receivedFromNode23Counter == 78 && receivedFromNode24Counter == 78)
		  {
           // call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
		if (TOS_NODE_ID == 53)
		{
          //dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid);  
          call Timer1.startPeriodic(1200); 
          if (btrpkts->nodeid == 25) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode25Counter = receivedFromNode25Counter + 2;
          } else if (btrpkts->nodeid == 26) {
				receivedFromNode26Counter = receivedFromNode26Counter + 2;
          }else if (btrpkts->nodeid == 27) {
				receivedFromNode27Counter = receivedFromNode27Counter + 2;
          }else if (btrpkts->nodeid == 28) {
				receivedFromNode28Counter = receivedFromNode28Counter + 2;
          }else if (btrpkts->nodeid == 29) {
				receivedFromNode29Counter = receivedFromNode29Counter + 2;
          }else if (btrpkts->nodeid == 30) {
				receivedFromNode30Counter = receivedFromNode30Counter + 2;
          }
         // dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT  25:%d,26:%d,27:%d,28:%d,29:%d,30:%d\n",TOS_NODE_ID , receivedFromNode25Counter, receivedFromNode26Counter, receivedFromNode27Counter, receivedFromNode28Counter, receivedFromNode29Counter, receivedFromNode30Counter); 
          if (receivedFromNode25Counter == 78 && receivedFromNode26Counter == 78 && receivedFromNode27Counter == 78 && receivedFromNode28Counter == 78 && receivedFromNode29Counter == 78 && receivedFromNode30Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
		if (TOS_NODE_ID == 54)
		{
         // dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid); 
          call Timer1.startPeriodic(1250); 
          if (btrpkts->nodeid == 31) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode31Counter = receivedFromNode31Counter + 2;
          } else if (btrpkts->nodeid == 32) {
				receivedFromNode32Counter = receivedFromNode32Counter + 2;
          }else if (btrpkts->nodeid == 33) {
				receivedFromNode33Counter = receivedFromNode33Counter + 2;
          }else if (btrpkts->nodeid == 34) {
				receivedFromNode34Counter = receivedFromNode34Counter + 2;
          }else if (btrpkts->nodeid == 35) {
				receivedFromNode35Counter = receivedFromNode35Counter + 2;
          }else if (btrpkts->nodeid == 36) {
				receivedFromNode36Counter = receivedFromNode36Counter + 2;
          }
        //  dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 31:%d,32:%d,33:%d,34:%d,35:%d,36:%d\n",TOS_NODE_ID , receivedFromNode31Counter, receivedFromNode32Counter, receivedFromNode33Counter, receivedFromNode34Counter, receivedFromNode35Counter, receivedFromNode36Counter); 
          if (receivedFromNode31Counter == 78 && receivedFromNode32Counter == 78 && receivedFromNode33Counter == 78 && receivedFromNode34Counter == 78 && receivedFromNode35Counter == 78 && receivedFromNode36Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
		if (TOS_NODE_ID == 55)
		{
         // dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid); 
          call Timer1.startPeriodic(1300); 
          if (btrpkts->nodeid == 37) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode37Counter = receivedFromNode37Counter + 2;
          } else if (btrpkts->nodeid == 38) {
				receivedFromNode38Counter = receivedFromNode38Counter + 2;
          }else if (btrpkts->nodeid == 39) {
				receivedFromNode39Counter = receivedFromNode39Counter + 2;
          }else if (btrpkts->nodeid == 40) {
				receivedFromNode40Counter = receivedFromNode40Counter + 2;
          }else if (btrpkts->nodeid == 41) {
				receivedFromNode41Counter = receivedFromNode41Counter + 2;
          }else if (btrpkts->nodeid == 42) {
				receivedFromNode42Counter = receivedFromNode42Counter + 2;
          }
        //  dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 37:%d,38:%d,39:%d,40:%d,41:%d,42:%d\n",TOS_NODE_ID , receivedFromNode37Counter, receivedFromNode38Counter, receivedFromNode39Counter, receivedFromNode40Counter, receivedFromNode41Counter, receivedFromNode42Counter); 
          if (receivedFromNode37Counter == 78 && receivedFromNode38Counter == 78 && receivedFromNode39Counter == 78 && receivedFromNode40Counter == 78 && receivedFromNode41Counter == 78 && receivedFromNode42Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
		if (TOS_NODE_ID == 56)
		{
         // dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid); 
          call Timer1.startPeriodic(1350); 
          if (btrpkts->nodeid == 43) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode43Counter = receivedFromNode43Counter + 2;
          } else if (btrpkts->nodeid == 44) {
				receivedFromNode44Counter = receivedFromNode44Counter + 2;
          }else if (btrpkts->nodeid == 45) {
				receivedFromNode45Counter = receivedFromNode45Counter + 2;
          }else if (btrpkts->nodeid == 46) {
				receivedFromNode46Counter = receivedFromNode46Counter + 2;
          }else if (btrpkts->nodeid == 47) {
				receivedFromNode47Counter = receivedFromNode47Counter + 2;
          }else if (btrpkts->nodeid == 48) {
				receivedFromNode48Counter = receivedFromNode48Counter + 2;
          }
        ///  dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 43:%d,44:%d,45:%d,46:%d,47:%d,48:%d\n",TOS_NODE_ID , receivedFromNode43Counter, receivedFromNode44Counter, receivedFromNode45Counter, receivedFromNode46Counter, receivedFromNode47Counter, receivedFromNode48Counter); 
          if (receivedFromNode43Counter == 78 && receivedFromNode44Counter == 78 && receivedFromNode45Counter == 78 && receivedFromNode46Counter == 78 && receivedFromNode47Counter == 78 && receivedFromNode48Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }				
        if (TOS_NODE_ID == 49)
		{
         // dbg_clear("radio_rec","Node:%d RECEIVED data: %1x-%1x from node: %d\n", TOS_NODE_ID, btrpkts->data[0],btrpkts->data[1], btrpkts->nodeid); 
          call Timer1.startPeriodic(1000);   
          if (btrpkts->nodeid == 1) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode1Counter = receivedFromNode1Counter + 2;
          } else if (btrpkts->nodeid == 2) {
				receivedFromNode2Counter = receivedFromNode2Counter + 2;
          }else if (btrpkts->nodeid == 3) {
				receivedFromNode3Counter = receivedFromNode3Counter + 2;
          }else if (btrpkts->nodeid == 4) {
				receivedFromNode4Counter = receivedFromNode4Counter + 2;
          }else if (btrpkts->nodeid == 5) {
				receivedFromNode5Counter = receivedFromNode5Counter + 2;
          }else if (btrpkts->nodeid == 6) {
				receivedFromNode6Counter = receivedFromNode6Counter + 2;
          }
       //   dbg_clear("radio_rec","SENSOR %d RECEIVED COUNT 1:%d,2:%d,3:%d,4:%d,5:%d,6:%d\n",TOS_NODE_ID ,receivedFromNode1Counter, receivedFromNode2Counter, receivedFromNode3Counter, receivedFromNode4Counter, receivedFromNode5Counter, receivedFromNode6Counter); 

          if (receivedFromNode1Counter == 78 && receivedFromNode2Counter == 78 && receivedFromNode3Counter == 78 && receivedFromNode4Counter == 78 && receivedFromNode5Counter == 78 && receivedFromNode6Counter == 78)
		  {
            //call Timer1.startPeriodic(1000); 
            call Timer0.stop();
          }
        }
	  
	  
	    if (TOS_NODE_ID == 57) 
		{ 
          if (BasereceivedDataCount < MAX_RECEIVED_DATA) 
		  {
            BasereceivedData[BasereceivedDataCount] = btrpkts->data[0];
            BasereceivedData[BasereceivedDataCount+1] = btrpkts->data[1];
            BasereceivedDataCount = BasereceivedDataCount + 2;
		  }
         // dbg_clear("radio_rec","Node:%d RECEIVED data: %d-%d from node: %d\n", TOS_NODE_ID, btrpkts->data[0], btrpkts->data[15], btrpkts->nodeid);
          if (btrpkts->nodeid == 49) { // try receivedFromNodeCounter[btrpkt->nodeid]++;
				receivedFromNode49Counter = receivedFromNode49Counter + 2;
          }else if (btrpkts->nodeid == 50) {
				receivedFromNode50Counter = receivedFromNode50Counter + 2;
          }else if (btrpkts->nodeid == 51) {
				receivedFromNode51Counter = receivedFromNode51Counter + 2;
          }else if (btrpkts->nodeid == 52) {
				receivedFromNode52Counter = receivedFromNode52Counter + 2;
          }else if (btrpkts->nodeid == 53) {
				receivedFromNode53Counter = receivedFromNode53Counter + 2;
          }else if (btrpkts->nodeid == 54) {
				receivedFromNode54Counter = receivedFromNode54Counter + 2;
          }else if (btrpkts->nodeid == 55) {
				receivedFromNode55Counter = receivedFromNode55Counter + 2;
          }else if (btrpkts->nodeid == 56) {
				receivedFromNode56Counter = receivedFromNode56Counter + 2;
          }
 //dbg_clear("radio_rec","BASE COUNT 49:%d , 50:%d, 51:%d, 52:%d, 53:%d, 54:%d, 55:%d, 56:%d\n",  receivedFromNode49Counter, receivedFromNode50Counter, receivedFromNode51Counter, receivedFromNode52Counter, receivedFromNode53Counter, receivedFromNode54Counter, receivedFromNode55Counter, receivedFromNode56Counter); 

        if (receivedFromNode49Counter == 468 && receivedFromNode50Counter == 468 && receivedFromNode51Counter == 468  && receivedFromNode52Counter == 468  && receivedFromNode53Counter == 468  && receivedFromNode54Counter == 468  && receivedFromNode55Counter == 468  && receivedFromNode56Counter == 468){
          call PendingShutdownTimer.startOneShot(1000);
          call Timer1.stop();
        }
      }
    }
   
    return msg;
  }  


  //***************** MilliTimer interface ********************//
event void Timer1.fired() { 
 if(TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
 { 
     //dbg("radio_send", "Node %d Trying to send a new message\n",TOS_NODE_ID);
    btrpkt = (BasicSendReceiveMsg*)call Packet.getPayload(&pkt, sizeof(BasicSendReceiveMsg));
    // Check if the packet was created
    if (btrpkt == NULL) 
	{
        dbg("radio_send", "!!!!!!!Packet not created!!!!!! \n");
        return;
    }
        if (TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56) // this if could be deleted
		{ 
            //dbg("radio_send", "INDEX BEFORE SENDING : %d\n",Baseindex);
            btrpkt->nodeid = TOS_NODE_ID; // this node sending message
            btrpkt->data[0] = receivedData[Baseindex];
			btrpkt->data[1] = receivedData[Baseindex+1];
        } 
	  if( !(btrpkt->data[0] == 0 && btrpkt->data[1] == 0)) //CASE: PACKET LOST
      {
        sendDatatoBase(btrpkt);
        
	  }else{
         LOST = ((468-Baseindex)/2); // COUNT LOST PACKETS,468 is number that should have been sent
         if (TOS_NODE_ID == 49){
           receivedFromNode49Counter = 468;
         }else if(TOS_NODE_ID == 50){
           receivedFromNode50Counter = 468;
         }else if(TOS_NODE_ID == 51){
           receivedFromNode51Counter = 468;
         }else if(TOS_NODE_ID == 52){
           receivedFromNode52Counter = 468;
         }else if(TOS_NODE_ID == 53){
           receivedFromNode53Counter = 468;
         }else if(TOS_NODE_ID == 54){
           receivedFromNode54Counter = 468;
         }else if(TOS_NODE_ID == 55){
           receivedFromNode55Counter = 468;
         }else if(TOS_NODE_ID == 56){
           receivedFromNode56Counter = 468;
         } 
         call Timer1.stop(); 
         call PendingShutdownTimer.startOneShot(1000);}
 } 
}

void sendDatatoBase(BasicSendReceiveMsg* btrpktt){
  if (!busy ) 
  {
      // dbg_clear("radio_send", "\n\t Node %d Sending TO BASE:\t\t %d-%d\n",TOS_NODE_ID,btrpkts->data[0],btrpkts->data[15]);    
        if(TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
		{ 
            // dbg_clear("radio_ack", "\t ACK requested\n");
            BaseBytes = BaseBytes + 8; //COUNTER HERE
			call PacketAcknowledgements.requestAck(&pkt);
            if (call AMSend.send(57, &pkt, sizeof(BasicSendReceiveMsg)) == SUCCESS)
			{
                // dbg_clear("radio_send", "\tScheduled message to send\n");
                busy = TRUE;
            }else dbgerror("radio_send", "Send error!\n");
        } 
    }
}


void printReceivedData() {
   /* i=0;
    while (i < receivedDataCount) {
        
        printf("Received Data[%d]: %d\n", i, receivedData[i]);
        i = i + 1;
    }
  
    j=0;
    while (j < BasereceivedDataCount) {
        
        printf("Base Received Data[%d]: %d\n", j, BasereceivedData[j]);
        j = j + 1;
    }*/
    if(TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
	{
      printf("\n###############################\nBYTE COUNTER FOR NODE[%d]:  B:%d, BN:%d,LOST:%d\n############################\n", TOS_NODE_ID, BaseBytes,BaseNacks,LOST);
	}else{printf("\n////////////////////////////\nBYTE COUNTER FOR NODE[%d]: CL:%d , CLN:%d, FAILS:%d\n////////////////////////////\n", TOS_NODE_ID, ClusterBytes,ClusterNacks,FAILS);}
}


void shutdown()
  {  //if(TOS_NODE_ID == 49 || TOS_NODE_ID == 50 || TOS_NODE_ID == 51 || TOS_NODE_ID == 52 || TOS_NODE_ID == 53 || TOS_NODE_ID == 54 || TOS_NODE_ID == 55 || TOS_NODE_ID == 56)
	//{dbg("boot", "Bye bye!\n");
   //}
     printReceivedData();
    // stop the wireless interface
    call AMControl.stop(); 
  }
  
//***************** PendingShutdownTimer interface ********************//
event void PendingShutdownTimer.fired() {
    //dbg("timer", "Shutdown timer fired\n");
    shutdown();
}
  
}
