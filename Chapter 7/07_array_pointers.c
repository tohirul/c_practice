#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int hexstringToDecimal(const char *hexString);

int hexstringToDecimal(const char *hexString) {
    // Using strtol to convert the hexadecimal string to decimal
    return (int)strtol(hexString, NULL, 16);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int arr[5] = {1, 2, 3, 4, 5};

    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++) {
          printf("The value at index %d is: %d\n", i, arr[i]);
          printf("The address of the element in HEX is: %p\n", &arr[i]);

        char hex_addressbuffer[20];
        sprintf(hex_addressbuffer, "%p", ptr);
        int decimalAddress = hexstringToDecimal(hex_addressbuffer);
          printf("The address of the element in DEC is: %d\n", decimalAddress);

        uintptr_t decimalAddress_ptr = (uintptr_t)&arr[i];
        int      *valuePtr           = (int *)decimalAddress_ptr;
          printf("The value at index %d is: %d\n", i, *valuePtr);
          printf("\n");
        ptr++;
    }

    return 0;
}