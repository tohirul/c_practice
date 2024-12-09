#include <stdio.h>
#include <string.h>

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    char user_name[50];
      printf("Enter your name: ");
    if (fgets(user_name, sizeof(user_name), stdin)) {
        user_name[strcspn(user_name, "\n")] = '\0';
    }
      printf("Hello %s\n", user_name);
      printf("Length of your name: %lu\n", strlen(user_name));
    return 0;
}