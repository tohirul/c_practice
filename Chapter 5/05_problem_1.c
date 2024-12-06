#include <stdio.h>

int   getInput(char message[]);
float countAverage(int a, int b, int c);

int getInput(char message[]) {
    int num;
      printf("%s", message);
      scanf("%d", &num);
    return num;
}

float countAverage(int a, int b, int c) {
      printf("Counting the average of the numbers you entered \n");
    return ((float)a + b + c) / 3;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int x = getInput("Enter the first number: \n");
    int y = getInput("Enter the second number: \n");
    int z = getInput("Enter the third number: \n");

    float average = countAverage(x, y, z);
      printf("The average count is %0.2f \n", average);
    return 0;
}