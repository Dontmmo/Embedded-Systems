/**
 * @file    Push_Button_Config.h
 * @brief   This File Includes Private things that does not concern the user.
 * @author  Mohammed Diaa mohammeddiaato@gmail.com @Mohamed-Diaa-ES
 */
#ifndef _PUSH_BTN_Config_H_
#define _PUSH_BTN_Config_H_
#include "../../Macros.h"

#define Active_Logic           High

#define _Pullup_Pressed         0 
#define _Pullup_NotPressed      1

#define _Pull_Down_Pressed      1
#define _Pull_Down_NotPressed   0
#define Btn1_Pin    Pin0
#define Btn1_Reg    DDRA_Reg
#endif