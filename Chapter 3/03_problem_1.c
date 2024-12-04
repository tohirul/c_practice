#include <stdio.h>

int main() {
    printf("Hello World!!!\n");
    // Your code here
    int a;
    printf("Enter your age: \n");
    scanf("%d", &a);

    switch (a) {
        case 18:
            /* code */
            printf("You are 18 years old \n");
            break;

        case 30:
            printf("You are 30 years old \n");

        default:
            printf("You are neither 18 nor 30 years old \n");
            break;
    }
    return 0;
}