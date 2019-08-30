#ifndef CHECKSTRINGS_H
#define CHECKSTRINGS_H

#include <stdbool.h>

/*!
 * Removes trailing and leading white spaces.
 */
void trim(char dest[], const char scr[]);
/*!
 * Checks is string is integer.
 * Only checks integers without + or - sign.
 * \pre No leading + or - sign.
 */
bool isInteger(const char str[]);
/*!
 * Checks if string is a valid MAC address.
 */
bool isMACaddress(const char str[]);

#endif
