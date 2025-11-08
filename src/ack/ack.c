#include<stdio.h>
#include<stdint.h>
#include "../../include/packet.h"

void send_ack(int fd, uint16_t seq_no, int success){
    frame_t ack;
    ack.preamble = 0xAA;
    ack.seq_no = 0; //it doesnt carry data for a seq_no just a ack frame
    ack.ack_no = seq_no;
    memset(ack.data, 0, sizeof(ack.data));
    ack.crc = success ? 1: 0;
}