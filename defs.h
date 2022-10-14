#ifndef DEFS_H
#define DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

enum 
{
  TOKEN_PLUS, TOKEN_MINUS, TOKEN_STAR, TOKEN_SLASH, TOKEN_INTLIT
};

struct token
{
	int token;
	int int_value;
};
#endif
