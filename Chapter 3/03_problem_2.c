#include <stdbool.h>
#include <stdio.h>

int main() {

    int   english, maths, science;
    float total;
      printf("Enter your marks in English: \n");
      scanf("%d", &english);
      printf("Enter your marks in Maths: \n");
      scanf("%d", &maths);
      printf("Enter your marks in Science: \n");
      scanf("%d", &science);
    total = (english + maths + science);
    if (english < 33 || maths < 33 || science < 33) {
          printf("You have failed due to haveing less marks individually \n");
    } else if (total < 40) {
          printf("You have failed due to having less average marks \n");
    } else {
          printf("You have passed \n");
    }
    return 0;
}