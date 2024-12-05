#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int num;
      printf("Enter a number: \n");
      scanf("%d", &num);

    int product = 1;
    // ! for loop
    // for (int i = 1; i <= num; i++) {
    //     product *= i;
    // }

    // ! while loop
    // while (num > 0) {
    //     product *= num;
    //     num--;
    // }

    // ! do while loop
    do {
        product *= num;
        num--;
    } while (num > 0);
      printf("The factorial of the given number is %d\n", product);
    return 0;
}