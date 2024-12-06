#include <stdio.h>
int getNumber();
int natural_sum(int x, int sum);

int getNumber() {
    int num;
      printf("Enter the trigger number: ");
      scanf("%d", &num);
    return num;
}

int natural_sum(int x, int sum) {
    if (x < 1) {
        return sum;
    }
    return natural_sum(x - 1, sum + x);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int num = getNumber();
    int sum = natural_sum(num, 0);
      printf("The sum of natural numbers up to %d is %d \n", num, sum);
    return 0;
}