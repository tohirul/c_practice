#include <stdio.h>

struct Person {
    char  name[50];
    int   age;
    float salary;
};

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    struct Person person1;
      printf("Enter your name: ");
      scanf("%s", person1.name);
      printf("Enter your age: ");
      scanf("%d", &person1.age);
      printf("Enter your salary: ");
      scanf("%f", &person1.salary);

      printf("Name: %s\n", person1.name);
      printf("Age: %d\n", person1.age);
      printf("Salary: %.2f\n", person1.salary);

    return 0;
}