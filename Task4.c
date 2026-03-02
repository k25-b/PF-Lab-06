#include<stdio.h>
int days, total_distance;
int main() {
    printf("Enter the number of days: ");
    scanf("%d",&days);
    for (int i =1; i < days+1; i++) {
        total_distance = total_distance + i;
    }
    printf("The total distance is: %d km",total_distance);
}
