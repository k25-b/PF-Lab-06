#include<stdio.h>
int tickets, price;
int main() {
    printf("Tickets: ");
    scanf("%d",&tickets);
    for (int i = 1; i <= tickets; i++) {
        price = price + i*100;
    }
    printf("Price:$%d\n",price);
}
