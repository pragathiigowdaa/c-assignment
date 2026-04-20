#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // 1. Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // 2. Calculate the average
    // We use (a + b + c) / 3.0
    average = (num1 + num2 + num3) / 3;

    // 3. Display the result
    // %.2f limits the output to 2 decimal places
    printf("The average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);

    return 0;
}
