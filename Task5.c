#include<stdio.h>
int total_units, daily_units;
int main() {
    while (daily_units != -999) {
        printf("Enter consumed units: \n");
        scanf("%d", &daily_units);
        if (daily_units < 0 && daily_units != -999) {
            printf("Daily consumed units must be non-negative.\n");
            daily_units = 0;
        }
        if (daily_units == -999){
            break;
        }
        total_units += daily_units;
    }
    printf("Total units consumed: %d", total_units);
}
