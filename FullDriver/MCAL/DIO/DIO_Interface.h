/**
 * @file   DIO_Interface.h
 * @author Developer: Mohamed Diaa -> MohammedDiaato@gmail.com
 * @author Reviewer:  Hesham Ahmed ->
 * @brief This file contains The dio Interface Declaration of Functions
 * @version  .1
 * @date     3/9/2025
 */
#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_
#include "DIO_Interface.h"
#include "../RegistersAddress.h"
#include "DIO_Private.h"
#include "DIO_Config.h"
#include "../../Common/Macro.h"
#include <stdint.h>

void mDIO_ChangeDirectionForPin(uint8_t PortGroup,uint8_t PinNumber,uint8_t Direction);
void mDIO_ChangeDirectionForGroup(uint8_t PortGroup,uint8_t Direction);

void mDIO_WriteValueForPin(uint8_t PortGroup,uint8_t PinNumber,uint8_t OutputValue);
void mDIO_WriteValueForGroup(uint8_t PortGroup,uint8_t OutputValue);

uint8_t mDIO_ReadValueFromPin(uint8_t PortGroup,uint8_t PinNumber);
uint8_t mDIO_ReadValueFromGroup(uint8_t PortGroup);


#endif
