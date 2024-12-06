#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int get_lines;
      printf("Enter the number of lines: ");
      scanf("%d", &get_lines);

    for (int i = 0; i < get_lines; i++) {

        for (int j = 0; j < (2 * i) + 1; j++) {
              printf("*");
        }
          printf("\n");
    }
    return 0;
}