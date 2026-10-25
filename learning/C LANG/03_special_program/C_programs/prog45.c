// Circular Queue

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 10

typedef struct Que
{
    int item[MAX];
    int front ,rear,count;
}
QUEUE;
QUEUE *CreateQue(void)
{
    QUEUE*q;
    q=(QUEUE*)malloc(sizeof(QUEUE));
    q->front=0;
    q->rear=-1;
    q->count=0;
    return q;
}
int isFull(QUEUE*q)
{
    if(q->count ==MAX)
    return 1;
    else
    return 0;
}
int isEmpty(QUEUE*q)
{
    if(q->count==0)
    return 1;
    else
    return 0;
}
void insert(QUEUE*q,int elm)
{
    q->rear=(q->rear+1)%MAX;
    q->count++;
    q->item[q->rear]=elm;
}
int delete(QUEUE*q)
{
    int val;
    val=q->item[q->front];
    q->count--;
    q->front=(q->front+1)%MAX;
    return  val;
}
int main()
{
    QUEUE *q1;
    int elm,val,ch;
    q1=CreateQue();
    while(ch!=3)
    {
        printf("\n 1. Insert \n 2. Delete \n 3. Exit");
        printf("\n enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(isFull(q1))
            {
                printf("\n QUEUE full error");
                break;
            }
            printf("\n enter value to insert: ");
            scanf("%d",&elm);
            insert(q1,elm);
            break;
            case 2:if(isEmpty(q1))
            {
                printf("\n QUEUE empty error");
                break;
            }
        
            val=delete(q1);
            printf("\n delete value = %d",val);
            break;
            case 3:exit(0);
        }
    }

    return 0;
}
