//Hard: Challenge 1
/* C Variables
Write a program that simulates a basic inventory system for a store. The program should:
1. Allow the user to input the names, quantities, and prices of 3 items (use separate variables for each item's details).
2. Display the inventory in a tabular format after all inputs are entered.
3. Calculate and display the total value of each item's stock (quantity × price).
4. Calculate and display the overall value of the inventory (sum of all item values).*/

#include <stdio.h>
#include <string.h>

int main() {
    char item1[20], item2[20], item3[20];
    int qty1, qty2, qty3;
    float  price1, price2, price3;
    float total1, total2, total3, overallTotal;

    printf("Enter details for Item 1:\n");
    printf("Name: ");
    scanf("%s", item1);
    printf("Quantity: ");
    scanf("%d", &qty1);
    printf("Price: ");
    scanf("%f", &price1);

    printf("Enter details for Item 2:\n");
    printf("Name: ");
    scanf("%s", item2);
    printf("Quantity: ");
    scanf("%d", &qty2);
    printf("Price: ");
    scanf("%f", &price2);

    printf("Enter details for Item 3:\n");
    printf("Name: ");
    scanf("%s", item3);
    printf("Quantity: ");
    scanf("%d", &qty3);
    printf("Price: ");
    scanf("%f", &price3);

    total1 = qty1 * price1;
    total2 = qty2 * price2;
    total3 = qty3 * price3;
    overallTotal = total1 + total2 + total3;

    printf("\nInventory:\n");
    printf("-------------------------------------------------------\n");
    printf("| Item Name      | Quantity | Price per Unit | Total  |\n");
    printf("-------------------------------------------------------\n");
    printf("| %-14s | %-8d | %-14.2f | %-6.2f |\n", item1, qty1, price1, total1);
    printf("| %-14s | %-8d | %-14.2f | %-6.2f |\n", item2, qty2, price2, total2);
    printf("| %-14s | %-8d | %-14.2f | %-6.2f |\n", item3, qty3, price3, total3);
    printf("-------------------------------------------------------\n");
    printf("Overall Inventory Value: %.2f\n", overallTotal);

    return 0;
}