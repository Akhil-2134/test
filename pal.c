#include <stdio.h>

void palindrome() {
    int num, reversed = 0, remainder, original;

    // Input a number
    printf("\n\nEnter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

   // return 0;
}

