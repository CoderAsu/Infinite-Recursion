#include <stdio.h>
#include <stdlib.h>

typedef struct sll {
    int val;
    struct sll* next;
} SLLNODE;

SLLNODE* createnode(void) {
    SLLNODE* newnd = (SLLNODE*)malloc(sizeof(SLLNODE));
    if (!newnd) exit(1);
    newnd->next = NULL;
    return newnd;
}

SLLNODE* insertbeg(SLLNODE* st, int elm) {
    SLLNODE* newnd = createnode();
    newnd->val = elm;
    newnd->next = st;
    return newnd;
}

void display(SLLNODE* st) {
    SLLNODE* temp = st;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

SLLNODE* insertend(SLLNODE* st, int elm) {
    SLLNODE* newnd = createnode();
    newnd->val = elm;
    if (st == NULL) return newnd;
    SLLNODE* q = st;
    while (q->next != NULL) q = q->next;
    q->next = newnd;
    return st;
}

SLLNODE* deletebeg(SLLNODE* st) {
    if (st == NULL) return NULL;
    SLLNODE* q = st;
    st = st->next;
    free(q);
    return st;
}

SLLNODE* deleteend(SLLNODE* st) {
    if (st == NULL) return NULL;
    if (st->next == NULL) {
        free(st);
        return NULL;
    }
    SLLNODE *p = NULL, *q = st;
    while (q->next != NULL) {
        p = q;
        q = q->next;
    }
    free(q);
    p->next = NULL;
    return st;
}

int searchval(SLLNODE* st, int selm) {
    SLLNODE* q = st;
    while (q != NULL) {
        if (q->val == selm) return 1;
        q = q->next;
    }
    return 0;
}

void display2(SLLNODE* st) {
    if (st != NULL) {
        display2(st->next);
        printf("%d ", st->val);
    }
}

typedef struct {
    SLLNODE* top;
} STACK;

STACK* createstk() {
    STACK* s = (STACK*)malloc(sizeof(STACK));
    s->top = NULL;
    return s;
}

int isfull(STACK* s) { return 0; }

int isempty(STACK* s) { return (s->top == NULL); }

void push(STACK* s, int val) { s->top = insertbeg(s->top, val); }

int pop(STACK* s) {
    if (isempty(s)) return -1;
    int x = s->top->val;
    s->top = deletebeg(s->top);
    return x;
}

int peek(STACK* s) {
    if (isempty(s)) return -1;
    return s->top->val;
}

int main() {
    STACK* s1;
    int elm, val, ch = 0;
    s1 = createstk();

    while (ch != 4) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Exit\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter value for push: ");
            scanf("%d", &elm);
            push(s1, elm);
            break;

        case 2:
            val = pop(s1);
            if (val != -1) printf("Popped value: %d\n", val);
            else printf("Stack underflow\n");
            break;

        case 3:
            val = peek(s1);
            if (val != -1) printf("Top value: %d\n", val);
            else printf("Stack empty\n");
            break;

        case 4:
            break;

        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}