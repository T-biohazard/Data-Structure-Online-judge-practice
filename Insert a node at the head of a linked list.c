


void addFirst(struct node *head, int val)
{

      struct node *newNode = malloc(sizeof(struct node));
      newNode->data = val;

      newNode->next = *head;

      *head = newNode;
}

