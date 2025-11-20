#include <stdio.h>
int main() {
    float a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is: %.2f\n", largest);

    return 0;
}

