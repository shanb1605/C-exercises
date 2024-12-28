//Easy Challenge 3
/* C conditional statements
Write a program that takes an integer input from the user and determines if it is even or odd using if-else.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}