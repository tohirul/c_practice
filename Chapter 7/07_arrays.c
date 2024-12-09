#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // array of strings

    char user_names[5][5] = {"John", "Jane", "Mary", "Mark", "Bob"};
    // print the names
      printf("The names are: \n");
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%s", user_names[i]);
        if (i < 4) {
              printf(", ");
        }
        if (i == 4) {
              printf(" ] \n");
        }
    }

    int marks[5] = {10, 20, 30, 40, 50};
    // print the marks
      printf("The marks are: \n");
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
              printf("[ ");
        }
          printf("%d", marks[i]);
        if (i < 4) {
              printf(", ");
        }
        if (i == 4) {
              printf(" ] \n");
        }
    }

    return 0;
}