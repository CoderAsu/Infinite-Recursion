/*
    Consider the C function given below:

    int f(int j){
        static int i = 50;
        int k;
        if(i == j){
            printf("Something");
            k = f(i);
            return 0;
        }
        else return 0;
    }

    Ans: The function will exhaust the runtime stack or run into an infinite loop when j = 50.
*/