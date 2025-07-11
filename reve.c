#include <stdio.h>

void reverse() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("\n\nEnter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;           // Get last digit
        reversed = reversed * 10 + remainder; // Append it to reversed number
        num /= 10;                      // Remove last digit from num
    }

    printf("\nReversed number is: %d\n", reversed);

   // return 0;
}

