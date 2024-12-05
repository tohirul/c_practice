#include <stdio.h>

int main() {
      printf("Hello World!!!\n");
    // Your code here
    int x;
      printf("Enter a number: \n");
      scanf("%d", &x);

    if (x == 0) {
          printf("The number is zero\n");
    } else if (x > 0) {
          printf("The number is positive\n");
    } else {
          printf("The number is negative\n");
    }

    return 0;
}