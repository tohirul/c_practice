#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int age;
      printf("Enter your age: \n");
      scanf("%d", &age);
    // do while loop
    do {
          printf("You are eligible to vote because you are %d years old. \n", age);
        age--;
    } while (age >= 18);
    return 0;
}