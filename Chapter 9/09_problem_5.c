
#include <stdio.h>

typedef struct Complex_number {
    int real;
    int imaginary;
} complex;

void display(complex num);

void display(complex num) {
      printf("The complex number is %d + %di\n", num.real, num.imaginary);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    complex num_complex[5];

    for (int i = 0; i < 5; i++) {
          printf("Enter the real part of the complex number: ");
          scanf("%d", &num_complex[i].real);
          printf("Enter the imaginary part of the complex number: ");
          scanf("%d", &num_complex[i].imaginary);
    }
    for (int i = 0; i < 5; i++) {
        display(num_complex[i]);
    }

    return 0;
}