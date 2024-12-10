
#include <stdio.h>

typedef struct Complex_number {
    int real;
    int imaginary;
} complex;

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    complex num = {3, 4};

      printf("The complex number is %d + %di\n", num.real, num.imaginary);

    return 0;
}