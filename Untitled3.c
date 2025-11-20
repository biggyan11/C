#include <stdio.h>

int main() {
    float feet, meter;

    printf("Enter value in feet: ");
    scanf("%f", &feet);

    meter = feet / 3.2808399;

    printf("Meter = %.4f\n", meter);
    return 0;
}
