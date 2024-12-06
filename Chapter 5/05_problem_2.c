#include <stdio.h>

float get_celsius(char message[]);
float temp_convert(float x);

float get_celsius(char message[]) {
    float num;
      printf("%s", message);
      scanf("%f", &num);
    return num;
}

float temp_convert(float x) {
    return ((x * 9) / 5) + 32;
}

int main() {
      printf("Lets code some amazing things 🚀!!!\n");
    // Your code here
    float temp_c = get_celsius("Enter the termperature in celsius: \n");
    float temp_f = temp_convert(temp_c);
      printf("The temperature in fahrenheit is %0.2f \n", temp_f);
    return 0;
}