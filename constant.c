#include <stdio.h>

#define PI 3.14159
#define PLATFORM "Windows"

int main() {
    
    const int MAX_SCORE = 100;
    const char GRADE = 'A';
    float radius = 5.0; 
    float area = PI * radius * radius;

    printf("Platform: %s\n", PLATFORM);
    printf("Value of PI: %.5f\n", PI);
    printf("Max Score allowed: %d\n", MAX_SCORE);
    printf("Required Grade: %c\n", GRADE);
    printf("Calculated Area: %.2f\n", area);

    return 0;
}
