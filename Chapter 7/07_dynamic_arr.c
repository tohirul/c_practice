#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int i;
      printf("Enter the length of the array: ");
      scanf("%d", &i);
    int arr[i];
      printf("Enter the elements of the array: \n");
    for (int j = 0; j < i; j++) {
          scanf("%d", &arr[j]);
    }

      printf("The elements of the array are: ");
    for (int j = 0; j < i; j++) {
        if (j == 0) {
              printf("[ ");
        }
          printf("%d", arr[j]);
        if (j < i - 1) {
              printf(", ");
        }
        if (j == i - 1) {
              printf(" ]\n");
        }
    }
      printf("\n");

    return 0;
}