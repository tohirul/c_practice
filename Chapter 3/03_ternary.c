#include <stdio.h>

int main() {
      printf("Hello World!!!\n");
    // Your code here
    int age;
      printf("Enter your age: \n");
      scanf("%d", &age);

      printf("You are %s\n", (age >= 18) ? "eligible to vote" : "not eligible to vote");
    return 0;
}