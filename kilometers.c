#include <stdio.h>

int main() {
    float km, meters, centimeters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000.0;
    centimeters = km * 100000.0;

    printf("%.2f kilometers is equal to:\n", km);
    printf("%.2f Meters\n", meters);
    printf("%.2f Centimeters\n", centimeters);

    return 0;
}
