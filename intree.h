#ifndef in_tree
#define in_tree
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define LENMAX 15


//BST struct definition
typedef struct tree_node
{
	char readIn[LENMAX+1]; 
    struct tree_node *leftchild;
	struct tree_node *rightchild;
}tree_leaf;


struct tree_node *rootPtr;

//prototypes
int totalnode(tree_leaf * treePtr);
int totalheight(tree_leaf * treePtr);
int leafcount(tree_leaf * treePtr);
void makeOutput(char * fileName);

#endif
