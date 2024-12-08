#include <stdio.h>

void variable_reference(int* ptr);

void variable_reference(int* ptr) {
      printf("The received variable reference is: %p\n", ptr);
      printf("The value of at the reference is: %d\n", *ptr);
    return;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int x;
      printf("Enter the the number: ");
      scanf("%d", &x);
      printf("The address of x is: %p\n", &x);
    variable_reference(&x);
    return 0;
}