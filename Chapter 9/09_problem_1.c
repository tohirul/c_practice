#include <stdio.h>

struct vector {
    int i;
    int j;
};

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    struct vector v = {2, 6};
      printf("The value of vector is %di + %dj\n", v.i, v.j);

    return 0;
}