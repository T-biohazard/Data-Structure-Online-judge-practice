
#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * preptr;
    struct node * nextptr;
}*head, *ennode;


void DlListcreation(int n);
void rev();
void displayDlList();

int main()
{
    int n;
    head = NULL;
    ennode = NULL;
	printf("\n\n Doubly Linked List : Create and display a doubly linked list :\n");
	printf("-------------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    DlListcreation(n);
    rev();
   //displayDlList();
    return 0;
}

void DlListcreation(int n)
{
    int i, num;
    struct node *fnNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%d", &num);

            head->num = num;
            head->preptr = NULL;
            head->nextptr = NULL;
            ennode = head;
// putting data for rest of the nodes
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->preptr = ennode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;

                    ennode->nextptr = fnNode;   // previous node is linking with the new node
                    ennode = fnNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}

void displayDlList()
{
    struct node * tmp;
    int n = 1;
    if(head == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = head;
        printf("\n\n Data entered on the list are :\n");

        while(tmp != NULL)
        {
            printf("%d",tmp->num);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }
}



void rev()
{
    struct node * tmp;
    int n = 0;

    if(ennode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = ennode;
        printf("\n Data in reverse order are :\n");
        while(tmp != NULL)
        {
            printf(" Data in node %d : %d\n", n+1, tmp->num);
            n++;
            tmp = tmp->preptr; // current pointer set with previous node
        }
    }
}


/*void rev(){
struct node *current=head,*nextNode;

while(current!=NULL){
nextNode=current->nextptr;
current->nextptr=current->preptr;

current->nextptr=nextNode;
current=nextNode;

}
current=head;
head=ennode;
ennode=current;

// printf(" rev %d",current->num);
}

*/
