#include<stdio.h>
int counter =0, attend = 0, absent =0;
int main() {
    counter = 0;
    for (int index = 0; index<26; index++) {
        printf("Member check in status: ");
        scanf(" %d", &counter);
        if (counter == 1) {
            printf("Welcome!\n");
            attend++;
        }
        if (counter == 0) {
            printf("Absent!\n");
        }
    }
    printf("Present %d", attend);
    printf("\n");
    absent = 25 - attend;
    printf("Absent %d", absent );
}
