//Medium Challenge 4
/*C loops
Write a program to reverse a given non-negative integer.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) { printf("Give number is Negative\n"); return 1; }

    int res = 0;
    while(num > 0) {
        int digit = num % 10; //Extract last digit
        res = res * 10 + digit; //Append digit to reversed number.
        num /= 10; //remove the last digit
    }

    printf("Reversed Number: %d\n", res);

    return 0;
}