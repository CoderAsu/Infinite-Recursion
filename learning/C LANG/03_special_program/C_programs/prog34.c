// WAP to check whether the program is identity or not.

#include <stdio.h>
int main(){
    int A[10][10];
    int n, i, j, isIdentity = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j && A[i][j] != 1){
                isIdentity = 0;
                break;
            }
            else if(i != j && A[i][j] != 0){
                isIdentity = 0;
                break;
            }
        }
        if(!isIdentity)
            break;
    }

    if(isIdentity == 1)
        printf("\nThe given matrix is an Identity Matrix.\n");
    else
        printf("\nThe given matrix is not an Identity Matrix.\n");

    return 0;
}