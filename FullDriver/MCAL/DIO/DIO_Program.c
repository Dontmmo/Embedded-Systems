/**
 * @file   DIO_Program.C
 * @author Developer: Mohamed Diaa -> MohammedDiaato@gmail.com
 * @author Reviewer:  Hesham Ahmed ->
 * @brief This file contains The dio Program implementaion of Interface Functions
 * @version  .1
 * @date     3/9/2025
 */
#include "DIO_Interface.h"
void mDIO_ChangeDirectionForPin(uint8_t PortGroup, uint8_t PinNumber, uint8_t Direction)
{
    if (PinNumber >= 0 && PinNumber < 8)
    {
        if (Direction == Output)
        {

            switch (PortGroup)
            {
            case GroupA:
                SetBit(DDRA_Reg, PinNumber);
                break;
            case GroupB:
                SetBit(DDRB_Reg, PinNumber);
                break;
            case GroupC:
                SetBit(DDRC_Reg, PinNumber);
                break;
            case GroupD:
                SetBit(DDRD_Reg, PinNumber);
                break;

            default:
                break;
            }
        }

        else if (Direction == Input)
        {
            switch (PortGroup)
            {
            case GroupA:
                ClearBit(DDRA_Reg, PinNumber);
                break;
            case GroupB:
                ClearBit(DDRB_Reg, PinNumber);
                break;
            case GroupC:
                ClearBit(DDRC_Reg, PinNumber);
                break;
            case GroupD:
                ClearBit(DDRD_Reg, PinNumber);
                break;

            default:
                break;
            }
        }
        else
        {
        }
    }
    else
    {
    }
}
void mDIO_ChangeDirectionForGroup(uint8_t PortGroup, uint8_t Direction)
{
    switch (PortGroup)
    {
    case GroupA:
        DDRA_Reg = Direction;
        break;
    case GroupB:
        DDRB_Reg = Direction;
        break;
    case GroupC:
        DDRC_Reg = Direction;
        break;
    case GroupD:
        DDRD_Reg = Direction;
        break;

    default:
        break;
    }
}

void mDIO_WriteValueForPin(uint8_t PortGroup, uint8_t PinNumber, uint8_t OutputValue)
{
    if (PinNumber >= 0 && PinNumber < 8)
    {
        if (OutputValue == High)
        {

            switch (PortGroup)
            {
            case GroupA:
                SetBit(PORTA_Reg, PinNumber);
                break;
            case GroupB:
                SetBit(PORTB_Reg, PinNumber);
                break;
            case GroupC:
                SetBit(PORTC_Reg, PinNumber);
                break;
            case GroupD:
                SetBit(PORTD_Reg, PinNumber);
                break;

            default:
                break;
            }
        }

        else if (OutputValue == Low)
        {
            switch (PortGroup)
            {
            case GroupA:
                ClearBit(PORTA_Reg, PinNumber);
                break;
            case GroupB:
                ClearBit(PORTB_Reg, PinNumber);
                break;
            case GroupC:
                ClearBit(PORTC_Reg, PinNumber);
                break;
            case GroupD:
                ClearBit(PORTD_Reg, PinNumber);
                break;

            default:
                break;
            }
        }
        else
        {
        }
    }
    else
    {
    }
}
void mDIO_WriteValueForGroup(uint8_t PortGroup, uint8_t OutputValue)
{
    switch (PortGroup)
    {
    case GroupA:
        PORTA_Reg = OutputValue;
        break;
    case GroupB:
        PORTB_Reg = OutputValue;
        break;
    case GroupC:
        PORTC_Reg = OutputValue;
        break;
    case GroupD:
        PORTD_Reg = OutputValue;
        break;

    default:
        break;
    }
}

uint8_t mDIO_ReadValueFromPin(uint8_t PortGroup, uint8_t PinNumber)
{
    uint8_t In = 0;
    if (PinNumber >= 0 && PinNumber < 8)
    {

        switch (PortGroup)
        {
        case GroupA:
            In = GetBit(PINA_Reg, PinNumber);
            break;
        case GroupB:
            In = GetBit(PINB_Reg, PinNumber);
            break;
        case GroupC:
            In = GetBit(PINC_Reg, PinNumber);
            break;
        case GroupD:
            In = GetBit(PIND_Reg, PinNumber);
            break;

        default:
            break;
        }
    }
    return In;
}
uint8_t mDIO_ReadValueFromGroup(uint8_t PortGroup)
{
    uint8_t In = 0;
    switch (PortGroup)
    {
    case GroupA:
        In = PINA_Reg;
        break;
    case GroupB:
        In = PINB_Reg;
        break;
    case GroupC:
        In = PINC_Reg;
        break;
    case GroupD:
        In = PIND_Reg;
        break;

    default:
        break;
    }
    return In;
}