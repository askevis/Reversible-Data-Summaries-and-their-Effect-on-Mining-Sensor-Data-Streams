#ifndef MYMSG_H
#define MYMSG_H

#define AM_PARAMETER 6

typedef nx_struct BasicSendReceiveMsg {
  nx_uint8_t nodeid;
  nx_int16_t data[16];
} BasicSendReceiveMsg;

#endif
