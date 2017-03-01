#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intree.h"
#define LENMAX 15

int main(int argc, char* argv[])
{

	FILE *f_input; 
	FILE *f_output;

int stringCount = 0;
char stringIn[LENMAX];

// use to traverse through tree
struct tree_node *temp = NULL;
struct tree_node *temp2 = NULL; 

f_input = fopen(argv[1],"r");

//ERROR CHECK: Making sure file is being read correctly.
if (f_input == NULL)
{
	fprintf(stderr, "input file error\n");

	return 0;
}
//ERROR CHECK: Making sure file is being written correctly.
if (f_output == NULL)
{
	fprintf(stderr, "output file error\n");

	return 0;
}


// a while loop thatreads from file and calls insertnode that creates and compares nodes 
//then inserts them into tree
while ( (fscanf(f_input, "%s", stringIn)) != EOF)
{

	if((temp = malloc(sizeof(tree_leaf))) == NULL)
	{
		fprintf(stderr, "Malloc Error!\n" );
		return 0;
	}
	
		strcpy(temp -> readIn, stringIn);
		temp-> leftchild = NULL;
		temp-> rightchild = NULL;	

	if (rootPtr == NULL)
		{
		rootPtr = temp;
		
		}
	//ERROR CHECK: If memory wasn't allocated for node, it kicks out of loop.
	else
	{
		if((temp2 = malloc(sizeof(tree_leaf))) == NULL)
		{
		
		fprintf(stderr, "Malloc Error!\n" );
		return 0;
		
		}
		
		temp2 = rootPtr;
		
		while( (temp2->leftchild != NULL) || (temp2->rightchild != NULL) )
		{
		
			//case 1: if null-- create, if less than-- store left
			if(strcmp(stringIn, temp2 -> readIn) < 0)
			{
				if( (temp2 -> leftchild) == NULL){
					temp2 -> leftchild = temp;
			
				}
				else
					temp2 = temp2 -> leftchild; 
			}
		//case 2: if null-- create, if greater than-- store right
			if(strcmp(stringIn, temp2 -> readIn) > 0)
			{
				if( (temp2 -> rightchild) == NULL){
					temp2 -> rightchild = temp;
					
				}
				else
					temp2 = temp2 -> rightchild;
			}

			else
				break;
		}
			//compares input from file to a pointer to struct string 
			//if less than, store it in left child
			if(strcmp(stringIn, temp2 -> readIn) < 0)
			{
					temp2 -> leftchild = temp;
					
			}
			//if greater than, store it in right child
			if(strcmp(stringIn, temp2 -> readIn) > 0)
			{
					temp2 -> rightchild = temp;
					
			}
	}
}

fclose(f_input);

//print statements for stats

makeOutput(argv[2]);

/*printf("No. of strings in the input file: %d \n", totalnode(rootPtr));
printf("height of the search tree: %d \n", totalheight(rootPtr) );
printf("number of leaves in the tree: %d \n", leafcount(rootPtr) ); 
printf("the height of left subtree of root: %d \n", totalheight(rootPtr -> leftchild) );
printf("No. of  strings in the left subtree: %d \n", totalnode(rootPtr -> leftchild) );
printf("the height of right subtree of root: %d \n", totalheight(rootPtr -> rightchild) );
printf("No. of  strings in the right subtree: %d \n", totalnode(rootPtr -> rightchild) );

*/


	return 0;

}