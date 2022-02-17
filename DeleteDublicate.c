
    #include<stdio.h>
    #include <stdlib.h>

    struct node{
        int data;
        struct node *next;
    }*head;

    void CreateNodeLists(int n);
    void DisplayLists();
    //void SearchNode(int x);
     void delduplicate();

    int main(){
        int n,x;
        printf("NUMBS OF node: ");
    scanf("%d",&n);
    CreateNodeLists(n);

    printf("\n After omitting duplicates:");
    delduplicate();
    DisplayLists();
    //printf("Get Node Value:");
    //scanf("%d",&x);
    //SearchNode(x);
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


    void delduplicate(){
    struct node *temp=head,*temp2,*temp3,*temp4;

    while(temp!=NULL && temp->next!=NULL){
    temp2=temp;

    while(temp2->next!=NULL){
    if(temp->data==temp->next){
    temp3=temp2->next;
    temp2->next=temp2->next->next;
    free(temp3);

    }
    else{
    temp2=temp2->next;
    }
    temp=temp->next;
    }
    }

//printf("%d\t",   );
//DisplayLists();

    }


    void DisplayLists(){
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
    }






