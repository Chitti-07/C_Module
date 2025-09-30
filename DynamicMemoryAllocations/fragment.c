#include <stdio.h>
#include <stdlib.h>

void swap(float **arr1, float **arr2, int *col1, int *col2) {
    float *temp = *arr1;
    *arr1 = *arr2;
    *arr2 = temp;

    int tempcol = *col1;
    *col1 = *col2;
    *col2 = tempcol;
}

void sort1D(int row, int col[], float **arr) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row-i-1; j++) {
            if (j < col[j] && j < col[j+1]) {
                if (arr[j][col[j]] > arr[j+1][col[j+1]]) {
                    swap(&arr[j], &arr[j+1], &col[j], &col[j+1]);
                }
            }
        }
    }
}
void Scan_Arr(int row, int col[], float **arr) {
    for (int i = 0; i < row; i++) {
        printf("Enter %d values for row[%d] : ", col[i], i);
        for (int j = 0; j < col[i]; j++) {
            scanf("%f", &arr[i][j]);
        }
    }
}
void Print_Arr(int row, int col[], float **arr) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= col[i]; j++) {
            printf("%g ", arr[i][j]);
        }
        printf("\n");
    }
}
void Average(int row, int col[], float **arr) {
    //calculate average for each 1D array
    int i, j;
    for (i = 0; i < row; i++) {
        int sum = 0;
        float avg = 0;
        for (j = 0; j < col[i]; j++) {
            sum += arr[i][j];
        }
        avg = (float)sum/col[i];
        arr[i][j] = avg;
    }
}

int main() {
    int row;
    printf("Enter no.of rows : ");
    scanf("%d", &row);

    //Allocating memory for rows in stack
    float *arr[row];

    //array for columns
    int col[row];

    //columns
    for (int i = 0; i < row; i++) {
        int cols;
        printf("Enter no of columns in row[%d] : ",i);
        scanf("%d", &cols);
        //Saving the col values in col array
        col[i] = cols;
        arr[i] = calloc((cols + 1), sizeof(int));
    }
    Scan_Arr(row, col, arr);

    Average(row, col, arr);

    printf("Array before sorting\n");
    Print_Arr(row, col, arr);

    sort1D(row, col, arr);
    
    printf("Array after sorting\n");
    Print_Arr(row, col, arr);

}


