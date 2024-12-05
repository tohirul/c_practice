#include <stdio.h>

int main() {

    int   x, y, z;
    float k;
      printf("Enter the value of x: \n");
      scanf("%d", &x);
      printf("Enter the value of y: \n");
      scanf("%d", &y);
      printf("Enter the value of z: \n");
      scanf("%d", &z);
      printf("Enter the value of k: \n");
      scanf("%f", &k);

    float result = 3 * (float)x / y - z + k;
      printf("The result is %f\n", result);
    return 0;
}