#include <stdio.h>

int main() {
    printf("Hello Tohir!!!\n");
    // Your code here
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);

    char grade;
    if (marks > 100) {
        printf("Invalid marks\n");
    } else if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Your grade is: %c\n", grade);
    return 0;
}