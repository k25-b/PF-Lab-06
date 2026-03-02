#include<stdio.h>
int code_correct = 0, passcode = 5555;
int main() {
    while (code_correct == 0) {
        printf("Enter the passcode: ");
        scanf("%d", &passcode);
        if (passcode == 5555) {
            code_correct = 1;
            printf("Access Granted!!");
        }
        else {
            printf("Incorrect Pin!\n");
        }
    }
}
