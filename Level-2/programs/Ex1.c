//Challenge 1
/* C Variables 
Write a program that calculates the area and perimeter of a rectangle. The program should take the length and width of the rectangle as inputs and store them in separate variables */

#include <stdio.h>

int main() {
    int area;
    int perimeter;
    int length;
    int width;

    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter width: ");
    scanf("%d",&width);

    //Input validation => since rectangles cannot have negative or zero dimensions :)
    if(length <= 0 || width <= 0) {
        printf("ERR: Length and width must be positive integers.\n");
        return 1;
    }

    //Area=length×width
    area = length * width;
    //Perimeter=2×(length+width)
    perimeter = 2 * (length + width);

    printf("Area: %d\n",area);
    printf("Perimeter: %d\n",perimeter);
    return 0;
}