#include <stdio.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    char str[6];
      printf("Enter a string: \n");
    // scanf("%s", str);

    for (int i = 0; i < 5; i++) {
          scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5] = '\0';

      printf("You entered: %s \n", str);
    return 0;
}