// #include <stdio.h>

// int main() {
//     int rows = 4;
//     int arr[rows][rows]; // Store the pattern in a 2D array
//     int num = 1;

//     // Fill the array
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j <= i; j++) {
//             arr[i][j] = num;
//             num++;
//         }
//     }

//     // Print the array in the desired pattern
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j <= i; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

void printPascalTriangle(int n) {
    for (int line = 1; line <= n; line++) {

        for (int i = 1; i <= n-line; i++) {
            printf(" ");
        }
        int C = 1;  // First element is always 1
        for (int i = 1; i <= line; i++) {
            printf("%d ", C);
            C = C * (line - i) / i;  // Binomial coefficient
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPascalTriangle(n);
    return 0;
}