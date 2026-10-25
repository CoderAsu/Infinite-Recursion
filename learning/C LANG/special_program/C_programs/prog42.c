// Integer Stack Implementation

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct stk{
    int item[MAX];
    int top;
} STACK;


STACK* createStack(void) {
    STACK* s = (STACK*)malloc(sizeof(STACK));
    s -> top = -1;
    return s;
}

int isEmpty(STACK *s) {
    if(s -> top == -1) 
        return 1;
    else
        return 0;
    
}

int isFull(STACK *s){
    if(s -> top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(STACK *s, int elm){
    s -> top++;
    s -> item[s -> top] = elm;
}

int pop(STACK *s){
    int x;
    x = s -> item[s -> top];
    s -> top--;
    return x;
}

int peek(STACK *s){
    int x;
    x = s -> item[s -> top];
    return x;
}

int main(){
    STACK *s1;

    int elm, val, ch;
    s1 = createStack();

    while(ch != 4){
        printf("\n 1. Push \n 2. Pop \n 3. Peek \n 4. Exit");

        printf("\n Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1: if(isFull(s1))
            {
                printf("\n Stack Full Error");
                break;
            }

            printf("\n Enter value to push: ");
            scanf("%d", &elm);

            push(s1, elm);
            break;



            case 2: if(isEmpty(s1)){
                printf("\n Stack Empty Error");
                break;
            }

            val = pop(s1);
            printf("\n Poped value = %d\n", val);
            break;



            case 3: if(isEmpty(s1)){
                printf("\n Stack Empty Error");
                break;
            }

            val = peek(s1);
            printf("\n Peeked value = %d", val);
            break;


            case 4: exit(0);
        }
    }

    return 0;
}