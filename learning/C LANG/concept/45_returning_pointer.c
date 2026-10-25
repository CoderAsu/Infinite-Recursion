#include <stdio.h>

int *findMid(int [], int);

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(a)/sizeof(a[0]);
    
    int *mid;
    mid = findMid(a, len);
    printf("%d", *mid);

    return 0;
}

int* findMid(int a[], int len){
    return &a[len/2];
}



// Never ever try to return the address of an automatic variable

/*
    For Example:

    int *fun(){
        int i = 10;
        return &i; // Here the address get destroyed when the function is poped out
    }

    int main(){
        int *p = fun();
        printf("%d", *p);
    }


*/