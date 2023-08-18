#include "../include/scan.h"
#include "../include/data.h"



void init_scanner() {  
  Line= 0;
  Putback = '\n';
}


int character_position(char* string, int index) {
  char* position;
  position = strchr(string, index);

  return (position ? position - string : -1 );
}

int next_character() {
  int character;
 
  if (Putback) {
    character = Putback;
    Putback = 0;
    return character;
  }

  character = fgetc(Infile);

  if ('\n' == character) {
    Line++;
  }
  return character;
}

void put_back(int character) { Putback = character; }

// TODO: Define constans
int skip(void) {
  int character;

  character = next_character();
  while (' ' == character || '\t' == character || '\n' == character || '\r' == character || '\f' == character) {
    character = next_character();
  }
  return (character);
}

int scan_int(int character) {
  int k, val = 0;
  while ((k = character_position("0123456789", character)) >= 0) {
    val = val * 10 + k;
    character = next_character();
  }
  // hit the non-integer character
  put_back(character);
  return val;
}

int scan(token* token) {
  int character;

  //skip if whitespace
  skip();

  switch(character) {
  case EOF:
    return (0);
  case '+':
    token->token = T_PLUS;
    break;
  case '-':
    token->token = T_MINUS;
    break;
  case '/':
    token->token = T_SLAST;
    break;
  case '*':
    token->token = T_STAR;
    break;
  default:
    if(isdigit(character)) {
      token->token = T_INTLITERAL;
      token->int_value = scan_int(character);
    }
    printf("Unrecognized character: %c, on line %d\n", character, Line);
    exit(1);
  }
  return (1);
}

// debug only method
void scan_debugger() {
  char *tokstr[] = { "+", "-", "*", "/", "intlit" };
  
  token T;
  while (scan(&T)) {
    printf("> TOKEN: %s\n", tokstr[T.token]);
    if(T.token == T_INTLITERAL) {
      printf("INTLIT\n");
    }
  }
}
