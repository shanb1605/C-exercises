// Hard Challenge 3
/* C Conditional Statements
Write a program to determine the type of triangle based on the lengths of its sides (scalene, isosceles, or equilateral).
Equilateral: All sides are equal.
Isosceles: Two sides are equal.
Scalene: All sides are different.*/

#include <stdio.h>

int main() {
    int side1,side2,side3;

    printf("Enter Side1: ");
    scanf("%d", &side1);
    printf("Enter Side2: ");
    scanf("%d", &side2);
    printf("Enter Side3: ");
    scanf("%d", &side3);

    //Check is it Valid triangle: A triangle is valid only if the sum of any two sides is greater than the third side.
    if((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)) {
        if((side1 == side2)  && (side2 == side3) && (side3 == side1)) {
            printf("Equilateral: All sides are Equal\n");
        } else if((side1 == side2) || (side2 == side3) || (side1 == side3)) {
            printf("Isosceles: Two sides are equal\n");
        } else {
            printf("Scalene: All sides are different\n");
        }
    } else {
        printf("Invalid triangle!\n");
    }

    return 0;
}