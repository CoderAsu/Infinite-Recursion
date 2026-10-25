#include <stdio.h>
#include <stdlib.h>

int *stack;
int size;
int top = -1;

int isEmpty(){
    return top == -1;
}

int isFull(){
    return top == size - 1;
}

void push(int value){
    if(isFull()){
        printf("Stack Overflow!\n");
        return;
    }

    top++;
    stack[top] = value;

    printf("%d pushed into the stack\n", value);
}

void pop(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }

    printf("%d popped from stack\n", stack[top]);
    top--;
}

void peek(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }

    printf("Top element is %d\n", stack[top]);
}

void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements:\n\n");

    for(int i = top; i >= 0; i--){
        printf("|   %d   |\n", stack[i]);
        printf("----------\n");
    }

    printf("\n");
}

int main(){

    int choice, value;

    printf("Enter the size of the stack: ");
    scanf("%d", &size);

    // Allocate stack according to user's input
    stack = malloc(size * sizeof(int));

    if(stack == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    while(1){

        printf("\n========= Stack Operations =========\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check if empty\n");
        printf("6. Check if full\n");
        printf("7. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);

                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if(isEmpty()){
                    printf("Stack is empty!\n");
                }
                else{
                    printf("Stack is not empty\n");
                }
                break;

            case 6:
                if(isFull()){
                    printf("Stack is full!\n");
                }
                else{
                    printf("Stack is not full\n");
                }
                break;

            case 7:
                printf("Exiting Program...\n\n");
                free(stack);
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}