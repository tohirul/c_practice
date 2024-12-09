#include <stdio.h>
#include <string.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    char user_name[100];
      printf("Enter your name: ");
    if (fgets(user_name, sizeof(user_name), stdin)) {
        user_name[strcspn(user_name, "\n")] = '\0';
    }
      printf("Hello! %s, let's count the letters in your name\n", user_name);

    int i = 0;
    while (user_name[i] != '\0') {
        i++;
    }
      printf("Your name has %d letters\n", i);
    return 0;
}