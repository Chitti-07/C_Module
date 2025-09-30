#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Scan_Arr(int row, int col, char arr[][col]) {
    for (int i = 0; i < row; i++) {
        printf("[%d] -> ", i);
        getchar();
        scanf("%[^\n]", arr[i]);
    }
}

void Print_Arr(int row, int col, char arr[][col]) {
    for (int i = 0; i < row; i++) {
        printf("%s ", arr[i]);
    }
}
void Swap_Arr(char* arr1, char* arr2) {
    char temp[20];
    strcpy(temp, arr1);
    strcpy(arr1, arr2);
    strcpy(arr2, temp);
}

void Sort_Arr(int row, int col, char arr[][col]) {
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < row-i-1; j++) {
            if (strcasecmp(arr[j], arr[j+1]) > 0) {
                Swap_Arr(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    
    int row;
    int col = 20;
    printf("Enter the size: ");
    scanf("%d", &row);

    char (*ptr)[col] = calloc(row, sizeof(char[col]));
    printf("Enter the %d names of length max 20 characters in each\n", row);
    Scan_Arr(row, col, ptr);
    Print_Arr(row, col, ptr);
    printf("\n");
    Sort_Arr(row, col, ptr);
    Print_Arr(row, col, ptr);
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void Scan_Arr(int row, int col, char arr[][col]) {
//     for (int i = 0; i < row; i++) {
//         // printf("[%d] -> ", i);
//         getchar();
//         scanf("%[^\n]", arr[i]);
//     }
// }

// void Print_Arr(int row, int col, char arr[][col]) {
//     for (int i = 0; i < row; i++) {
//         printf("%s\n", arr[i]);
//     }
// }

// int StrcaseCmp(char str1[], char str2[]) {
//     int i;
//     for (i = 0; str1[i] && str2[i]; i++) {
//         if (str1[i] != str2[i] || str1[i] != str2[i] + 32 || str1[i] != str2[i] - 32) {
//             break;
//         }
//     }
//     return str1[i] - str2[i];
// }

// void Swap_Arr(char* arr1, char* arr2) {
//     char temp[20];
//     strcpy(temp, arr1);
//     strcpy(arr1, arr2);
//     strcpy(arr2, temp);
// }

// void Sort_Arr(int row, int col, char arr[][col]) {
//     for (int i = 0; i < row - 1; i++) {
//         for (int j = 0; j < row-i-1; j++) {
//             if (StrcaseCmp(arr[j], arr[j+1]) > 0) {
//                 Swap_Arr(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
    
//     int row;
//     int col = 20;
//     printf("Enter the size: ");
//     scanf("%d", &row);

//     char (*ptr)[col] = calloc(row, sizeof(char[col]));
//     printf("Enter the %d names of length max 20 characters in each\n", row);
//     Scan_Arr(row, col, ptr);
//     printf("The sorted names are:\n");
//     Sort_Arr(row, col, ptr);
//     Print_Arr(row, col, ptr);
// }