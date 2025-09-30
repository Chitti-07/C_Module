#include<stdio.h>
#include <string.h>
#include <stdlib.h>
// int main () {


//     int size; 
//     printf("Enter the array size: ");
//     scanf("%d", &size);
//     char arr[size];
//     printf("Enter the array elements: ");
//     getchar();
//     for (int i = 0; i < size; i++) {
//         scanf("%c", &arr[i]);
//     }

//    char temp;    

//     for (int i = 0; i < size-1; i++) {
//         for (int j = 0; j < size-i-1; j++) {
//             if (arr[j] > arr[j+1]){

//                     //if it is smaller, then swap the numbers
//                     temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
                    
                    
//             }
//         }
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%c ", arr[i]);
//     }

//----------------------------------------------------------------------------------------------------------

//     int size; 
//     printf("Enter the array size: ");
//     scanf("%d", &size);
//     char arr[size];
//     printf("Enter the array elements: ");
//     getchar();
//     for (int i = 0; i < size; i++) {
//         scanf("%c", &arr[i]);

//     }

//     for (int i = 0; i < size; i++) {
//         if (arr[i] >= 'A' && arr[i] <= 'Z') {
//             arr[i] += 32;
//         }
//     }

//    char temp;  
     

//     for (int i = 0; i < size-1; i++) {
        
//         for (int j = 0; j < size-i-1; j++) {

            
//             if ((arr[j] < arr[j+1] )){

//                     //if it is smaller, then swap the numbers
//                     temp = arr[j];
//                     arr[j] = arr[j+1];
//                     arr[j+1] = temp;
                    
                    
//                 }
//         }
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%c ", arr[i]);
//     }
// //----------------------------------------------------------------------------------------------------------
// }



// int main() {
//     char str[] = "helloo";
//     int size = strlen(str);
//     printf("%s\n", str);
//     // if (size%2 == 0) {
//     //     str[size/2] = '*';
//     //     str[(size/2)-1] = '*';
//     // }else {
//     //     str[size/2] = '*';
//     // }
//     // printf("%s", str);
//     for (int i = 0; str[i]; i++) {
//         int repeate = 0;
//         for (int j = 0; j < str[i]; j++) {
//             if (i == j) {
//                 continue;
//             }else if (str[i] == str[j]) {
//                 for (int k = j; str[k]; k++) {
//                     str[k] = str[k+1];
//                 }
//                 j--;
//             }
//         }
//     }
//     printf("%s\n", str);
// }

// int main() {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int new;
//     scanf("%d", &new);
//     int i;
//     for (i = size - 1; i >= 0 && arr[i] > new; i--) {
//         arr[i+1] = arr[i];
//     }
//     arr[i+1] = new;

//     for (int i = 0; i < size; i++) {
//         printf("%d", arr[i]);
//     }
// }

#include <stdio.h>

// Function to find the smallest positive number missing from the array
int findSmallestMissingPositive(int arr[], int n) {
    // Step 1: Create a boolean array to track the presence of numbers
    int found[n + 1]; // We use n+1 size because the missing number can be between 1 and n+1
    for (int i = 0; i <= n; i++) {
        found[i] = 0; // Initialize all elements as 0 (not found)
    }

    // Step 2: Mark the numbers that are present in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            found[arr[i]] = 1; // Mark the number as found
        }
    }

    // Step 3: Find the smallest positive number that is missing
    for (int i = 1; i <= n; i++) {
        if (found[i] == 0) { // If the number is not found
            return i; // Return the missing number
        }
    }

    // If all numbers from 1 to n are present, the missing number is n+1
    return n + 1;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = findSmallestMissingPositive(arr, n);
    printf("The smallest positive number missing is: %d\n", missing);

    return 0;
}
