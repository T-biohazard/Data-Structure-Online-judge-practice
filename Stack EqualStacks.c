



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findmax(int h1, int h2, int h3){
        int max;
    if(h1 == h2 && h2 == h3)
        return h1;
    max = (h1 > h2) ? 1:2;
    if(max == 1)
        max =(h1 > h3) ? 1:3;
    else
    max = (h2 > h3) ? 2:3;
return max;
}
int balance(int *N1, int * N2, int *N3, int h1, int h2, int h3, int n1, int n2, int n3){
    int k1, k2, k3;
    k1 =k2=k3=0;
    int  max = findmax(h1,h2,  h3);
    while(!(h1 == h2 && h2 == h3)){
        max=findmax(h1, h2, h3);
        if(max == 1)
            h1 -= N1[k1++];
        else
          if(max == 2)
            h2 -= N2[k2++];
            else
                if(max == 3)
                   h3 -= N3[k3++];
             //   printf("1:%d, 2:%d, 3:%d\n",h1, h2, h3);
        if(h1 == 0 || h2 == 0 || h3 == 0)
            return 0;
    }
    return h2;
}
int main() {
    int n1,n2, n3, h1, h2, h3,i;
    h1=h2=h3=0;
    scanf("%d %d %d",&n1, &n2, &n3);
    int *N1=malloc(sizeof(int *)*n1);
    int *N2=malloc(sizeof(int *)*n2);
    int *N3=malloc(sizeof(int *)*n3);

    for(i=0; i<n1; i++){
       scanf("%d", &N1[i]);
       h1 += N1[i];
    }
    for(i=0; i<n2; i++){
       scanf("%d", &N2[i]);
       h2 += N2[i];
    }
    for(i=0; i<n3; i++){
       scanf("%d", &N3[i]);
       h3 += N3[i];
    }
    printf("%d\n", balance(N1, N2, N3, h1, h2, h3, n1, n2,n3));

    return 0;
}


/*
    #include<stdio.h>
    struct stack{
    int data;
    struct stack *next;

    } *top=NULL;

    struct stack2{
    int data2;
    struct stack *next2;

    } *top2=NULL;

    struct stack3{
    int data3;
    struct stack *next3;

    } *top3=NULL;



    void push(int element);
    void pop();
    void display();
    void exit();




    int main(){   //top 1 2 3    //ex-1
    int n,m,t,s,m1,m2;



           printf("length1:");
            scanf("%d",&n);
           for(int i=0;i<n;i++)
            {
            scanf("%d",&m);
            push(m);
            }

           printf("length2:");
            scanf("%d",&t);
           for(int i=0;i<t;i++){
            scanf("%d",&m1);
            push(m1);
           }

           printf("length1:");
            scanf("%d",&s);
           for(int i=0;i<s;i++){
             scanf("%d",&m);
            push(m2);}
    }



    void compSize(){

  int c3=0,c1=0,c2=0;
    void s1(){

    while(top){
        top=top->next;
        c++;
    }
    return c;

    }

    void s2(){

    while(top){
        top=top->next;
        c2++;
    }
    return c2;

    }

    void s3(){

    while(top){
        top=top->next;
        c3++;
    }
    return c3;
    }

if(c1>=c2&&c1>=c3)
return c1;

if(c2>=c1&&c2>=c3)
return c2;

if(c1>=c2&&c1>=c3)
return c1;

    }








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



*/
