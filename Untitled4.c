#include <stdio.h>

int main() {
    float c, f;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    f = (9 * c / 5) + 32;

    printf("Fahrenheit = %.2f\n", f);
    return 0;
}
