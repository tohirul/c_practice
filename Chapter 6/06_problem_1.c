#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int x;
      printf("Enter the the number: ");
      scanf("%d", &x);

      printf("The address of x is: %p\n", &x);

    int* ptr_x = &x;                                // pointer that points to the address of x
      printf("The value at ptr_x is: %u\n", *ptr_x);  // dereferencing the pointer to get the value
    return 0;
}