#include <stdio.h>
#include <string.h>

char *slice_string(char str[], int start, int end);

char *slice_string(char str[], int start, int end) {
    int   i;
    char *str_starts = &str[start];
    char *str_ends   = &str[end];

    str      = str_starts;
    str[end] = '\0';

    return str;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int str_size;
      printf("Enter the size of the string: ");
      scanf("%d", &str_size);

    // Clear the input buffer after `scanf`
    while (getchar() != '\n')
        ;

    char str[str_size];

      printf("Enter a string: \n");
    if (fgets(str, sizeof(str), stdin)) {
        str[strcspn(str, "\n")] = '\0';
    }

    int start, end;
      printf("Enter the start and end of the string: ");
      scanf("%d %d", &start, &end);

    char *sliced_str = slice_string(str, start, end);
      printf("Sliced string: %s\n", sliced_str);

    return 0;
}