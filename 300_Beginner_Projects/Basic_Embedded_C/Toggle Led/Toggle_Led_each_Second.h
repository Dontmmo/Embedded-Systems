/**
 * @file    Toggle_Led_each_Second.H
 * @author  Mohamed Diaa @Dontmmo
 * @brief   This file contains the definintion of registers used in the process of building the project
 * @details As it is a very small program I will only define the needed registers without adding rest of them
 * @version 1
 * @date    2025-10-11
 */
#ifndef _TOGGLE_LED_EACH_SECOND_H
#define _TOGGLE_LED_EACH_SECOND_H
#include <stdint.h>
/**
 * @defgroup Registers
 * @brief   Defining GPIO registers
 * @{
 */
#define PORTA_Reg   *(volatile uint8_t *)0x3B
#define DDRA_Reg    *(volatile uint8_t *)0x3A
#define PINA_Reg    *(volatile uint8_t *)0x39
#define PORTB_Reg   *(volatile uint8_t *)0x38
#define DDRB_Reg    *(volatile uint8_t *)0x37
#define PINB_Reg    *(volatile uint8_t *)0x36
#define PORTC_Reg   *(volatile uint8_t *)0x35
#define DDRC_Reg    *(volatile uint8_t *)0x34
#define PINC_Reg    *(volatile uint8_t *)0x33
#define PORTD_Reg   *(volatile uint8_t *)0x32
#define DDRD_Reg    *(volatile uint8_t *)0x31
#define PIND_Reg    *(volatile uint8_t *)0x30
/**
 * @} // end of group definitions
 */
/**
 * @defgroup Bit math Mcaros
 * @brief    Basic bit manipulation with the registers
 *@{ 
 */

#define SetBit(Reg,BitNum)      Reg |= (1 << BitNum)
#define ClearBit(Reg,BitNum)    Reg &= ~(1 << BitNum)
#define ToggleBit(Reg,BitNum)   Reg ^= (1 << BitNum)

/**
 * @}
 */
/**
 * @defgroup PinsNum
 * @brief    Pin Numbers for using the registers
 *@{ 
 */
#define Pin0    0    
#define Pin1    1
#define Pin2    2
#define Pin3    3
#define Pin4    4
#define Pin5    5
#define Pin6    6
#define Pin7    7
/**
 * @}
 */
#endif
