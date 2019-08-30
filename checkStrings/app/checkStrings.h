#ifndef CHECKSTRINGS_H
#define CHECKSTRINGS_H

#include <stdbool.h>

/*!
 * Removes trailing and leading white spaces (tabs and spaces).
 */
void trim(char dest[], const char scr[]);
/*!
 * Checks if a string represents an integer.
 * Only checks integers without + or - sign.
 * \pre No leading + or - sign.
 * \todo Allow for one leading + or - sign.
 */
bool isInteger(const char str[]);
/*!
 * Checks if a string represents a valid traditional MAC address (12-digit 
 * hecadecimal numbers) in standard IEEE 802 format six groups of two 
 * hexadicimal digits separated by colons : 
 *  \todo Add separation by hyphens -
 */
bool isMACaddress(const char str[]);

#endif
