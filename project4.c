#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: "); 

    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0; 

    printf("In Celsius: %.1f\n", celsius);

    return 0;
}
