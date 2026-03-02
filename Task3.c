#include<stdio.h>
int code_correct = 0, passcode = 2468;
int main() {
    while (code_correct == 0) {
        printf("Enter the passcode: ");
        scanf("%d", &passcode);
        if (passcode == 2468) {
            code_correct = 1;
            printf("You entered the correct passsword!");
        }
        else {
            printf("You have entered the wrong password!\n");
        }
    }
}
