#include <stdio.h>

int main() {
     printf("Hello World!!!\n");

    int age;
     printf("Enter your age: \n");
     scanf("%d", &age);
    // Your code here
    if (age >= 18) {
         printf("You are eligible to vote\n");
    } else
         printf("You are not eligible to vote\n");

    return 0;
}