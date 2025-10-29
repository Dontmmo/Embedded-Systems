/**
 * @file    LED_INTERFACE.h
 * @brief   This file is about decalring the the APIs and any needed variable for the decalration.
 * @author  Mohammed Diaa @Mohamed-Diaa-ES <mohammediaato@gmail.com>
 * @date        26/10/2025
 */

#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H
#include <stdint.h>
/**
 * @fn Led_Counter_Init
 * @brief
 * @param
 */
void Led_Counter_Init(uint8_t Group);
/**
 * @fn Led_Counter_Stop
 * @brief
 * @param
 */
void Led_Counter_Stop(uint8_t Group);
/**
 * @fn Led_Counter_Start
 * @brief this function is used for making the leds all stop and become zero
 * @param
 */
void Led_Counter_Start(uint8_t Group);

#endif