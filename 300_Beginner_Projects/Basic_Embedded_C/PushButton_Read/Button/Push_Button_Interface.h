/**
 * @file    Push_Button_Interface.h
 * @brief   This File Includes APIs && configurations  used for the Functionality of reading push button state with various kinds of connections and logics.
 * @details This file includes Different types of Button Reading Connections.
            - Pull-Up, Pull-Down Concepts
            Also it supports configurable Active low and Active high logic.
 * @author  Mohammed Diaa mohammeddiaato@gmail.com @Mohamed-Diaa-ES
 */
#ifndef _PUSH_BTN_INTERFACE_H_
#define _PUSH_BTN_INTERFACE_H_
#include "../../Macros.h"
#include "Push_Button_Config.h"
#define Btn_PullUp  1
#define Btn_Pulldown  0


void Btn_Init( );
uint8_t Btn_GetStatus( );



#endif