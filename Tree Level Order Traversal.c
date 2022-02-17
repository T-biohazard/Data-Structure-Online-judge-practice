
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {

    int data;
    struct node *left;
    struct node *right;

};

struct node* insert( struct node* root, int data ) {

    if(root == NULL) {

        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;

    } else {

        struct node* cur;

        if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
        } else {
            cur = insert(root->right, data);
            root->right = cur;
        }

        return root;
    }
}

/* you only have to complete the function given below.
node is defined as

*/
void levelOrder( struct node *root) {

    struct node   *queue[500];
    int  queue_head, queue_end;
    struct node   *head;

    if (!root)
        return;

    queue[0] = root;
    queue_head = 0;
    queue_end = 1;

    while (queue_head < queue_end)
    {
        head = queue[queue_head++];
        fprintf(stdout, "%d ", head->data);
        if (head->left)
            queue[queue_end++] = head->left;
        if (head->right)
            queue[queue_end++] = head->right;
    }
}


int main() {

    struct node* root = NULL;

    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    levelOrder(root);
    return 0;
}
