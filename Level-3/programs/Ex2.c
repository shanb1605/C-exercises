//Hard: Challenge 2
/* C Data-types 
Write a program that asks the user to input the following information:
1. Name (a string with a maximum of 50 characters).
2. Age (integer).
3. Height in meters (float).
4. Is the user a student? (yes or no as a single character input, y or n).

After collecting the inputs:
1. Display the information back to the user in a formatted way.
2. Ensure the program validates each input and provides an error message if the input does not match the expected data type or range.*/

#include <stdio.h>

int main() {
    char name[50];          
    int age;                 
    float height;            
    char is_user_a_student;  

    // Input for name
    printf("Enter your name: ");
    scanf("%s", name);

    // Input and validation for age
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("INVALID AGE! Age must be non-negative.\n");
        return 1;
    }

    // Input and validation for height
    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &height);

    if (height < 0.5 || height > 3.0) {
        printf("INVALID HEIGHT! Height must be between 0.5 and 3.0 meters.\n");
        return 1;
    }

    // Input and validation for student status
    printf("Are you a student? (y/n): ");
    scanf(" %c", &is_user_a_student); // Space before %c to skip newline

    if (is_user_a_student != 'y' && is_user_a_student != 'n' ) {
        printf("INVALID INPUT! Please enter 'y' for yes or 'n' for no.\n");
        return 1;
    }

    // Display user information in a formatted table
    printf("\nUSER INFO:\n");
    printf("-------------------------------------------------------\n");
    printf("| Name           | Age    | Height    | Is User a Student? |\n");
    printf("-------------------------------------------------------\n");
    printf("| %-14s | %-6d | %-9.2f | %-17c |\n", name, age, height, is_user_a_student);
    printf("-------------------------------------------------------\n");

    return 0;
}