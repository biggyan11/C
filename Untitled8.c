#include <stdio.h>

int main() {
    float l,b, area;

    printf("Enter side length: ");
    scanf("%f %f", &l,&b);

    area = l * b;

    printf("Area = %f\n", area);
    return 0;
}

