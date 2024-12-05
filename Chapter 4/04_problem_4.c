#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int sum = 0;
    for (int i; i <= 10; i++) {
        sum += i;
          printf("The sum of the first 10 natural numbers is %d\n", sum);
    }

    int j = 0, dosum = 0;
    do {
        dosum += j;
        j++;
          printf("The sum of the first 10 natural numbers is %d\n", dosum);
    } while (j <= 10);
    return 0;
}