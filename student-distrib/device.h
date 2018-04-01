/* device.h - Defines used in device interruption
 */

#ifndef DEVICE_H
#define DEVICE_H

#include "types.h"
#include "x86_desc.h"
#include "lib.h"
#include "terminal.h"

#define RTC_REG_NUM         0x70        /*rtc number register*/
#define RTC_REG_DATA        0x71        /*rtc data register*/
#define SR_A                0x8A        /*rtc status register a*/
#define SR_B                0x8B        /*rtc status register b*/
#define SR_C                0x0C        /*rtc status register c*/
#define PERIOD              0x40        /*the peorid constant*/
#define KEY_REG_STATUS      0x64        /*keyboard status register*/
#define KEY_REG_DATA        0x60        /*keyboard data register*/
#define MAX_RATE            0x0F        /*maximum rate*/
#define RATE                15          /*2Hz rate*/
#define DEFAULT_RATE        6           /*1024Hz rate*/
#define BUFF_SIZE           128         /*keyboard buffer size*/
#define LEFT_SHIFT_PRESS    0x2A
#define RIGHT_SHIFT_PRESS   0x36
#define LEFT_SHIFT_REL      0xAA
#define RIGHT_SHIFT_REL     0xB6
#define ALT_PRESS           0x38
#define ALT_REL             0xB8
#define CTRL_PRESS          0x1D
#define CTRL_REL            0x9D
#define CAPS_PRESS          0x3A
#define L_PRESS             0x26
#define BACKSPACE           0x0E

/*print the pressed key onto the screen*/
void keyboard_interrupt(void);

/* Check if ALT key pressed */
int key_pressed();

/*decode the signal received by data and return*/
unsigned char KB_decode(unsigned char scancode);

/*initialize the keyboard and enable keyboard IRQ*/
void init_keyboard(void);

/*execute the interrupt of rtc*/
void rtc_interrupt(void);

/*initialize the rtc and enable rtc IRQ*/
void init_rtc(void);

/*change the rate of rtc freqency*/
void set_rate(unsigned rate);

/*get the keyboard buffer*/
unsigned char *getBuffer(void);

/*get the enter flag*/
uint8_t getEnter(void);

/*reset the enter flag*/
void resetEnter(void);

/*reset the keyboard buffer*/
void resetBuffer(void);

#endif
