#include <stdio.h>

int mult_value(int* ptr);

int mult_value(int* ptr) {
    *ptr = *ptr * 10;
    return *ptr;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int x;
      printf("Enter the the number: ");
      scanf("%d", &x);
      printf("The address of x is: %p\n", &x);
    mult_value(&x);
      printf("The updated value of x is: %d\n", x);
    return 0;
}