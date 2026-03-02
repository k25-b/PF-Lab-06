#include<stdio.h>
int option, book_issued = 0;
int main(){
    do{
        printf("1.Issue\n2.Return\n3.Exit\n");
        scanf("%d",&option);
        switch (option) {
            case 1:
                printf("Book issued!\n");
                book_issued++;
                printf("Issued books: %d\n", book_issued);
                break;
            case 2:
                if (book_issued == 0) {
                    printf("No books issued!\nCan't return!\n");
                    break;
                }
                printf("Book returned!\n");
                book_issued--;
                printf("Issued books: %d\n", book_issued);
                break;
            case 3:
                break;
            default:
                printf("Wrong option!\n");
                break;
    }

    }    while (option != 3);

}
