#include<stdio.h>
int spaces_left = 50, car_arrived = 0;
int main() {
    while (1) {
        printf("Car arrived? Yes(1):");
        scanf("%d", &car_arrived);
        if (car_arrived == 1) {
            if (spaces_left == 0) {
                printf("No space available!");
                break;
            }
            spaces_left--;
            printf(" Spaces left: %d\n ", spaces_left);
        }
        if (car_arrived == 0) {
            printf("Exiting loop now...");
            break;
        }
    }
}
