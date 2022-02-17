#include<stdio.h>
#include <stdlib.h>


#include<stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
}*head;

struct node2{
    int data2;
    struct node *next2;
}*head2;


void CreateNodeLists(int n);
void CreateNodeListstwo(int m);
//void DisplayLists();
void comparing();

int main(){
    int n,g,m;
printf("NUMBS OF node: ");
scanf("%d",&n);
CreateNodeLists(n);
//DisplayLists();

printf("NUMBS OF node two: ");
scanf("%d",&m);
CreateNodeListstwo(m);
//DisplayLists();

printf("\n after compare ");
 comparing();
//DisplayLists();


return 0;
}

void CreateNodeLists(int n){

struct node *fnnode,*tmp;
int num,i;

head=(struct node*)malloc(sizeof(struct node));//7 no line


printf("input data for node1: ");
scanf("%d",&num);

head -> data=num;
head -> next=NULL;
tmp=head;//both r pointers, head r address


for(i=2;i<=n;i++){
printf("input data for node%d: ",i);
fnnode=(struct node*)malloc(sizeof(struct node));//4 no line r struct tai kaj korbe
if(fnnode==NULL){
    printf("not allocated :Null");
}
else{

scanf("%d",&num);
fnnode -> data=num;
fnnode -> next=NULL;

tmp->next=fnnode;//tmp r next means head er next(fnnode r address)
tmp=fnnode;
}

}}


void CreateNodeListstwo(int m){

struct node2 *fnnode,*tmp;
int num,i;

head2=(struct node*)malloc(sizeof(struct node));//7 no line


printf("input data for node1: ");
scanf("%d",&num);

head2 -> data2=num;
head2 -> next2=NULL;
tmp=head2;//both r pointers, head r address


for(i=2;i<=m;i++){
printf("input data for node%d: ",i);
fnnode=(struct node*)malloc(sizeof(struct node));//4 no line r struct tai kaj korbe
if(fnnode==NULL){
    printf("not allocated :Null");
}
else{

scanf("%d",&num);
fnnode -> data2=num;
fnnode -> next2=NULL;

tmp->next2=fnnode;//tmp r next means head er next(fnnode r address)
tmp=fnnode;
}

}}


void comparing(){
struct node *n1=head;
struct node2 *n2=head2;

int tmp=1,tmp2=1;


while(n1!=NULL & n2!=NULL){
if(n1->data!=n2->data2){
printf("0");
break;
 n1=n1->next;
n2=n2->next2;

}

else{
       printf("1");
       break;
}}
}

/*void DisplayLists(){
struct node *tmp;
if(head == NULL){
    printf("empty");
}
else{
    tmp=head;
    while(tmp!=NULL){
            printf("%d\t",tmp ->data);//tmp r dada print
      tmp=tmp->next;
    }
}
}*/






