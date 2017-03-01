#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intree.h"

void makeOutput(char * fileName)
{
	FILE * out_file = fopen(fileName, "w");

fprintf(out_file, "No. of strings in the input file: %d \n", totalnode(rootPtr));
fprintf(out_file, "height of the search tree: %d \n", totalheight(rootPtr) );
fprintf(out_file, "number of leaves in the tree: %d \n", leafcount(rootPtr) ); 
fprintf(out_file, "the height of left subtree of root: %d \n", totalheight(rootPtr -> leftchild) );
fprintf(out_file, "No. of  strings in the left subtree: %d \n", totalnode(rootPtr -> leftchild) );
fprintf(out_file, "the height of right subtree of root: %d \n", totalheight(rootPtr -> rightchild) );
fprintf(out_file, "No. of  strings in the right subtree: %d \n", totalnode(rootPtr -> rightchild) );

fclose(out_file);

}