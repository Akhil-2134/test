#include <stdio.h>

void fibonacci() {
    int n, first = 0, second = 1, next;

    // Input number of terms
    printf("\n\nEnter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

   // return 0;
}

