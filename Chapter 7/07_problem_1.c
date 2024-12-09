#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int  numArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *numArrayPtr  = numArray;

      printf("The address of the first element of  numArray is: %p\n", numArrayPtr);
      printf("The address of the second element of  numAarray is: %p\n", (numArrayPtr + 1));
      printf("The address of the third element of  numAarray is: %p\n", (numArrayPtr + 2));

    int el_third = *(numArrayPtr + 2);
      printf("The third element of numArray is: %d\n", el_third);

    if (el_third == numArray[2]) {
          printf("Verified that the third element is the same as the one we got using the pointer\n");
    } else {
          printf("Failed to get the third element by the address\n");
    }

    return 0;
}