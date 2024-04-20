
#pragma once

#include <thread>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <unistd.h>
#include "crc_verify.hpp"
#include "joint_ctrl_protocol.h"
#include "VulcanSerial/SerialPort.hpp"
#include <math.h>
using namespace std;

class SerialHandle
{
private:
    bool rec_loop;
    uint8_t   rec_buffer[100];
    VulcanSerial::SerialPort      mySerial;
    std::shared_ptr<std::thread> serial_rx_thd;
    uint16_t send_cnt = 0;
private:
    void serial_recive(void);

    
public:
    uart_packet_t* rec_package;
    float                                left_leg_length;
    float                               right_leg_length;    
public:
    void send_commond(const motor_torque_t& ctrl_package);
    void serial_init(const std::string dev = "/dev/ttyAMA0");
    void create_package(_Float32* motor_tor,motor_torque_t &motor_package);
    void start_joint_sdk(void);
    SerialHandle(/* args */){}
    ~SerialHandle();
};

