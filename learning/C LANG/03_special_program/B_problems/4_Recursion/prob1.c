/*
    Consider the following recursive function:

    void get(int n){
        if(n < 1) return;
        get(n - 1);
        get(n - 3);
        printf("%d", n);
    }

    If get(6) function is being called in main() then how many times will the get() function be invoked before returning to the main()?

    Ans: 25 calls

*/