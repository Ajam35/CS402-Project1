#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intree.h"

//calculate total height recursively
int totalheight(tree_leaf * treePtr)
{
	//if empty, return 0
	if ( (treePtr == NULL) || (treePtr -> leftchild) == NULL && (treePtr -> rightchild) == NULL )
			{
			return 0;
			}
	//else, recursively call height function and pass in pointer to left and right nodes
	else
	{
		int lHeight = totalheight(treePtr -> leftchild);
		int rHeight = totalheight(treePtr -> rightchild);
	

	//take larger of two trees and return result
		if (lHeight > rHeight)
			{
			return  (lHeight +1);
			}
		else 
			{
			return (rHeight +1);
			}
	}
}

// a function that uses recursion to determine total number of nodes inside tree.
//I am using this to printout total number of strings from file.
int totalnode(tree_leaf * treePtr)
	{

		if(treePtr == NULL)
		{
			return 0;
		}
		 else if( (treePtr -> leftchild) == NULL && (treePtr -> rightchild) ==NULL)
				{
			      return 1;
				}
		   else
			{
				int lNode = totalnode(treePtr -> leftchild);
				int rNode = totalnode(treePtr -> rightchild);
			
				  return ( lNode + rNode + 1 );
			}
	}

//a function that recursively counts the leaves
int leafcount(tree_leaf * treePtr)
{

if (treePtr == NULL)
{
	return 0;
}
	if(treePtr -> leftchild == NULL && treePtr -> rightchild == NULL)
	{
		return 1;
	}
	else
	{
		return leafcount(treePtr -> leftchild) + leafcount(treePtr -> rightchild);
	}
}



