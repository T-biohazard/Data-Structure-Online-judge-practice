
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

struct node {

    int data;
    struct node *left;
    struct node *right;

};

*/
typedef struct node node;

void traverse(int *topL, int *topR, int lpos, int rpos, node *n){
  if(!n) return;
  if(lpos >= 0 && topL[lpos] == 0) topL[lpos] = n->data;
  traverse(topL, topR, lpos + 1, rpos - 1, n->left);
  traverse(topL, topR, lpos - 1, rpos + 1, n->right);
  if (rpos >= 0) topR[rpos] = n->data;
}

void topView(struct node *root) {
  //set up answer arrays
  if(!root) return;
  int left[501];
  int right[501];
  memset(left, 0, sizeof(int) * 501);
  memset(right, 0, sizeof(int) * 501);

  //traverse the tree
  traverse(left, right, -1, 0, root);

  //print the answer
  int i = 0;
  while(left[i] > 0) i++;
  for(i--; i >= 0; i--) printf("%d ", left[i]);
  for(i = 0; right[i] > 0; i++) printf("%d ", right[i]);
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

    topView(root);
    return 0;
}
