/** 
 * @file   GIE.h
 * @author Developer: Mohamed Diaa -> MohammedDiaato@gmail.com
 * @author Reviewer:  Hesham Ahmed ->
 * @brief This file contains The General Interrupt enabling 
 * @version  .1
 * @date     3/9/2025
 */
#ifndef _GIE_H_
#define _GIE_H_
#include "../RegistersAddress.h"
#include "../../Common/Macro.h"

/**
 * @def   GIE_Bit
 * @brief General Interrupt Enable bit number
 */
#define GIE_Bit 7
/**
 * @def   GIE_Enable
 * @brief General Interrupt Enable Enabling the flag
 */
#define GIE_Enable  SetBit(SREG_Reg,GIE_Bit)
/**
 * @def   GIE_Disable
 * @brief General Interrupt Enable Disabling the flag
 */
#define GIE_Disable  ClearFlag(SREG_Reg,GIE_Bit)




#endif