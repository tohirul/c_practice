#include <stdio.h>

int main() {
     printf("Hello World!!!\n\n");
    // Your code here
    int len, breadth;
     printf("Enter length: \n");
     scanf("%d", &len);

     printf("Enter breadth: \n");
     scanf("%d", &breadth);
    int area = len * breadth;
     printf("The area of the rectangle is %d\n", area);

    return 0;
}