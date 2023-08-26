#include "../include/data.h"
#include "../include/ast.h"
#include <stdio.h>

static ASTnode *primary(void) {
  ASTnode* node;

  switch(Token.token) {
  case T_INTLITERAL:
    node = make_ast_leaf(A_INTLITERAL, Token.int_value);
    scan(&Token);
    return node;
  default:
    fprintf(stderr, "syntax error on line: %d\n", Line);
    exit(1);
  }
}
