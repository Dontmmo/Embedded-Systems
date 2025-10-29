#include "8_bit_Led_Counter/LED/Led_Interafce.h"
#include <util/delay.h>
extern uint8_t *Led_port;
#define One_Second 1000// 1000 milli second
int main()
{
    Led_Counter_Init(1);
    uint8_t Counting=0;
    
    while (1)
    {
        Led_port=Counting;
        _delay_ms(One_Second);
        Counting++;
    }
    
}