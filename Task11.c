#include<stdio.h>
int price = 0, another_item = 0;
float total_bill = 0;
int main() {
    do{
        printf("Enter price of the item: ");
        scanf("%d", &price);
        total_bill = total_bill + price;
        printf("\nDo you want to add another item? Yes(1) or No(0): ");
        scanf("%d", &another_item);

    } while (another_item != 0);

    if (total_bill > 3000) {
        printf("Your bill is Rs %.2f\n", total_bill);
        printf("Applying a 10%% discount...\n");
        total_bill = total_bill*0.9;
        printf("Your bill after discount is Rs %.2f\n", total_bill);
    }
    else {
        printf("Your bill is Rs %.2f", total_bill);
    }
}
