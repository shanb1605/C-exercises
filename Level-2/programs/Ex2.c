//Medium: Challenge 2
/* C Data-types
Write a program that converts a temperature given in Fahrenheit to Celsius and Kelvin. Use appropriate data types for each value.*/

#include <stdio.h>

int main() {
    float fahrenheit, celsius, kelvin;

    printf("Give Fahrenheit:");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit - 32) * 5/9; // Fahrenheit to Celsius
    kelvin = celsius + 273.15; // Fahrenheit to Kelvin

    printf("Fahrenheit to Celsius: %.2f\n",celsius);
    printf("Fahrenheit to Kelvin: %.2f\n", kelvin);
    
    return 0;
}