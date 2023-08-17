#include "../include/scan.h"

static int character_position(char* string, int index) {
  char* position;
  position = strchr(string, index);

  return (position ? position - string : -1 );
}

static int next_character() {
  int c;
  if (PUTBACK) {
    c = PUTBACK;
    PUTBACK = 0;
    return c;
  }

  c = fgetc(INFILE);
  if ('\n' == c) {
    LINE++;
  }

  return c;
}

static int skip() {
  int character;
  character = next_character();

  while (' ' == character || '\t' == character || '\n' == character || '\r' == character || '\f' == character) {
    character = next_character();
  }
  return character;
}



static void put_back(int c) {
  PUTBACK = c;
}
