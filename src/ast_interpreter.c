#include "../include/ast.h"
#include <stdio.h>

static char *AST_operators[] = {"+", "-", "*", "/"};

int ast_interpreter(ASTnode*node) {
  int left_val, right_val;

  if(node->left) {
    left_val = ast_interpreter(node->left);
  }
  if(node->right) {
    right_val = ast_interpreter(node->right);
  }

  if(node->operation == A_INTLITERAL) {
    printf("int: %d\n", node->int_value);
  } else {
    printf("%d, %s, %d\n", left_val, AST_operators[node->operation], right_val);
  }

  switch(node->operation) {
  case A_ADD:
    return (left_val + right_val);
  case A_SUBSTRACT:
    return (left_val - right_val);
  case A_MULTIPLY:
    return (left_val * right_val);
  case A_DIVIDE:
    return (left_val / right_val);
  case A_INTLITERAL:
    return node->int_value;
  default:
    fprintf(stderr, "Unknown AST operator: %d", node->operation);
    exit(1);
  }
}
