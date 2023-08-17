/*
  08.2023 Levent Kaya
  Scanner declerations
 */

#ifndef __SCAN_H__
#define __SCAN_H__

#include "definitions.h"
#include "data.h"
#include <string.h>

/*detect the current charactyet position*/
static int character_position(char *, int);

/*get the next character from source code*/
static int next_character();

/*skip the unwanted character*/
static int skip(void);

/*Scanner function*/
int scan(token *);

/* put back the unwanted character*/
static void put_back(int);

static int scan_int(int);

#endif
