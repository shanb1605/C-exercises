//Challenge 1
/* C Variables 
Write a program that takes two integers as input: num1 and num2. Store their sum, difference, product, and quotient in separate variables and display the results. 
Ensure the program handles division safely (no division by zero).*/

#include <stdio.h>

int main() {
  int num1;
  int num2;

  //Take input
  printf("Enter num1: ");
  scanf("%d",&num1);
  printf("Enter num2: ");
  scanf("%d",&num2);

  //Operations
  int sum = num1 + num2;
  int diff = num1 - num2;
  int product = num1 * num2;
  float quotient;
  if(num2 != 0){
    quotient = (float) num1 / num2; //type casting from int to float
  }

  printf("Sum: %d\n",sum);
  printf("Difference: %d\n",diff);
  printf("Product: %d\n",product);
  if(num2 == 0) {
    printf("Quotient: Divison by Zero Error\n");
  } else {
    printf("Quotient: %3.2f\n",quotient);
  }

  return 0;
}