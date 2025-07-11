#include <stdio.h>

void biggest() {
    int num1, num2, num3;

    // Input three numbers
    printf("\n\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers
    if (num1 >= num2 && num1 >= num3) {
        printf("The biggest number is: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The biggest number is: %d\n", num2);
    } else {
        printf("\nThe biggest number is: %d\n", num3);
    }

   // return 0;
}

