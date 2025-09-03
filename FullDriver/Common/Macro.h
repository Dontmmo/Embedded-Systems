/**
 * @file   Macro.h
 * @author Developer: Mohamed Diaa -> MohammedDiaato@gmail.com
 * @author Reviewer:  Hesham Ahmed ->
 * @brief This file contains the Macros musch Used all over the Programs
 * @version  .1
 * @date     3/9/2025
 */

#ifndef _MACRO_H_
#define _MACRO_H_

/*Function Like Macros  */
/**
 * @def   SetBit
 * @brief put one to a certain bit
 */
#define SetBit(Reg,Bit)  (Reg |=( 1<<Bit))
/**
 * @def   CelarBit
 * @brief put Zero to a certain bit
 */
#define ClearBit(Reg,Bit)  (Reg &=~( 1<<Bit))
/**
 * @def   ToggleBit
 * @brief  Toglle a certain bit
 */
#define ToggleBit(Reg,Bit)  (Reg ^= ( 1<<Bit ))
/**
 * @def   GetBit
 * @brief Get the value of a certain bit
 */
#define GetBit(Reg,Bit)  ((Reg>>1) &(0x01))

/**
 * @def   ClearFlag 
 * @brief Make the value of the Flag bit =0
 */
#define ReadFlag(Reg,FlagBit)  SetBit(Reg,FlagBit)
/**
 * @def   ReadFlag
 * @brief Read the value of the Flag bit
 */
#define ReadFlag(Reg,FlagBit)  GetBit(Reg,Flagbit)
/**------------------------------------------------------------------------------------ */
/*Object Like Macros  */
/**
 * @def   Enable
 * @brief This macro used to indicate a certain functionality is enabled
 */
#define Enable  1
/**
 * @def   Disable 
 * @brief This macro used to indicate a certain functionality is Disabled
 */
#define Disable 0
/**
 * @def   Output
 * @brief This macro is used to say that this is an output
 */
#define Output  1
/**
 * @def   Input
 * @brief This macro is used to say that this is an Input
 */
#define Input   0
/**
 * @def   High
 * @brief This macro is used to say that this is an High signal
 */
#define High  1
/**
 * @def   Low
 * @brief This macro is used to say that this is an Low signal
 */
#define Low   0
/**
 * @def
 * @brief
 */
/**
 * @def
 * @brief
 */
/**
 * @def
 * @brief
 */
/**
 * @def
 * @brief
 */
/**
 * @def
 * @brief
 */



#endif