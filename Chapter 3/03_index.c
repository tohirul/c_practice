#include <stdio.h>

int main() {
    printf("Hello World!!!\n");
    // Your code here
    int userAge;
    printf("Enter your age: \n");
    scanf("%d", &userAge);

    if (userAge >= 18)
    {
        printf("You are old enough to vote!\n");
    }
    else
    {
        printf("You are not old enough to vote!\n");
    }
    return 0;
}