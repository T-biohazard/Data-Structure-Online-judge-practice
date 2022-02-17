

#include <stdio.h>

struct node{
int data;
struct node *left,*right;

};


/* 1
int getLeafCount(struct node* root)
{
  if(root == NULL)
    return 0;
  if(root->left == NULL && root->right==NULL)
    return 1;
  else
    return getLeafCount(root->left)+
           getLeafCount(root->right);
}
*/


/*  2
int count_leaves(struct node *root){
int c=0;
if(root){
    if(root->left==NULL && root->right==NULL){
        c++;
    }
else{

    if(root->left)
       count_leaves(root->left);
    if(root->right)
       count_leaves(root->right);

}
}
printf("%d",c);
}
*/

void PreOrder(struct node *root){
if(root==NULL)
    return;

printf("%d",root->data);
PreOrder(root->left);
PreOrder(root->right);
}

void inOrder(struct node *root){
if(root==NULL)
    return;

inOrder(root->left);
printf("%d",root->data);
inOrder(root->right);
}

void main(){

struct node *root,*p,*q;
int i,j,n,item;

printf("Enter the node limits:");
scanf("%d",&n);

for(i=0;i<n;i++){

p=(struct node*)malloc(sizeof(struct node));
scanf("%d",&item);
p->data=item;
p->left=NULL;
p->right=NULL;


if(i==0){
    root=p;
}
else{
q=root;
while(1){
if(p->data>q->data){
if(q->right==NULL){
    q->right=p;
    break;
}
else{
    q=q->right;
}
}
else{
if(q->left==NULL){
 q->left=p;
  break;
}
else{
    q=q->left;
}
}
}
}
}
printf("\n preorder:");
PreOrder(root);
printf("\n inorder:");
inOrder(root);

printf("\n leaves count:");
//getLeafCount(root);

}
