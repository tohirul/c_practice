#include <stdio.h>

typedef struct Employee {
    char   name[100];
    int    id;
    double salary;
    char   department[100];
    int    years_of_service;
} employee;

void get_employee_details(employee* ptr1);

void get_employee_details(employee* ptr1) {
      printf("Enter the name of the employee: ");
      scanf("%s", ptr1->name);

      printf("Enter the id of the employee: ");
      scanf("%d", &ptr1->id);

      printf("Enter the salary of the employee: ");
      scanf("%lf", &ptr1->salary);

      printf("Enter the department of the employee: ");
      scanf("%s", ptr1->department);

      printf("Enter the years of service of the employee: ");
      scanf("%d", &ptr1->years_of_service);
}

void print_employee_details(employee e1);

void print_employee_details(employee e1) {
      printf("The name of the employee is %s\n", e1.name);
      printf("The id of the employee is %d\n", e1.id);
      printf("The salary of the employee is %lf\n", e1.salary);
      printf("The department of the employee is %s\n", e1.department);
      printf("The years of service of the employee is %d\n", e1.years_of_service);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    employee  e1;
    employee* ptr1 = &e1;
    get_employee_details(ptr1);
    print_employee_details(e1);

    return 0;
}