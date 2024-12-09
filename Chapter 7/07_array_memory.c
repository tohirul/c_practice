#include <stdio.h>
#include <stdlib.h>

int hexToDecimal(const char *hexString);

int hexToDecimal(const char *hexString) {
    // Using strtol to convert the hexadecimal string to decimal
    return (int)strtol(hexString, NULL, 16);
}

int main() {
      printf("Let's code some amazing things 🚀!!!\n");

    // Declare an array
    int arr[5];
      printf("Enter the elements of the array: \n");
    for (int i = 0; i < 5; i++) {
          scanf("%d", &arr[i]);
    }

    // Print the array
      printf("The array contains: \n");
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", arr[i]);
        if (i < 4) {
              printf(", ");
        }
        if (i == 4) {
              printf(" ]\n");
        }
    }

    // Print memory address of each element in the array
      printf("The memory address of each element in the array is: \n");
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
              printf("[ ");
        }

          printf("%p", (void *)&arr[i]);

        if (i < 4) {
              printf(", ");
        }
        if (i == 4) {
              printf(" ]\n");
        }
    }

    // Convert memory address to decimal and print it
      printf("The Decimal values of the memory addresses are: \n");
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
              printf("[ ");
        }

        char addressBuffer[20];
        sprintf(addressBuffer, "%p", (void *)&arr[i]);
        int decimalValue = hexToDecimal(addressBuffer);
          printf("%d", decimalValue);

        if (i < 4) {
              printf(", ");
        }
        if (i == 4) {
              printf(" ]\n");
        }
    }

    return 0;
}
