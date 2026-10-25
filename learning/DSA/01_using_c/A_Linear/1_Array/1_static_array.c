#include <stdio.h>

int main(){

    int i, n;

    printf("Enter the elements for the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array Elements are ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}