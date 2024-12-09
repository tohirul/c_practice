#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int arr[3][10];
    int mul[] = {2, 7, 9};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++) {
          printf("Multiplication table of %d is below:\n", mul[i]);
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                  printf("[ ");
            }
              printf("%d", arr[i][j]);
            if (j != 9) {
                  printf(", ");
            } else {
                  printf(" ]\n");
            }
        }
          printf("\n");
    }

    return 0;
}