//Easy Challenge 4
/* C loops
Write a program to calculate the sum of the first 𝑁 natural numbers.
1. Input: A positive integer 𝑁
2. Output: The sum of the first 𝑁 natural numbers.*/

#include <stdio.h>

int main() {
    int pos_int, sum = 0;

    printf("Enter a Positive integer N: ");
    scanf("%d", &pos_int);

    if(pos_int < 0) { printf("Error: Negative number\n"); return 1; }

    for (int i = 1; i <= pos_int; i++) {
        sum += i;
    }

    printf("Sum of the %d natural number is %d\n", pos_int, sum );

    return 0;
}