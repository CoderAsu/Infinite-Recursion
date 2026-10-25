#include <stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);

    while(n != 0){
        if(n < 0)
        break;

        printf("Enter a number\n");
        scanf("%d", &n);
    }



    int i, m = 2;
    for(i = 1; i <= 20; i++){
        if(i == m){
            m += 2;
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}