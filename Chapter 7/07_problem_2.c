#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int arr[10];

    int num;
      printf("Enter the number for multiplication table: ");
      scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        arr[i] = num * (i + 1);
    }

      printf("Multiplication table of %d is below:\n", num);
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", arr[i]);
        if (i != 9) {
              printf(", ");
        } else {
              printf(" ]\n");
        }
    }
    return 0;
}