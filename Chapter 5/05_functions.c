#include <stdio.h>

int   addition(int a, int b);
int   substraction(int a, int b);
int   multiplication(int a, int b);
float division(int a, int b);

int addition(int a, int b) {
    return a + b;
}

int substraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    return (float)a / b;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here

    int x, y;
      printf("Enter two numbers: ");
      scanf("%d %d", &x, &y);

      printf("Addition: %d\n", addition(x, y));
      printf("Substraction: %d\n", substraction(x, y));
      printf("Multiplication: %d\n", multiplication(x, y));
      printf("Division: %0.2f\n", division(x, y));

    return 0;
}