// Medium Challenge 3
/* C Conditional statements
Write a program to perform basic arithmetic operations (+, -, *, /) based on user input. 
The user provides two numbers and a character (+, -, *, /) to indicate the operation.*/

#include <stdio.h>

int main() {
    int num1,num2;
    char op;

    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    printf("Select Operation +, -, *, / ");
    scanf(" %c", &op);

    if (op == '+') {
        printf("Addition result: %d\n", num1 + num2);
    } else if (op == '-') {
        int res = num1 - num2;
        if(res < 0) {
            printf("Error: Arithmetic underflow!\n");
        } else {
            printf("Subtraction result: %d\n", res);
        }
    } else if (op == '*') {
        printf("Product result: %d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 != 0) {
            printf("Division result: %d\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("UNSUPPORTED OPERATION\n");
    }

    return 0;
}