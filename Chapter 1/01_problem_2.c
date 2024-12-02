#include <stdio.h>

int main() {
    printf("Hello World!!!\n");
    // Your code here
    int radius;
    printf("Enter the length of circle radius: \n");
    scanf("%d", &radius);

    float area = 3.1416 * radius * radius;
    printf("\nThe area of the circle is: %f\n", area);
    return 0;
}