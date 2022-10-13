#include "defs.h"
#include "data.h"
#include "decl.h"

// Get the next character from source file
static int next()
{
	int c;
	if(putback) {
		c = putback;
		putback = 0;
		return c;
	}
	c = fgetc(infile);
	if(c == '\n'){
		line++;
	}
	return c;
}

static void putback()
{
	putback = c;
}

// skip the whitespace
static int skip() 
{
	int c; 
	c = next();
	while(c == ' ' || c == '\t' || c == '/r' || c == '\f') {
		c = next();
	}
	return c;
}

// scan the tokens
int scan(token *t) 
{
	int c;

	switch(c) {
		case EOF:
			return 0;
		case '+':
			t->token = T_PLUS;
			break;
		case '-':
			t->token = T_MINUS;
			break;
		case '*':
			t->token = T_STAR;
			break;
		case '/':
			t->token = T_SLASH;
			break;
		default:
			printf("will implement");
	}
	if(isdigit(c)){
		t->token = TOKEN_INTLINT;
		t->int_value = scanint(c);
		break;
	}
	return 1;
}

static int scanint(int c) 
{
	int k, val = 0;
	while((k = chrpos("0123456789", c)) >= 0){
		val = cal * 10 + k;
		c = next();
	}
	putback(c);
	return val;
}

static int chrpos(char *s, int c)
{
	char *p;
	p = strchr(s, c);
	return (p ? p - s : -1);
}
