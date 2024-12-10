#include <stdio.h>
#include <stdlib.h>

enum Gender { MALE, FEMALE, OTHER };

// Define the User structure
struct User {
    char        name[50];
    char        email[50];
    int         age;
    enum Gender gender;
    float       balance;
};

// Function prototypes
void createUser(struct User* user);
void printUser(struct User user);

// Function to create a user
void createUser(struct User* user) {
      printf("Enter your name: ");
      scanf(" %[^\n]s", user->name);  // Use space to ignore leftover newline

      printf("Enter your email: ");
      scanf(" %[^\n]s", user->email);

      printf("Enter your age: ");
      scanf("%d", &user->age);

      printf("Enter your gender (0 for Male, 1 for Female, 2 for Other): ");
    int gender;
      scanf("%d", &gender);
    user->gender = (enum Gender)gender;

      printf("Enter your balance: ");
      scanf("%f", &user->balance);
}

// Function to print user details
void printUser(struct User user) {
      printf("\n--- User Details ---\n");
      printf("Name: %s\n", user.name);
      printf("Email: %s\n", user.email);
      printf("Age: %d\n", user.age);

      printf("Gender: ");
    switch (user.gender) {
        case MALE:
              printf("Male\n");
            break;
        case FEMALE:
              printf("Female\n");
            break;
        case OTHER:
              printf("Other\n");
            break;
        default:
              printf("Unknown\n");
    }

      printf("Balance: %.2f\n", user.balance);
}

int main() {
      printf("Let's code some amazing things 🚀!!!\n");

    // Allocate memory for one user
    struct User* user = (struct User*)malloc(sizeof(struct User));
    if (user == NULL) {
          printf("Memory allocation failed!\n");
        return 1;
    }

    // Create and display user
    createUser(user);
    printUser(*user);

    // Free allocated memory
    free(user);

    return 0;
}
