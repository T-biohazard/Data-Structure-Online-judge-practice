
/* C program to merge two sorted linked lists */
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};

/* pull off the front node of the source and put it in dest */
void MoveNode(struct Node** destRef, struct Node** sourceRef);

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	/* a dummy first node to hang the result on */
	struct Node dummy;

	/* tail points to the last result node */
	struct Node* tail = &dummy;

	/* so tail->next is the place to add new nodes
	to the result. */
	dummy.next = NULL;
	while (1)
	{
		if (a == NULL)
		{
			/* if either list runs out, use the
			other list */
			tail->next = b;
			break;
		}
		else if (b == NULL)
		{
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);

		tail = tail->next;
	}
	return(dummy.next);
}

void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	/* the front source node */
	struct Node* newNode = *sourceRef;
	assert(newNode != NULL);


	*sourceRef = newNode->next;


	newNode->next = *destRef;

	*destRef = newNode;
}



void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));


	new_node->data = new_data;

	new_node->next = (*head_ref);


	(*head_ref) = new_node;
}


void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}


int main()
{
	/* Start with the empty list */
	struct Node* res = NULL;
	struct Node* a = NULL;
	struct Node* b = NULL;


	push(&a, 15);
	push(&a, 10);
	push(&a, 5);

	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

	res = SortedMerge(a, b);

	printf("Merged Linked List is: \n");
	printList(res);

	return 0;
}
