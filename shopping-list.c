#include <stdio.h>
#include <string.h>

int main() {

    char item[50] = "";
    float price = 0.00f;
    int quantity = 0;
    char currency = '$';
    float total = 0.00f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    printf("What is the price for each item? ");
    scanf("%f", &price);
    printf("How many of each item are you buying? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s(s).\n", quantity, item);
    printf("The total price of all items is %c%.2f\n", currency, total);

    return 0;
}
