#include<stdio.h>
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
void Spiral_MAtrix(int row, int col, int arr[][col]) {
    int top = 0;
    int bottom = row - 1;

    int left = 0;
    int right = col - 1;

    while (top <= bottom) {

        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

        if (left <= right) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
        }
        bottom--;

        if (top <= bottom) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
        }
        left++;
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
    Print_twoDarray(row, col, arr);
   
    Spiral_MAtrix(row, col, arr);
}