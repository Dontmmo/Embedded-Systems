/**
 * @file    LED_Progaram.C
 * @brief   This file is about adding the Configuration of the LEDs needed for the Counter
 * @author  Mohammed Diaa @Mohamed-Diaa-ES <mohammediaato@gmail.com>
 * @date        26/10/2025
 */
#include "Led_Interafce.h"
#include "../Macros.h"
uint8_t Leds_Group=0;
uint8_t*LED_Port =NULL;
void Led_Counter_Init(uint8_t Group)
{
    Leds_Group=Group;
    switch (Group)
    {
    case GroupA:
            DDRA_Reg=0xFF;   
            LED_Port=&PORTA_Reg;
        break;
    case GroupB:
            DDRB_Reg=0xFF;      
            LED_Port=&PORTB_Reg;  
        break;
    case GroupC:
            DDRC_Reg=0xFF;  
            LED_Port=&PORTC_Reg;      
        break;
    case GroupD:
            DDRD_Reg=0xFF;  
            LED_Port=&PORTD_Reg;      
        break;
    
    default:
        break;
    }
    
}
void Led_Counter_Stop(uint8_t Group)
{
    switch (Group)
    {
    case GroupA:
            DDRA_Reg=0x00;  
            PORTA_Reg=0x00;      
    
        break;
    case GroupB:
            DDRB_Reg=0x00;
            PORTB_Reg=0x00;          
        break;
    case GroupC:
            DDRC_Reg=0x00;
            PORTC_Reg=0x00;          
        break;
    case GroupD:
            DDRD_Reg=0x00;
            PORTD_Reg=0x00;          
        break;
    
    default:
        break;
    }
}
void Led_Counter_Start(uint8_t Group)
{
    switch (Group)
    {
    case GroupA:
            DDRA_Reg=0xFF;        
        break;
    case GroupB:
            DDRB_Reg=0xFF;        
        break;
    case GroupC:
            DDRC_Reg=0xFF;        
        break;
    case GroupD:
            DDRD_Reg=0xFF;        
        break;
    
    default:
        break;
    }
}

