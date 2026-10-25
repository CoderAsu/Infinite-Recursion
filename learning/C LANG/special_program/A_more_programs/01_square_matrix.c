#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {        // rows
        for (j = 0; j < n; j++) {    // columns
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
