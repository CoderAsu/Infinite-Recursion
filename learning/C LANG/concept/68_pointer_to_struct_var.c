/*
    Pointer to Structure Variable
*/

// Accessing members of structure using structure pointer

#include <stdio.h>
struct abc{
    int x;
    int y;
};

int main(){
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    printf("%d %d\n", ptr -> x, ptr -> y);
    // or
    printf("%d %d\n", (*ptr).x, (*ptr).y);
    // or
    printf("%d %d\n", (*&a).x, (*&a).y);
    // or
    printf("%d %d", a.x, a.y);
    return 0;
}