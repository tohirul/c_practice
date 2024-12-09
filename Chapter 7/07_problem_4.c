#include <stdio.h>

int count_positive(int arr[], int n);

int count_positive(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    // write an array of positive and negative integers
    int numArray[10]  = {1, 2, 3, 4, -6, -1, -2, -3, -4, -5};
    int numArraySize  = 10;
    int positiveCount = count_positive(numArray, numArraySize);
      printf("The number of positive integers in the array is: %d\n", positiveCount);
    return 0;
}