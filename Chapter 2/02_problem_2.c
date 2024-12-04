#include <stdio.h>

int main() {
    // Your code here
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    int a = 97;

    int div = x % a;
    if (div == 0) {
        printf("The number is divisible by 97\n");
    } else {
        printf("The number is not divisible by 97\n");
    }
    return 0;
}