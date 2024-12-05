#include <stdio.h>

int main() {
      printf("Hello World!!!\n");
    // Your code here
    int income;
      printf("Enter your income: \n");
      scanf("%d", &income);

    if (income < 250000) {
          printf("You have to pay no tax \n");
    } else if (income >= 250000 && income < 500000) {
        float tax = 0.05 * (income - 250000);
          printf("Which is %.2f in tax \n", tax);
          printf("You have to pay at least 5 percent tax \n");

    } else if (income >= 500000 && income < 1000000) {
        float tax = 0.05 * (500000 - 250000) + 0.1 * (income - 500000);
          printf("You have to pay at least 10 percent tax \n");
          printf("Which is %.2f in tax \n", tax);

    } else {
        float tax = 0.05 * (500000 - 250000) + 0.1 * (1000000 - 500000) + 0.2 * (income - 1000000);
          printf("Which is %.2f in tax \n", tax);
          printf("You have to pay at least 20 percent tax \n");
    }
    return 0;
}