

#include <stdio.h>
#include <stdlib.h>

struct Node
{
int data;
struct Node *next;
struct Node *prev;
};

void reverse(struct Node **head_ref)
{
	struct Node *temp = NULL;
	struct Node *current = *head_ref;

	while (current != NULL)
	{
	temp = current->prev;
	current->prev = current->next;
	current->next = temp;
	current = current->prev;
	}

	if(temp != NULL )
		*head_ref = temp->prev;
}


void push(struct Node** head_ref, int new_data)
{

	struct Node* new_node =
			(struct Node*) malloc(sizeof(struct Node));


	new_node->data = new_data;


	new_node->prev = NULL;


	new_node->next = (*head_ref);


	if((*head_ref) != NULL)
	(*head_ref)->prev = new_node ;


	(*head_ref) = new_node;
}

void printList(struct Node *node)
{
while(node!=NULL)
{
printf("%d ", node->data);
node = node->next;
}
}

int main()
{
/* Start with the empty list */
struct Node* head = NULL;

/* Let us create a sorted linked list to test the functions
Created linked list will be 10->8->4->2 */
push(&head, 2);
push(&head, 4);
push(&head, 8);
push(&head, 10);

printf("\n Original Linked list ");
printList(head);

/* Reverse doubly linked list */
reverse(&head);

printf("\n Reversed Linked list ");
printList(head);

getchar();
}

