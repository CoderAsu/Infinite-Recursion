// Linear Queue

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

typedef struct que{
    int item[MAX];
    int front, rear;
} QUEUE;

QUEUE* createQue(void){
    QUEUE* q = (QUEUE*)malloc(sizeof(QUEUE));
    q -> front = 0;
    q -> rear = -1;
    return q;
}

int isEmpty(QUEUE *q){
    if(q -> front == q -> rear + 1)
        return 1;
    else    
        return 0;
}


int isFull(QUEUE *q){
    if(q -> rear == MAX - 1)
        return 1;
    else
        return 0;
}

void insert(QUEUE *q, int elm){
    q -> rear++;
    q -> item[q -> rear] = elm;
}

int delete(QUEUE *q){
    int x;
    x = q -> item[q -> front];
    q -> front++;
    return x;
}


int main(){
    QUEUE *q1;
    int elm, val, ch;

    q1 = createQue();

        while (ch != 3){
            printf("\n 1. Insert \n 2. Delete \n 3. Exit");
            printf("\n Enter your choice: ");
            scanf("%d", &ch);

            switch (ch)
            {
                case 1: if(isFull(q1)){
                    printf("\n Queue Full Error!");
                    break;
                }
                printf("\n Enter value to insert: ");
                scanf("%d", &elm);
                insert(q1, elm);
                break;
                
                case 2: if(isEmpty(q1)){
                    printf("\n Queue Empty Error");
                    break;
                }
                val = delete(q1);
                printf("\n deleted value = %d", val);
                break;

                case 3: exit(0);
            }
        }

    return 0;
    
}