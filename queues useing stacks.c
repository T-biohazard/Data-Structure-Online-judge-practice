 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void enqueue(int);
void dequeue();
void print_ele();

int front=-1,rear=-1, size = 1000000;
int a[1000000];

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, choice;
    scanf("%d",&q);
    while(q-->0){
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            int ele;
            scanf("%d",&ele);
            enqueue(ele);
        }break;
        case 2:{
            dequeue();
        }break;
        case 3:{
            print_ele();
        }break;
    }
    }

    return 0;
}

void enqueue(int x){
    if(front==-1 && rear==-1){
        front++;
        rear++;
        a[front]=x;
    }
    else if((front==0 && rear==size-1) || front==rear+1)
        printf("Queue full \n");
    else if(rear==size-1)
        rear=-1;
    else
        a[++rear]=x;
}

void dequeue(){
    if(front==rear==-1)
        printf("empty queue \n");
    else if(front==size)
        front=0;
    else if(front==rear){
        front=-1;
        rear=-1;
    }

    else
        front++;

}

void print_ele(){
    if(front==rear==-1)
        printf("Queue empty \n");
    else
        printf("%d \n",a[front]);
}

