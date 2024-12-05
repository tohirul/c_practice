#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int age;
      printf("Enter your age: \n");
      scanf("%d", &age);

    while (age >= 18) {
          printf("You are eligible to vote\n");
        age--;
    }

    while (age < 18) {
          printf("You are not eligible to vote\n");
        age++;
    }
    return 0;
}