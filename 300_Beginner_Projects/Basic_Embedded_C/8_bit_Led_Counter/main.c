#include "LED/Led_Interafce.h"
#include <util/delay.h>
#include <stdint.h>
#define One_Second 1000// 1000 milli second

int main()
{
    uint8_t Group=1;
    Led_Counter_Init(Group);

    uint8_t Counting=0;
    
    while (1)
    {
    switch (Group)
    {
    case GroupA:
            PORTA_Reg=Counting;   

        break;
    case GroupB:
            PORTB_Reg=Counting;      
 
        break;
    case GroupC:
            PORTC_Reg=Counting;  
     
        break;
    case GroupD:
            PORTD_Reg=Counting;   
        break;
    
    default:
        break;
    }
        _delay_ms(One_Second);
        Counting++;
    }
    
}