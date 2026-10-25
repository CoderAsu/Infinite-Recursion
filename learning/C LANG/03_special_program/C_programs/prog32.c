/*
    Write a program that accepts all elements of a double array and finds its maximum and next maximum elements without using sorting.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    double arr[n], max = -1e9, next = -1e9;
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (arr[i] > max) {
            next = max;
            max = arr[i];
        } else if (arr[i] > next && arr[i] != max) {
            next = arr[i];
        }
    }

    printf("Max: %.2lf\n", max);
    printf("Next Max: %.2lf\n", next);
    return 0;
}