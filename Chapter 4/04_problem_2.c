#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int i;
      printf("Enter your number: \n");
      scanf("%d", &i);
    // x is non zero
    for (int x = 10; x; x--) {
          printf("%d x %d = %d\n", i, x, i * x);
    }
    return 0;
}