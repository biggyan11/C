#include <stdio.h>
int main()
 {
    int num;
printf("Enter a number: ");
    scanf("%d", &num);
    (num % 5 == 0) ? 
      printf("%d is divisible by 5\n", num) : 
      printf("%d is not divisible by 5\n", num);

    return 0;
}
