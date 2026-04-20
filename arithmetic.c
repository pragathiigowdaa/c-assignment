#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, prod, quotient;

    // Prompt user for input
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Display basic results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", diff);
    printf("Product: %.2f\n", prod);

    // Check for division by zero before calculating quotient
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Error! Division by zero is not allowed.\n");
    }

    return 0;
}
