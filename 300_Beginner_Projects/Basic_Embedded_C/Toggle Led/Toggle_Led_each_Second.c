#include "Toggle_Led_each_Second.h"
#include <util/delay.h>

void main()
{
    SetBit(DDRA_Reg,Pin0);
    SetBit(DDRA_Reg,Pin5);

    while (1)
    {
        ToggleBit(PORTA_Reg,Pin0);   
        _delay_ms(1000);
        ToggleBit(PORTA_Reg,Pin0);   
        ToggleBit(PORTA_Reg,Pin5);    
        _delay_ms(1000);
        ToggleBit(PORTA_Reg,Pin5);    
    }
    
}

