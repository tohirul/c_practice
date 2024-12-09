#include <stdio.h>

void reverse(int arr[], int n);

void reverse(int arr[], int n) {

    for (int i = 0; i < n / 2; i++) {
        int temp       = arr[i];
        arr[i]         = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int numArray[6] = {1, 2, 3, 4, 5, 6};
    int arrEnd      = 6;
      printf("The generic Array is: \n");
    for (int i = 0; i < arrEnd; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", numArray[i]);
        if (i != 5) {
              printf(", ");
        } else {
              printf(" ]\n");
        }
    }
    reverse(numArray, arrEnd);

    for (int i = 0; i < arrEnd; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", numArray[i]);
        if (i != 5) {
              printf(", ");
        } else {
              printf(" ]\n");
        }
    }

    return 0;
}