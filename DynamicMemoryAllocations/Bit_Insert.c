#include<stdio.h>
#include<stdlib.h>

int char1Flag = 0;
int char2Flag = 0;
int shortFlag = 0;
int intFlag = 0;
int floatFlag = 0;
int doubleFlag = 0;
// int index = 0;

void Add(void* ptr) {

    int choice;
    printf("Enter the type you have to insert:\n1. char\n2. short\n3. int\n4. float\n5. Double\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    char ch;
    int num;
    short shortNum;
    float f1;
    double d1;

    // if (choice >= 1 && choice <= 5) {
        switch (choice) {

            case 1:
                printf("Enter the char: ");
                scanf("%c", &ch);
                getchar();
                // char *cptr = (char*)ptr;
                //Storing the character in dynamic memory
                if (char1Flag == 0 && doubleFlag == 0) {
                    *(char*)ptr = ch;
                    char1Flag = 1;
                    printf("Character1 is added sucessfully\n");
                    // break;
                }else if (char2Flag == 0 && doubleFlag == 0){
                    // char *cptr2 = (char*)(ptr);
                    *((char*)ptr + 1) = ch;
                    char2Flag = 1;
                    printf("Character2 is added sucessfully\n");
                    // break;
                }else {
                    printf("Memory is full!!\n");
                    break;
                }
                break;
            case 2:
                printf("Enter the short value: ");
                scanf("%hd", &shortNum);
                // short *sptr = (short*)(ptr + 2);
                if (shortFlag == 0) {
                    *((short*)ptr + 2)= shortNum;
                    printf("short is added sucessfully\n");
                    shortFlag = 1;
                    break;
                }else {
                    printf("Storage is full!!\n");
                    break;
                }
                break;
            case 3:
                printf("Enter the number: ");
                scanf("%d", &num);
                // int *iptr = (int*)(ptr + 4);
                if (intFlag == 0 && floatFlag == 0) {
                    *((int*)ptr + 4)= num;
                    printf("number is added sucessfully\n");
                    intFlag = 1;
                    break;
                }else {
                    printf("Storage is full!!\n");
                    break;
                }
                break;
            case 4:
                printf("Enter the float: ");
                scanf("%f", &f1);
                // float *fptr = (float*) (ptr + 4);
                if (intFlag == 0 && floatFlag == 0) {
                    *((float*)ptr + 4)= f1;
                    printf("Float is added sucessfully\n");
                    floatFlag = 1;
                    break;
                }else{
                    printf("Storage is full!!\n");
                    break;
                }
                break;
            case 5:
                printf("Enter the double: ");
                scanf("%lf", &d1);
                // double *dptr = (double*)ptr;
                if (char1Flag == 0 && char2Flag == 0 && intFlag == 0 && floatFlag == 0) {
                    *((double*)ptr) = d1;
                    doubleFlag = 1;
                    printf("Double is added sucessfully\n");
                    break;
                }else {
                    printf("Storage is full!!\n");
                    break;
                }
                break;
            default:
                printf("Invalid Option: ");
                break;
        }
    // }
    // else {
    //     printf("Invalid option:\n");
    // }
}

void Display(void* ptr) {
    //Displaying characters
    int index = 0;
    if (char1Flag != 0) {
        printf("[%d] --> %c\n", index++, *(char*)ptr);
    }
    if (char2Flag != 0) {
        printf("[%d] --> %c\n", index++, *((char*)ptr+1));
    }
    if (shortFlag != 0) {
        printf("[%d] --> %hd\n", index++, *((short*)ptr + 2));
    }
    if (intFlag != 0) {
        printf("[%d] --> %d\n", index++, *((int*)ptr + 4));
    }
    if (floatFlag != 0) {
        printf("[%d] --> %f\n", index++, *((float*)ptr + 4));
    }
    if (doubleFlag != 0) {
        printf("[%d] --> %lf\n", index++, *(double*)ptr);
    }
}


void Remove(void* ptr) {
    Display(ptr);

    int removeChoice;
    printf("Enter the index value to be deleted: ");
    scanf("%d", &removeChoice);

    switch (removeChoice) {
        case 0:
            if (char1Flag != 0) { 
                char1Flag = 0;  
                printf("Character at index 0 removed.\n");
            } else if (char2Flag != 0){
                char2Flag = 0;
                printf("Character at index 0 removed.\n");
            }else if (shortFlag != 0){
                shortFlag = 0;
                printf("short at index 0 removed.\n");
            }else if (intFlag != 0){
                intFlag = 0;
                printf("Integer at index 0 removed.\n");
            }else if (floatFlag != 0){
                floatFlag = 0;
                printf("Float at index 0 removed.\n");
            }else if (doubleFlag != 0){
                doubleFlag = 0;
                printf("double at index 0 removed.\n");
            }
            break;

        case 1:
            if (char2Flag != 0) {  
                char2Flag = 0;  
                printf("Character at index 1 removed.\n");
            } else if (shortFlag != 0){
                shortFlag = 0;
                printf("short at index 1 removed.\n");
            }else if (intFlag != 0){
                intFlag = 0;
                printf("integer at index 1 removed.\n");
            }else if (floatFlag != 0){
                floatFlag = 0;
                printf("float at index 1 removed.\n");
            }else if (doubleFlag != 0){
                doubleFlag = 0;
                printf("double at index 1 removed.\n");
            }
            break;

        case 2:
            if (shortFlag != 0) {  
                shortFlag = 0;  
                printf("Short value at index 2 removed.\n");
            }else if (intFlag != 0){
                intFlag = 0;
                printf("integer value at index 2 removed.\n");
            }else if (floatFlag != 0){
                floatFlag = 0;
                printf("float value at index 2 removed.\n");
            }else if (doubleFlag != 0){
                doubleFlag = 0;
                printf("double value at index 2 removed.\n");
            }
            break;

        case 3:
            if (intFlag != 0) {  
                intFlag = 0;  
                printf("Integer at index 3 removed.\n");
            }else if (floatFlag != 0){
                floatFlag = 0;
                printf("float at index 3 removed.\n");
            }else if (doubleFlag != 0){
                doubleFlag = 0;
                printf("double at index 3 removed.\n");
            }
            break;

        case 4:
            if (floatFlag != 0) {  
                floatFlag = 0; 
                printf("Float value at index 4 removed.\n");
            } else if (doubleFlag != 0){
                doubleFlag = 0;
                printf("double value at index 4 removed.\n");
            }
            break;

        case 5:
            if (doubleFlag != 0) {  
                doubleFlag = 0;  
                printf("Double value at index 0 removed.\n");
            } else {
                printf("No double value to remove at index 0.\n");
            }
            break;

        default:
            printf("Invalid index.\n");
            break;
    }
}



int main() {

    int choice;
    void* ptr = malloc(8);

    do {

        printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\n");
        printf("Enter the choise: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                Add(ptr);
                break;
            case 2:
                // int removeChoice;
                Remove(ptr);
                break;
            case 3:
                Display(ptr);
                break;
            case 4:

                break;   
        }
    }while (choice != 4);
}