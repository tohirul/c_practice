#include <stdio.h>

int main() {
      printf("Hello World!!!\n");
    // Your code here
    float c, f;
      printf("Enter the temperature in Celsius: \n");
      scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32;
      printf("The temperature in Fahrenheit is: %f\n", f);
    return 0;
}