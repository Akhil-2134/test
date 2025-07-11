#include <stdio.h>

void factorial() {
    int num, i;
    unsigned long long factorial = 1; // Use unsigned long long for large results

    // Input a number
    printf("\n\nEnter a positive integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("\nFactorial of %d = %ld\n", num, factorial);
    }
}
