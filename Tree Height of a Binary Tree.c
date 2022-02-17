
#include<stdio.h>

struct node{
int data;
struct node *left,*right;

};


int height(struct node *root){
int h=0,leftt,rightt;
if(root==NULL){
    return 0;
}

leftt=height(root->left);
 rightt=height(root->right);

if(leftt>rightt){

 h=1+leftt;
}
else{
     h=1+rightt;
}
return h;
}



struct node *create(){
    int x;
struct node *newNode=malloc(sizeof(struct node));

printf("Input data(nb: input -1 to stop):");
scanf("%d",&x);
if(x==-1){
    return 0;
}
newNode->data=x;

printf("Enter left data of %d \n",x);
newNode->left=create();


printf("Enter right data of %d \n",x);
newNode->right=create();

return newNode;
};


void main(){
struct main *root=NULL;
root=create();

printf("\n height:%d",height(root));//****

}


