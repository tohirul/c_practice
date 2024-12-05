#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int num;
      printf("Enter a number: \n");
      scanf("%d", &num);

    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        int mul = num * i;
        sum += mul;
    }
      printf("The sum of the first 10 multiples of the given number is %d\n", sum);
    return 0;
}