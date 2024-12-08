#include <stdio.h>

void sum_two_numbers(int a, int b, int* result);
void avg_two_numbers(int a, int b, float* result);

void sum_two_numbers(int a, int b, int* result) {
    *result = a + b;
}

void avg_two_numbers(int a, int b, float* result) {
    *result = (a + b) / (float)2;
}

int main() {
      printf("Let's code some amazing things 🚀!!!\n");

    int m, n;
      printf("Enter the number m: ");
      scanf("%d", &m);
      printf("Enter the number n: ");
      scanf("%d", &n);

    int   sum_result;
    float avg_result;

    sum_two_numbers(m, n, &sum_result);
      printf("The value of sum is: %d\n", sum_result);
      printf("The address of sum is: %p\n", &sum_result);

    avg_two_numbers(m, n, &avg_result);
      printf("The value of avg is: %.2f\n", avg_result);
      printf("The address of avg is: %p\n", &avg_result);

    return 0;
}
