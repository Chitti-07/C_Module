#include<stdio.h>
//Sorting Two D Array
// void Scan_twoDarray(int row, int col, int arr[][col]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }
// void Print_twoDarray(int row, int col, int arr[][col]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void swap(int *a, int *b) {
//     int temp = *a; 
//     *a = *b;
//     *b = temp;
// }
// void sort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
//     }
// }

// void TwoDSort(int row, int col, int arr[][col]) {
//     for (int i = 0; i < row; i++) {
//         sort(arr[i], col);
//     }
// }
// int main() {
//     int row;
//     scanf("%d", &row);

//     int col;
//     scanf("%d", &col);
//     int arr[row][col];
//     Scan_twoDarray(row, col, arr);
//     Print_twoDarray(row, col, arr);
//     TwoDSort(row, col, arr);
//     Print_twoDarray(row, col, arr);
// }
//----------------------------------------------------------------------------------------------------------------
//Largest element in Two D array

void Scan_twoDarray(int row, int col, int arr[][col]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}
void Print_twoDarray(int row, int col, int arr[][col]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void largest(int row, int col, int arr[][col]) {
    int max = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf("Largest element in 2D array is %d\n", max);
}
void SubArrayLargest(int row, int col, int arr[][col]) {
    for (int i = 0; i < row; i++) {
        int max = arr[i][0];
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        printf("for %d row largest is %d\n", i, max);
    }
}
void DiffOfDiagonal(int row, int col, int arr[][col]) {
    int digonal1 = 0;
    int digonal2 = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j) {
                digonal1 += arr[i][j];
            }
            if (i+j == (row-1)) {
                digonal2 += arr[i][j];
            }
        }
    }
    printf("The difference between two diagonals is %d\n", digonal1-digonal2);
}
void TransposeMatrix(int row, int col, int arr[][col], int newArr[][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            newArr[i][j] = arr[j][i]; 
        }
    }
}
void SnakPattern(int row, int col, int arr[][col]) {
    for (int i = 0; i < row; i++) {
        if (i%2 == 0) {
            for (int j = 0; j < col; j++) {
                printf("%d ", arr[i][j]);
            }
        }else {
            for (int j = col - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
    }
}
int main() {
    int row;
    printf("Row: ");
    scanf("%d", &row);

    int col;
    printf("Col: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Array Elements: ");
    Scan_twoDarray(row, col, arr);
    // Print_twoDarray(row, col, arr);

    // largest(row, col, arr);

    // SubArrayLargest(row, col, arr);

    // DiffOfDiagonal(row, col, arr);

    //For Transpose of Matrix
    // int new_arr[row][col];
    // TransposeMatrix(row, col, arr, new_arr);
    // Print_twoDarray(row, col, new_arr);

    SnakPattern(row, col, arr);
    

}
//----------------------------------------------------------------------------------------------------------------