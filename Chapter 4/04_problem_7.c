#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int num;
      printf("Enter a number: \n");
      scanf("%d", &num);
    int is_prime = 1, i = 2;
    switch (num) {
        case 0:
            is_prime = 0;
            break;
        case 1:
            is_prime = 0;
            break;
        case 2:
            break;

        default:
            while (i < num) {

                if (num % i == 0) {
                      printf("The number %d is divisible by %d\n", num, i);
                    is_prime = 0;
                    break;
                }
                i++;
            };

            break;
    }

    if (is_prime) {
          printf("%d is a prime number\n", num);
    } else {
          printf("%d is not a prime number\n", num);
    }
    return 0;
}