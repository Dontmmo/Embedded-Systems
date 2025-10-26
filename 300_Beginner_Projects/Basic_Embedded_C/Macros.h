/** 
 * @file    Macros.h
 * @brief   This File concerns of including basic definition Of macros to make things not messy
 * @details 
 * @author  Mohammed Diaa @Mohamed-Diaa-ES <mohammeddiaato@gmail.com>
 * @date    26/10/2025
 * 
*/
#ifndef _MACROS_H_
#define _MACROS_H_
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
#define GetBit(Reg,BitNum)      ( (Reg>> BitNum)&(1))

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

#define GroupA  
#define GroupB  
#define GroupC  
#define GroupD  
#define High    1
#define Low     0
#endif
