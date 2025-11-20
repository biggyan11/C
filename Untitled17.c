#include <stdio.h>
int main() {
    int num;
printf("Enter a number: ");
    scanf("%d", &num);
if (num % 5 == 0 && num % 8 == 0) {
        printf("%d is divisible by both 5 and 8\n", num);
    } else {
        printf("%d is NOT divisible by both 5 and 8\n", num);
    }
 return 0;
}

