/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node* First = NULL,*value;
	int digit;
	if (N < 0)
		N *= -1;
	if (N == 0)
	{
		value = (struct node*)malloc(sizeof(struct node));
		value->next = NULL;
		value->num = 0;
		return value;
	}
	while (N > 0)
	{
		digit = N % 10;
		value = (struct node*)malloc(sizeof(struct node));
		if (value == NULL)
			return NULL;
		value->num = digit;
		if (First == NULL)
		{
			value->next = NULL;
			First = value;
		}
		else
		{
			value->next = First;
			First = value;
		}
		N /= 10;
	}

	return First;
}