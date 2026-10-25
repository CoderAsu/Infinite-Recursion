// Infix to postfix conversion

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

typedef struct stk{
    char item[MAX];
    int top;
} STACK;

STACK* createStk(void){
    STACK* s;
    s = (STACK*)malloc(sizeof(STACK));
    s -> top = -1;
    return s;
}

int isFull(STACK* s){
    if(s -> top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty(STACK* s){
    if(s -> top == -1)
        return 1;
    else
        return 0;
}

void push(STACK* s, char ch){
    s -> top++;
    s -> item[s->top] = ch;
}

char pop(STACK* s){
    char ch;
    ch = s -> item[s -> top];
    s -> top--;
    return ch;
}

char peek(STACK* s){
    return s -> item[s -> top];
}

int isOperand(char c){
    if(isalnum(c))
        return 1;
    else 
        return 0;
}

int priority(char c){
    if(c == '(')
        return 0;
    else if(c == '+' || c == '-')
        return 1;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '^')
        return 3;
}


int main(){

    char inexpr[30], poexpr[30], sy, op;
    int i = 0, p = 0;
    
    STACK* s;

    s = createStk();

    printf("Enter a infix expression: \n");
    scanf("%s", inexpr);

    sy = inexpr[i++];

    while(sy != '\0'){
        if(isOperand(sy))
            poexpr[p++] = sy;

        else if(sy == '(')
            push(s, sy);

        else if(sy == ')'){
            op = pop(s);

            while(op != '('){
                poexpr[p++] = op;
                op = pop(s);
            }
        }

        else{
            if(isEmpty(s))
                push(s, sy);
            else{
                while(priority(peek(s)) >= priority(sy)){
                    op = pop(s);
                    poexpr[p++] = op;
                }
                push(s, sy);
            }
        }

        sy = inexpr[i++];

    }

    while(!isEmpty(s)){
        op = pop(s);
        poexpr[p++] = op;
    }

    poexpr[p] = '\0';
    printf("The postfix expression is: \n%s\n", poexpr);

    return 0;
}