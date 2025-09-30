#include<stdio.h>
#include<stdlib.h>
void Print_twoDarray(int row, int col, int **arr) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

void Magic_Squ(int **arr, int size) {
    int val = 1;

    int top = 0;
    int bottom = size - 1;

    int left = 0;
    int right = size - 1;

    int row = top;
    int col = size / 2;

    arr[row][col] = val++;

    while (val <= (size*size)) {
        int newRow = row - 1;
        int newCol = col + 1;

        if (newRow < top) {
            newRow = bottom;
        }
        if (newCol > right) {
            newCol = left;
        }
        if (arr[newRow][newCol] != 0) {
            newRow = row + 1;
            newCol = col;
        }
        arr[newRow][newCol] = val++;
        row = newRow;
        col = newCol;

    }
}
int main() {

    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    if (size % 2 != 0) {
        int **arr = calloc(size, sizeof(int *));
        //Allocating memory for each 1D array in heap
        for (int i = 0; i < size; i++) {
            arr[i] = calloc(size, sizeof(int));
        } 
        // printf("%d", size - 1);
        Magic_Squ(arr, size);
        Print_twoDarray(size, size, arr);
    }else {
        printf("Size should be odd\n");
    }
    
}