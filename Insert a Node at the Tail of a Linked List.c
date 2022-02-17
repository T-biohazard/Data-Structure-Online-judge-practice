


// i am only adding the func
void addLast(struct node *head, int val)
{

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next     = NULL;


    if(*head == NULL)
         *head = newNode;

    else
    {
        struct node *lastNode = *head;



        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }


        lastNode->next = newNode;


    }

}
