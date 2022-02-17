
#include<stdio.h>
struct stack{
int data;
struct stack *next;

} *top=NULL;

void push(int element);
void pop();
void display();
void exit();

int main(){   //top 1 2 3    //ex-1
int n,m;
while(1){
printf("\nChoose Operation\n1.push\n2.pop\n3.display\n4.exit\n");
scanf("%d",&n);

if(n==1){
       printf("PUSH :");
        scanf("%d",&m);
    push(m);
}

if(n==2){
    pop();
}

if(n==3){
    display();
}
if(n==4){
    exit();
}

}}

void push(int element){      //ex-2

struct stack *newNode;
newNode= malloc(sizeof(newNode));

if(newNode==NULL){
    printf("stack overflow");
    exit();
}
else{
    newNode->data=element;
    newNode->next=NULL;

    newNode->next=top;
    top=newNode;
}
}

void pop(){            //ex-3
struct stack *temp;
int k;
temp=top;
k=temp->data;
top=top->next;
free(temp);
}


void display(){
struct stack *tmp;
tmp=top;
printf("\nThe elements are:\n");
while (tmp){ //temp!=0
    printf("here we got: \n%d\n",tmp->data);
    tmp=tmp->next;
}
}
