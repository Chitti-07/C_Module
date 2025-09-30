#include <stdio.h>

int main() {
    // int n = 4; // Number of rows

    // // Complete pattern in a single loop
    // for (int i = 1; i <= 2 * n - 1; i++) {
    //     int stars = (i <= n) ? i : 2 * n - i; // Determine number of stars for the current row
    //     int spaces = n - stars; // Calculate spaces for the current row

    //     // Print spaces
    //     for (int j = 1; j <= spaces; j++) {
    //         printf(" ");
    //     }
    //     // Print stars
    //     for (int k = 1; k <= stars; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int n = 4; // Number of rows

    // // Complete pattern
    // for (int i = 1; i <= 2 * n - 1; i++) {
    //     int stars = (i <= n) ? i : 2 * n - i; // Determine number of stars for current row
    //     int spaces = n - stars; // Calculate spaces for current row
        
    //     // Print spaces
    //     for (int j = 1; j <= spaces; j++) {
    //         printf(" ");
    //     }
    //     // Print stars with space
    //     for (int k = 1; k <= stars; k++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }


    // printf("%d %d", printf("Hi\n"), printf("h\n"));


    
    int n;
    scanf("%d", &n);
    int arr[n];


    // //Unique elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // for (int i = 0; i < n; i++) {
    //     int unq = 1;
    //     for (int j = 0; j < n; j++) {
    //         if (i == j) continue;
    //         if (arr[i] == arr[j]) {
    //             unq = 0;
    //             break;
    //         }
    //     }
    //     if (unq) {
    //         printf("%d", arr[i]);
    //     }
    // }
    // printf("\n");

    // //Remove Duplicates
    // for (int i = 0; i < n; i++) {
    //     int dup = 0;
    //     for (int j = 0; j < i; j++) {
    //         if (arr[i] == arr[j]) {
    //             dup = 1;
    //             break;
    //         }
    //     }
    //     if (!dup) {
    //         printf("%d ", arr[i]);
    //     }
    // }

    
    int count = 0;
    int size = 0;
    for (int i = 0; i < n; i++) {
        if (arr[count] != arr[i]) {
            //count++;
            arr[count++] = arr[i];
            size++;
        }
    }

    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
