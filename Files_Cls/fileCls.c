#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
// int main() {
//     FILE* fptr1 = fopen("file1.txt", "r");
//     FILE* fptr2 = fopen("file2.txt", "w");

//     // if (fptr1 == NULL) {
//     //     printf("Not open");
//     //     return 0;
//     // }
//     // char ch;
//     // int count = 0;
//     // while((ch = getc(fptr1)) != EOF) {
//     //     count++;
//     // }
//     // printf("%lu\n", ftell(fptr1));
//     // printf("%d",count);
//     // fclose(fptr1);
//     // fclose(fptr2);
// //--------------------------------------------------------------------------------------------------------------
//     // if (fptr1 == NULL) {
//     //     printf("Not open");
//     //     return 0;
//     // }
//     // char ch;
//     // int Vcount = 0;
//     // while((ch = getc(fptr1)) != EOF) {
//     //     if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
//     //         Vcount++;
//     //         putc(ch, stdout);
//     //     }
//     // }
//     // printf("%d",Vcount);
//     // fclose(fptr1);
//     // fclose(fptr2);
// //--------------------------------------------------------------------------------------------------------------

    // if (fptr1 == NULL) {
    //     printf("Not open");
    //     return 0;
    // }
//     char ch;
//     int OffsetCount = 0;
//     while((ch = getc(fptr1)) != EOF) {
//         if (ch == 'c' || ch == 'C') {
//             printf("%lu ", ftell(fptr1));
//         }
//         OffsetCount++;
//     }
//     // printf("%lu\n", ftell(fptr1));
//     printf("%d",OffsetCount);
    // fclose(fptr1);
    // fclose(fptr2);
// }
//--------------------------------------------------------------------------------------------------------------

//Remove all the characters

// int main() {

//     FILE* fptr1 = fopen("file1.txt", "r");
//     FILE* fptr2 = fopen("temp.txt", "w");

//     if (fptr1 == NULL) {
//         printf("Not open");
//         return 0;
//     }

//     char ch;
//     while ((ch = getc(fptr1)) != EOF) {
//         if (ch != 'c' && ch != 'C') {
//             putc(ch, fptr2);
//         }
//     }

//     fclose(fptr1);
//     fclose(fptr2);

    
//     FILE* newfptr1 = fopen("file1.txt", "w");
//     FILE* newfptr2 = fopen("temp.txt", "r");

//     while ((ch = getc(newfptr2)) != EOF) {
//         putc(ch, newfptr1);
//     }
// }
//--------------------------------------------------------------------------------------------------------------
//Removing Vowels from file
// int main() {

//     FILE* fptr1 = fopen("file1.txt", "r");
//     FILE* fptr2 = fopen("temp.txt", "w");

//     if (fptr1 == NULL) {
//         printf("Not open");
//         return 0;
//     }

//     char ch;
//     while ((ch = getc(fptr1)) != EOF) {
//         if ((ch != 'a' && ch != 'A') && (ch != 'e' && ch != 'E') && (ch != 'i' && ch != 'I') && (ch != 'o' && ch != 'O') && (ch != 'u' && ch != 'U')) {
//             putc(ch, fptr2);
//         }
//     }

//     fclose(fptr1);
//     fclose(fptr2);

    
//     FILE* newfptr1 = fopen("file1.txt", "w");
//     FILE* newfptr2 = fopen("temp.txt", "r");

//     while ((ch = getc(newfptr2)) != EOF) {
//         putc(ch, newfptr1);
//     }
// }
//--------------------------------------------------------------------------------------------------------------
int main() {
    FILE *fptr = fopen("Contacts.txt", "r");
    
    char arr[100];

    char ch;
    // while ((ch == fgetc(fptr)) != EOF) {
    //     fscanf(fptr, "%[^\n]", arr);
    // // }
    // for (int i = 0; i < 3; i++) {
    //     fscanf(fptr, "%[^\n]", arr);
    // }
    
    printf("%s", arr);

    // populateAddressBook(addressBook);
    char ch;
    char str[100];
    FILE* fptr = fopen("contacts.txt", "r");
    while((ch = getc(fptr)) != EOF){
        char temp[100];
        fgets(fptr,100,temp)

        char* temp_name =  strtok(temp,",");

        char* mobile = strtok(NULL, ",");

        char* email = strtok(NULL, ",");

        strcpy(str, temp_name);
        strcpy(str+1, temp_mobile);
        strcpy(addressBook->contacts[addressBook->contactCount].email, temp_email);

        addressBook->contactCount++;
 
    }
}