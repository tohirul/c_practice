#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int multiplier;
      printf("Enter the number of multipliers you want: ");
      scanf("%d", &multiplier);

    do {
        if (multiplier > 0)
            break;
          printf("You have entered 0 multipliers. Please enter at least 1 multiplier.\n");
          printf("Enter the number of multipliers you want: ");
          scanf("%d", &multiplier);
    } while (multiplier <= 0);
    int multiplierArr[multiplier];

    for (int i = 0; i < multiplier; i++) {
          printf("Enter multiplier No. %d: ", i + 1);
          scanf("%d", &multiplierArr[i]);
    }

      printf("The multipliers are: ");
    for (int i = 0; i < multiplier; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", multiplierArr[i]);
        if (i != multiplier - 1) {
              printf(", ");
        } else {
              printf(" ]\n");
        }
    }
      printf("\n");

    int multArr[multiplier][10];

    for (int i = 0; i < multiplier; i++) {
        for (int j = 0; j < 10; j++) {
            multArr[i][j] = multiplierArr[i] * (j + 1);
        }
    }

      printf("Your multiplication tables are below \n");

    for (int i = 0; i < multiplier; i++) {
          printf("Multiplication table of %d: \n", multiplierArr[i]);
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                  printf("[ ");
            }
              printf("%d", multArr[i][j]);
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