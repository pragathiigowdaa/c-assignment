#include <stdio.h>

int main() {
    float s1, s2, s3, total;
    float average;

    printf("Enter marks for three subjects:\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    average = total / 3.0;

    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    return 0;
}
