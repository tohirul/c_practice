#include <stdio.h>

int get_position();
int count_fibonacci(int x);

int get_position() {
    int position;
      printf("Enter the position of the player: ");
      scanf("%d", &position);
    return position;
}

int count_fibonacci(int x) {
    if (x == 1 || x == 2) {
        return x - 1;
    }
    return count_fibonacci(x - 1) + count_fibonacci(x - 2);
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    int position           = get_position();
    int fibonacci_position = count_fibonacci(position);
      printf("The player's position in the Fibonacci sequence is: %d\n", fibonacci_position);
    return 0;
}