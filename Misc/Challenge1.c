//Misc Challenge 1
/*Write a program to check if a given year is a leap year.
A year is a leap year if:
* It is divisible by 4 but not divisible by 100, or
* It is divisible by 400.*/

#include <stdio.h>

int main() {
    int year;
    
    printf("Enter year: ");
    scanf("%d", &year);

    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) {
        printf("%d is a Leap Year!\n", year);
    } else {
        printf("%d is Not a Leap Year!\n", year);
    }

    return 0;
}