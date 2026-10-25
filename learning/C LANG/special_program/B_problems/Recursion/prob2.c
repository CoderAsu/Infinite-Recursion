/*
    Determine, how many number of times the star will be printed on the screen:

    void fun1(int n){
        int i = 0;
        if(n > 1)
            fun1(n - 1);
        for(i = 0; i < n; i++)
            printf(" * ");
    }

    Ans: n(n+1)/2
*/