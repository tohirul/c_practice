#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int x;
      printf("Enter the the number: ");
      scanf("%d", &x);

      printf("The address of x is: %p\n", &x);

    int* ptr_x = &x;  // pointer that points to the address of x
      printf("The value of ptr_x is: %p\n", ptr_x);
    return 0;
}