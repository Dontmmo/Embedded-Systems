#include "Push_Button_Interface.h"
#include <stdint.h>



void Btn_Init_PullDown( )
{
    ClearBit(Btn1_Reg,Btn1_Pin);
    ClearBit(PORTA_Reg,Btn1_Pin);
}
void Btn_Init_PullUp( )
{
    ClearBit(Btn1_Reg,Btn1_Pin);
    SetBit(PORTA_Reg,Btn1_Pin);

}   

uint8_t Btn_GetStatus()
{
    return GetBit(Btn1_Reg,Btn1_Pin);
    
}