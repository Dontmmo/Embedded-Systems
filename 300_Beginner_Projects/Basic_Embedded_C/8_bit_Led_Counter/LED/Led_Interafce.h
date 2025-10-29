/**
 * @file    LED_INTERFACE.h
 * @brief   This file is about decalring the the APIs and any needed variable for the decalration.
 * @author  Mohammed Diaa @Mohamed-Diaa-ES <mohammediaato@gmail.com>
 * @date        26/10/2025
 */

#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H
#include <stdint.h>
void Led_Counter_Init(uint8_t Group);
void Led_Counter_Stop();
void Led_Counter_Start();

#endif