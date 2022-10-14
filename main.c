#include "defs.h"
#include <string.h>
#define extern_
#include "data.h"
#undef extern_
#include "decl.h"
#include <errno.h>
#include <stdio.h>

static void init() 
{
	line = 1;
	putback_token = '\n';
}

static void usage(char *prog) 
{
	fprintf(stderr, "Usage %s infile\n", prog);
	exit(1);
}

char *tok_str[] = {"+", "-", "*", "/", "intlit"};

static void scan_file() 
{
	struct token t; 
	while(scan(&t)) {
		printf("token %s\n", tok_str[t.token]);	
	}
	if(t.int_value == TOKEN_INTLIT) {
		printf(", value %d", t.int_value);
	}
	printf("\n");
}

void main(int argc, char** argv) 
{
	if(argc != 2) {
		usage(argv[0]);
	}
	init();
	
	if((infile = fopen(argv[1], "r")) == NULL) {
	  fprintf(stderr, "Unable to open %s: %s:\n", argv[1], strerror(errno));
		exit(1);
	}
	scan_file();
	exit(0);
}

