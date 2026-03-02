#include<stdio.h>
float increment = 0.0, base_salary = 0;
int years =0;

int main() {
    printf("Number of years: ");
    scanf("%d", &years);
    printf("Base salary: ");
    scanf("%f", &base_salary);
    for (int i = 1; i <= years; i++) {
        printf("Year %d ", i);
        printf("Salary %.2f", base_salary*(1+increment));
        increment = increment + 0.05;
        printf("\n");
    }
}
