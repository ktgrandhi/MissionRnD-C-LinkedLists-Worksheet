/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int count[3] = { 0 },index;
	struct node* ref=head;
	while (ref != NULL)
	{
		count[ref->data]++;
		ref = ref->next;
	}
	ref = head;
	for (index = 0; index < 3; index++)
	{
		while (count[index] > 0)
		{
			ref->data = index;
			ref = ref->next;
			count[index]--;
		}
	}
	
}