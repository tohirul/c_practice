#include <stdio.h>

typedef struct vector {
    int i;
    int j;
} vec;

vec vector_sum(vec v1, vec v2);

vec vector_sum(vec v1, vec v2) {

    vec v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    vec v1 = {2, 6};
    vec v2 = {3, 8};

    vec v3 = vector_sum(v1, v2);
      printf("The value of vector is %di + %dj\n", v3.i, v3.j);

    return 0;
}