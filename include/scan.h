/*
  08.2023 Levent Kaya
  Scanner declerations
*/

#ifndef __SCAN_H__
#define __SCAN_H__


#include "definitions.h"
#include <string.h>

/*detect the current charactyet position*/
int character_position(char *, int);

/*get the next character from source code*/
int next_character();

/*skip the unwanted character*/
int skip(void);

/*Scanner function*/
int scan(token *);

/* put back the unwanted character*/
void put_back(int);

int scan_int(int);

void init_scanner();

void scan_debugger();

#endif
