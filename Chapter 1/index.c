#include <stdio.h>

int main() {
    // printf("Hello, World!\n");
    int  u_age;
    char u_name[5];

      printf("What is your name?\n");
      scanf("%s", u_name);
      printf("How old are you?\n");
      scanf("%d", &u_age);
      printf("Hello, %s\nYou are %d years old", u_name, u_age);

    return 0;
}
