// Using Array Name as a pointer


/*
    
Fact: Name of an array can be used as a pointer to the first element of an array.
    
*/
#include <stdio.h>
#define N 5

int main(){
    int a[5];
    *a = 10;
    printf("%d\n", a[0]);

    *(a+1) = 20;
    printf("%d\n", a[1]);

    *(a+2) = 30;
    printf("%d\n", a[2]);



    int b[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for(p = b; p <= b + 4; p++){
        sum += *p;
    }
    printf("Sum is %d", sum);





    // Reversing a series of numbers using Pointers

    int a[N], *p;
    printf("Enter %d elements in the array: ", N);

    for(p = a; p <= a + N - 1; p++){    // p <= a + (N - 1) * 4
        scanf("%d", p);
    }

    printf("Elements in reverse order:\n");
    for(p = a + N - 1; p >= a; p--){
        printf("%d ", *p);
    }

    return 0;
}

/*
    From all these it is clear that,
    *(a + i) = a[i]
*/



/*
    It is true that we can use array names as pointers, but assigning a new address to them is not possible

    for example:

    int main(){

        int a[] = {11, 22, 36, 3, 55};
        int *p = a;
        printf("%p", a++);
        
        return 0;
    }

    Output:
    Error


    Let the base address of the array be 1000, 1004, 1008, 1012, 1016

    we are trying to assign address 1004 to array name 'a'
    Recall that name of the array indicates the base address of the array i.e. 1000. we can't change this.


    but instead of a++, we can write a+1
    Here, we are not trying to assign some new address to 'a'.

    We are simply accessing the address of the second element of the array.

    Understanding the difference between accessing and assigning.


    There is an alternative

        int main(){

        int a[] = {11, 22, 36, 3, 55};
        int *p = a;
        printf("%d", *(++p));
        
        return 0;
    }

    Output: 22

*/
