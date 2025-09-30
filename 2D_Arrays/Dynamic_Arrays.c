#include<stdio.h>
#include<stdlib.h>
void Scan_twoDarray(int row, int col, int arr[][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void Print_twoDarray(int row, int col, int arr[][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
// void Scan_twoDarray(int row, int col, int **arr) {
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }                                                        //----->for Row static col Dynamic
// void Print_twoDarray(int row, int col, int **arr) {      //          Both Row, Col Dynamic
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

void RowStaticColDynamic(int row, int col, int **arr) {
    //Resizing the col length
    int new_col;
    printf("New col length: ");
    scanf("%d", &new_col);
    for (int i = 0; i < row; i++) {
        arr[i] = realloc(arr[i], new_col*sizeof(int));
    }
    if (new_col > col) {
        printf("Enter new elements: ");
        //Taking input for new col elements
        for (int i = 0; i < row; i++) {
            for (int j = col; j < new_col; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
    }
    printf("Modified Array is: \n");
    Print_twoDarray(row, new_col, arr);

    //Free the memory to avoid memory lekage
    for (int i = 0; i < row; i++) {
        free(arr[i]);
    }
}

void RowColDynamic(int row, int col, int **ptr) {
    int new_row;
    printf("New row length: ");
    scanf("%d", &new_row);

    int new_col;
    printf("New col length: ");
    scanf("%d", &new_col);

    //Reallocating memory for new rows
    ptr = realloc(ptr, new_row * sizeof(int *));

    //Reallocating memory for new cols
    for (int i = 0; i < new_row; i++) {
        ptr[i] = realloc(ptr[i], new_col*sizeof(int));
    }

    //Scanning new rows and cols
    if (new_col > col) {
        printf("Enter new elements new cols: ");
        for (int i = 0; i < row; i++) {
            for (int j = col; j < new_col; j++) {
                scanf("%d", &ptr[i][j]);
            }
        }
    }
    if (new_row > row) {
        printf("Enter new elements new row: ");
        for (int i = row; i < new_row; i++) {
            for (int j = 0; j < new_col; j++) {
                scanf("%d", &ptr[i][j]);
            }
        }
    }
    printf("Modified array is: \n");
    Print_twoDarray(new_row, new_col, ptr);

    //Freeing cols
    for (int i = 0; i < new_row; i++) {
        free(ptr[i]);
    }

    free(ptr);
}

void RowDynamicColStatic(int row, int col, int ptr[][col]) {
    int new_row;
    printf("Enter new row size: ");
    scanf("%d", &new_row);

    ptr = realloc(ptr, new_row*sizeof(int[col]));
    if (new_row > row) {
        printf("Enter new row elements: ");
        for (int i = row; i < new_row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d", &ptr[i][j]);
            }
        }
    }
    printf("Modified Array is : \n");
    Print_twoDarray(new_row, col, ptr);

    //Clearing memory in heap after usage
    free(ptr);
}
int main() {
    int row;
    printf("Row: ");
    scanf("%d", &row);

    int col;
    printf("Col: ");
    scanf("%d", &col);

    int *arr[row];
    // //Allocating memory in heap for each 1D array
    // for (int i = 0; i < row; i++) {                
    //     arr[i] = calloc(col, sizeof(int));
    // }
    // //Reading input from user                        ------> Row Static Col Dynamic
    Scan_twoDarray(row, col, arr);
    printf("Original Array: \n");
    Print_twoDarray(row, col, arr);
    printf("\n");
    RowStaticColDynamic(row, col, arr);


    // //Allocating memory for rows in Heap
    // int **ptr = calloc(row, sizeof(int *));
    // //Allocating memory for each 1D array in heap
    // for (int i = 0; i < row; i++) {
    //     ptr[i] = calloc(col, sizeof(int));
    // }                                                ---------> Row, Col Dynamic
    // //Reading input from user 
    // Scan_twoDarray(row, col, ptr);
    // printf("Original Array: \n");
    // Print_twoDarray(row, col, ptr);
    // printf("\n");
    // RowColDynamic(row, col, ptr);
    
    //Allocating memory for rows in heap
    // int (*ptr)[col] = calloc(row, sizeof(int[col]));
    // Scan_twoDarray(row, col, ptr);                       ---------> Row Dynamic, Col static 
    // printf("Original Array is : \n");
    // Print_twoDarray(row, col, ptr);
    // RowDynamicColStatic(row, col, ptr);
}