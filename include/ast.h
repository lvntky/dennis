#ifndef __AST_H__
#define __AST_H__

#include "definitions.h"

ASTnode *make_ast_node(int , ASTnode*, ASTnode* , int);
ASTnode *make_ast_leaf(int, int);
ASTnode *make_unary_ast(int,ASTnode*, int);
ASTnode *binary_expression(void);
int ast_interpreter(ASTnode* node);

#endif
