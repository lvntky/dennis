#ifndef SCAN_H
#define SCAN_H

#include "definitions.h"
#include <stdio.h>

int character_position(char *, int);
int next_character();
int skip(void);
int scan(token *);
void put_back(int);
int scan_int(int);
void init_scanner(void);
void scan_debugger(void);

#endif // SCAN_H
