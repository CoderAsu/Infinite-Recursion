/*
    Tail Recursion: 
    A recursive function is said to be tail recursive if the recursive call is the last thing done by the function. There is no need to keep record of the previous state.

    void fun(int n) {
        if(n == 0)
            return;
        else
            printf("%d ", n);

        return fun(n-1);
    }

    int main(){
        fun(3);
        return 0;
    }


    Non-tail Recursion:
    A recursive function is said to be non-tail recursive if the recursive call is not the last thing done by the function. After returning back, there is something left to evaluate.

    void fun(int n) {
        if(n == 0)
            return;

        fun(n - 1);

        printf("%d ", n);
    }
    
    int main(){
        fun(3);
        return 0;
    }
*/



// Non-tail Recursion

#include <stdio.h>

int fun(int n){
    if(n == 1)
        return 0;
    else   
        return 1 + fun(n/2);
}

int main(){

    printf("%d", fun(8));

    return 0;
}