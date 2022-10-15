#include "defs.h"
#include "data.h"
#include "decl.h"

static int chrpos(char *s, int c)
{
	char *p;
	p = strchr(s, c);
	return (p ? p - s : -1);
}

// Get the next character from source file
static int next()
{
	int c;
	if(putback_token) {
		c = putback_token;
		putback_token = 0;
		return c;
	}
	c = fgetc(infile);
	if(c == '\n'){
		line++;
	}
	return c;
}

static void putback(int c)
{
  putback_token = c;
}

// skip the whitespace
static int skip() 
{
	int c; 
	c = next();
	while(c == ' ' || c == '\t' || c == '\n' ||  c == '\r' || c == '\f') {
		c = next();
	}
	return c;
}

static int scanint(int c) 
{
	int k, val = 0;
	while((k = chrpos("0123456789", c)) >= 0){
		val = val * 10 + k;
		c = next();
	}
	putback(c);
	return val;
}

// scan the tokens
int scan(struct token *t) 
{
	int c;

	c = skip();

	switch(c) {
		case EOF:
			return 0;
		case '+':
			t->token = TOKEN_PLUS;
			break;
		case '-':
			t->token = TOKEN_MINUS;
			break;
		case '*':
			t->token = TOKEN_STAR;
			break;
		case '/':
			t->token = TOKEN_SLASH;
			break;
		default:
		  if(isdigit(c)){
		    t->token = TOKEN_INTLIT;
		    t->int_value = scanint(c);
		  }
		  
	}
	return 1;
}
