#include <stdio.h>
#include <string.h>

// void str_copy(char[] target_str, char[] source);

void str_copy(char updated_str[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        updated_str[i] = source[i];
        i++;
    }
    updated_str[i] = '\0';
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int str_size;
      printf("Enter the size of the string: ");
      scanf("%d", &str_size);

    while (getchar() != '\n')
        ;
    char str[str_size];
      printf("Enter a string: \n");
    // scanf("%s", str);
    if (fgets(str, sizeof(str), stdin)) {
        str[strcspn(str, "\n")] = '\0';
    }

    char target_str[str_size];
    str_copy(target_str, str);
      printf("The copied string is: %s\n", target_str);

    return 0;
}