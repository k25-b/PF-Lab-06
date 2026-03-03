#include<stdio.h>
int excellent = 0, satisfactory = 0, needs_improvement = 0, iteration = 0, employee = 0;
int main() {
    while (1) {
        printf("Enter employee performance: \n");
        scanf("%d", &employee);
        if (employee == -1) {
            break;
        }
        if (employee >=85) {
            excellent++;
        }
        else if (employee >=60) {
            satisfactory++;
        }
        else if (employee <60) {
            needs_improvement++;
        }
    }
    printf("Excellent: %d", excellent);
    printf("\nSatisfactory: %d", satisfactory);
    printf("\nNeeds improvement: %d", needs_improvement);
}
