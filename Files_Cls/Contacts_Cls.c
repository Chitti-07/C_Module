#include<stdio.h>

int main() {
    char name[30];
    char mobile[20];
    char email[30];
    char address[50];

    FILE *fptr = fopen("Contacts.txt", "r+");
    char ch;

    int option;
    printf("What do you want to print\n1.Name\n2.Mobile\n3.Email\n4.Address\n5.All the details\n");
    printf("Enter the option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
            fscanf(fptr, "%s", name);
            printf("%s", name);
        break;
    case 2:
            fscanf(fptr, "%*s %s", mobile);
            printf("%s", mobile);
        break;
    case 3:
            fscanf(fptr, "%*s %*s %s", email);
            printf("%s", email);
        break;
    case 4:
            fscanf(fptr, "%*s %*s %*s %s", address);
            printf("%s", address);
        break;
    case 5:
        while ((ch = fgetc(fptr)) != EOF) {
            putc(ch, stderr);
        }
        break;
    default:
        printf("Invalid option");
        break;
    }
    

}