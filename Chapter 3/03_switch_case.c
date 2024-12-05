#include <stdio.h>

int main() {
      printf("Hello World!!!\n");
    // Your code here
    int x;
      printf("Enter a number: \n");
      scanf("%d", &x);

    switch (x) {
        case 1:
              printf("One\n");
            break;
        case 2:
              printf("Two\n");
            break;
        case 3:
              printf("Three\n");
            break;
        default:
              printf("Invalid number\n");
    }
    return 0;
}