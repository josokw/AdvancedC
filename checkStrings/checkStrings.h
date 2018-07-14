#ifndef CHECKSTRINGS_H
#define CHECKSTRINGS_H

#include <stdbool.h>

void trim(char dest[], const char scr[]);
bool isInteger(const char str[]);
bool isMACaddress(const char str[]);

#endif
