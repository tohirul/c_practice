#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int n;
      printf("Enter a number: \n");
      scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        /* code */
          printf("The multiplication of the input number(%d) by %d  is %d \n", n, i, i * n);
    }

    return 0;
}