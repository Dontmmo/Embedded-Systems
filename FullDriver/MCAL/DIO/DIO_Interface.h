
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
#include "../../Common/Macro.h"
#include <stdint.h>
/**
 * @brief Changes the direction of a specific pin in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @param PinNumber The pin number within the port group.
 * @param Direction The desired direction (e.g., input or output).
 */
void mDIO_ChangeDirectionForPin(uint8_t PortGroup,uint8_t PinNumber,uint8_t Direction);

/**
 * @brief Changes the direction of all pins in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @param Direction The desired direction for the group (e.g., input or output).
 */
void mDIO_ChangeDirectionForGroup(uint8_t PortGroup,uint8_t Direction);

/**
 * @brief Writes a value to a specific pin in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @param PinNumber The pin number within the port group.
 * @param OutputValue The value to write (e.g., high or low).
 */
void mDIO_WriteValueForPin(uint8_t PortGroup,uint8_t PinNumber,uint8_t OutputValue);

/**
 * @brief Writes a value to all pins in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @param OutputValue The value to write to the group (e.g., high or low).
 */
void mDIO_WriteValueForGroup(uint8_t PortGroup,uint8_t OutputValue);


/**
 * @brief Reads the value from a specific pin in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @param PinNumber The pin number within the port group.
 * @return uint8_t The value read from the pin (e.g., high or low).
 */

uint8_t mDIO_ReadValueFromPin(uint8_t PortGroup,uint8_t PinNumber);

/**
 * @brief Reads the value from all pins in a port group.
 * 
 * @param PortGroup The port group identifier.
 * @return uint8_t The value read from the group.
 */
uint8_t mDIO_ReadValueFromGroup(uint8_t PortGroup);


#endif
