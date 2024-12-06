#include <stdio.h>

int getInput(char message[]);
int factorial(int x);

int getInput(char message[]) {
    int num;
      printf("%s", message);
      scanf("%d", &num);
    return num;
}

int factorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    return x * factorial(x - 1);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int num = getInput("Enter a number: \n");

      printf("Factorial of %d is %d \n", num, factorial(num));
    return 0;
}