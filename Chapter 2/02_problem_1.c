#include <stdio.h>

int main() {
    // Your code here
    int   a, b;
    float x;
      printf("Enter a and b: \n");
      scanf("%d %d", &a, &b);

      printf("Enter x: \n");
      scanf("%f", &x);

      printf("Result is: %f\n", (x / a) - b);
      printf("Type of result is float \n");

    return 0;
}