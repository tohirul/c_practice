#include <stdio.h>
float get_mass();
float count_ga(float m);

float get_mass() {
    float mass;
      printf("Enter the mass of your body: ");
      scanf("%f", &mass);
    return mass;
}

float count_ga(float m) {
      printf("Calculating the force of attraction!!! /n");
    return 9.81 * m;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    float mass       = get_mass();
    float attraction = count_ga(mass);
      printf("Your body's force of attraction is %0.2f N \n", attraction);
    return 0;
}