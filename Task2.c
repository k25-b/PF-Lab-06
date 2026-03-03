#include<stdio.h>
int total_data = 1000, data_usage = 0;
int main() {
    while (total_data > 0) {
        printf("Enter data usage: ");
        scanf("%d", &data_usage);
        if (data_usage > total_data) {
            printf("You cannot use more than total data.\n");
            data_usage = 0;
            printf("Enter again: ");
            scanf("%d", &data_usage);
        }
        else if (total_data == 0) {
            printf("Data plan exceeded!\n");
            data_usage = 0;

        }
        total_data = total_data - data_usage;
        printf("Data left: %d \n", total_data);
    }}
