/*
  08.2023 - Levent Kaya
  The general definitions of compiler utilities
  data structures, specified limits etc.
 */

#ifndef __DEFINITIONS_H__
#define __DEFINITIONS_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct token {
    int token;
    int int_value;
} token;

enum {
    T_PLUS, T_MINUS, T_STAR, T_SLASH, T_INTLITERAL
};

#endif
