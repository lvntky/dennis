#include "../include/ast.h"
#include <stdlib.h>

ASTnode *make_ast_node(int operation, ASTnode* left, ASTnode* right, int value) {
  ASTnode* node;
  node = (ASTnode *)malloc(sizeof(ASTnode));

  if(node == NULL) {
    printf("Unable to malloc an AST!\n");
    exit(1);
  }
  node->operation = operation;
  node->left = left;
  node->right = right;
  node->int_value = value;

  return node;
}

ASTnode *make_ast_leaf(int operation, int value) {
  return make_ast_node(operation, NULL, NULL, value);
}

ASTnode *make_unary_ast(int operation ,ASTnode* left, int value) {
  return make_ast_node(operation, left, NULL, value);
}
