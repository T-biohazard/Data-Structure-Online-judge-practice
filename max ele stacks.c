 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node *Node;
typedef struct stackRep *Stack;

typedef struct node {
   int data;
   int prevMax;
   Node next;
} node;

typedef struct stackRep {
   int maxElt;
   Node head;
} stack;


Stack newStack(void);
void destroyStack(Stack s);
Node newNode(Stack s, int i);
void push(Stack s, Node n);
Node pop(Stack s);


int main(int argc, char *argv[]) {

   int i;
   int lines;

   i = 0;
   fscanf(stdin, "%d", &lines);

   Stack s;
   s = newStack();

   while (i < lines) {
      int req;
      fscanf(stdin, "%d", &req);
      // printf("read: %d\n", req);

      if (req == 1)
         // push

         int data;
         fscanf(stdin, "%d", &data);
         // printf("pushing %d..\n", data);

         Node n;
         n = newNode(s, data);
         push(s, n);

         if (data > s->maxElt) {
            s->maxElt = data;
         }

      } else if (req == 2) {
         // pop
         // printf("popping\n");
         Node n;
         n = pop(s);

         if (n->data == s->maxElt) {
            s->maxElt = n->prevMax;
         }

         free(n);

      } else {
         // return max
         printf("%d\n", s->maxElt);
      }

      i += 1;
   }


   destroyStack(s);

   return EXIT_SUCCESS;
}

void destroyStack(Stack s) {
   if (s != NULL) {
      Node curr;
      Node prev;

      curr = s->head;
      prev = s->head;

      while (curr->next != NULL) {
         prev = curr;
         curr = curr->next;
         free(prev);
      }

      free(curr);
   }

   free(s);
}

Stack newStack(void) {
   Stack s;
   s = malloc(sizeof(struct stackRep) * 1);
   s->maxElt = 0;
   s->head = NULL;
   return s;
}

Node newNode(Stack s, int i) {
   Node n;
   n = malloc(sizeof(struct node) * 1);
   n->data = i;
   n->prevMax = s->maxElt;
   n->next = NULL;
   return n;
}

void push(Stack s, Node n) {
   if (s->head == NULL) {
      s->head = n;
   } else {
      n->next = s->head;
      s->head = n;
   }
   // printf("push \t%p\n", n);
}

Node pop(Stack s) {

   Node curr;
   curr = NULL;

   if (s->head != NULL) {
      curr = s->head;
      s->head = curr->next;
   }

   return curr;
}

