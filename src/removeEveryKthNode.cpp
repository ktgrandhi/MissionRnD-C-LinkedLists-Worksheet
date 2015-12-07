/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node* reference = head;
	int count = K+1;
	
	if (head==NULL||K<=1)
	return NULL;
		
	while (reference != NULL&&reference->next != NULL)
	{
		if ((count+1)%K == 0)
		{
			if (reference->next->next == NULL)
				reference->next = NULL;
			else
				reference->next = reference->next->next;
			count += 2;
		}
		else
		{
			count++;
		}
		reference = reference->next;
	}
	return head;
}