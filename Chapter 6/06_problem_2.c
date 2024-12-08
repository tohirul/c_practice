#include <stdio.h>

void check_address(int* address);

void check_address(int* address) {
    address == NULL ? printf("The address is NULL \n") : printf("The address is %p \n", address);
    return;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int i;
      printf("Enter the the number: ");
      scanf("%d", &i);
      printf("The address of i is: %p\n", &i);
    int* ptr = &i;
    check_address(ptr);
    return 0;
}