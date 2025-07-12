#include <stdio.h>

void big() {
    int num1, num2;

    // Input two numbers
    printf("\n\nEnter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the numbers and print the biggest one
    if (num1 > num2) {
        printf("The bigger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The bigger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

   // return 0;
}

