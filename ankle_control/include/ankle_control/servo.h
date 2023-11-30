#ifndef PROSTHETIC_ANKLE_H
#define PROSTHETIC_ANKLE_H

void enable_servo();

void torqueEnablePacket();

void TxOffRxOn();

void TxOnRxOff();

void writeByteServo(unsigned char byte);

void writeIntServo(int data);

void toggleServoLED();

void writePosPacket();

void readServo();

#endif