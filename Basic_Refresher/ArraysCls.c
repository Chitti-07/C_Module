#include<stdio.h>
int main() {
     
     //Reading and writing elements from user

    int size = 5;
    // scanf("%d", &size);
    int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    arr[0] = 12;
    arr[1] = 10024;
    arr[2] = 3;
    arr[3] = 344;
    arr[4] = 5984;

    printf("\n");

    for (int i = 0; i <= size; i++) {
        printf("%d\n", arr[i]);
    }
}

//--------------------------------------------------------------------------------------
    //maximum element in an array

    // int arr[10] = {12, 10024, 3, 344, 5984};
    // int size;
    // scanf("%d", &size);
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // int max = arr[0];
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] > max) {
    //         max = arr[i];
    //     }
    // }
    // printf("%d ", max);

//--------------------------------------------------------------------------------------

    //Minimum value in an array

    // int size;
    // scanf("%d", &size);
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // int min = arr[0];
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] < min) {
    //         min = arr[i];
    //     }
    // }
    // printf("%d ", min);
    
//--------------------------------------------------------------------------------------
    //Average of elements

    // int size;
    // scanf("%d", &size);
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // float avg = 0;
    // int sum = 0;
    // for (int i = 0; i <= size; i++) {
    //     sum += arr[i];
    // }
    // printf("%.2f ", avg = sum/size);

//--------------------------------------------------------------------------------------
    //Even index value

    // int size;
    // scanf("%d", &size);
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("\n");

    // for (int i = 0; i <= size; i+=2) {
    //     printf("%d\n", arr[i]);
    // }

//--------------------------------------------------------------------------------------
    //Odd number index values
    // int size;
    // scanf("%d", &size);
    // int arr[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("\n");

    // for (int i = 0; i <= size; i+=3) {
    //     printf("%d\n", arr[i]);
    // }

//--------------------------------------------------------------------------------------
    
    //Finding the element in an array

    // int size; 
    // printf("Enter array size: ");
    // scanf("%d", &size);
    
    // int arr[size];
    // int i = 0;
    // int target;
    // printf("Enter array elements: ");

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter array element to search: ");
    // scanf("%d", &target);
    
    
    // for (i = 0; i < size; i++) {
        
    //     if (arr[i] == target) {
    //         printf("Target found\n");
    //         break;
    //     }
        
    // }
    // if (i < size) {
    //     printf("Found ");
    // }else {
    //     printf("Not Found ");
    // }
    
//--------------------------------------------------------------------------------------

    //Copying Arrays
    // int size; 
    // printf("Enter array1 size: ");
    // scanf("%d", &size);
    // int arr1[size];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr1[i]);
    // }

    // int arr2[size];
    // for (int i = 0; i < size; i++) {
    //     arr2[i] = arr1[i];
    // }

    // for (int i = 0; i < size; i++) {
    //     printf("%d ", arr2[i]);
    // }

//--------------------------------------------------------------------------------------

    //Check if 2 arrays are equal or not

    // int i = 0;
    // int size; 
    // printf("Enter array size: ");
    // scanf("%d", &size);
    // int arr1[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr1[i]);
    // }

    // int arr2[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr2[i]);
    // }
    // int count = 0;
    // for (i = 0; i < size; i++) {
     
    //     if (arr1[i] == arr2[i]) {
    //         count++;
    //     }else {
    //         break;
    //     }
    // }

    // if (count == size) {
    //     printf("Both the arrays are same");
    // }else {
    //     printf("Both the arrays are not same");
    // }

//--------------------------------------------------------------------------------------

    // int i = 0;
    // int j = 0;
    // int size; 
    // printf("Enter array size: ");
    // scanf("%d", &size);
    // int arr1[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr1[i]);
    // }

    // int arr2[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr2[i]);
    // }
    // int count = 0;
    // for (i = 0; i < size; i++) {
    //     int flag;
    //     for (j = 0; j < size; j++) {
    //         if (arr1[i] == arr2[j]) {
    //             flag = 1;
    //             count++;
    //             break;
    //         }
    //     }
    //     // if (j == count) {
    //     //     break;
    //     // }
    //     if (flag == 0){
    //         break;
    //     }
    // }

    // if (count == size) {
    //     printf("Both the arrays are same");
    // }else {
    //     printf("Both the arrays are not same");
    // }
//--------------------------------------------------------------------------------------
    //Reversing the Array

    // int i = 0;
    // int j = 0;
    // int size; 
    // printf("Enter array size: ");
    // scanf("%d", &size);
    // int arr[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // int start = 0;
    // int end = size - 1;

    // while (start < end) {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }

    // for(i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }

    // for (int i = 0; i <= (size/2); i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[size-1-i];
    //     arr[size-1-i] = temp;
    // }

    // for(i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }
//--------------------------------------------------------------------------------------

    //Palindrome or not

    // int i = 0;
    // int j = 0;
    // int size; 
    // printf("Enter array size: ");
    // scanf("%d", &size);
    // int arr[size];

    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // int count = 0;
    // int start = 0;
    // int end = size - 1;

    // while (start < end) {
    
    //     if (arr[start] == arr[end]){
    //         count = 1;
    //         break;
    //     }
    //     start++;
    //     end--;
    // }
    // if (count == 1) {
    //     printf("Plaindrome ");
    // }else {
    //     printf("Not a palindrome ");
    // }

    // for(i = 0; i < size/2; i++) {

    //     if (arr[i] != arr[size-1-i]) {
    //         count=1;
    //         break;
    //     }
    // }
    // if (count == 0) {
    //     printf("Plaindrome ");
    // }else {
    //     printf("Not a palindrome ");
    // }

//--------------------------------------------------------------------------------------


    //Two arrays are equal or not
    // int size1;
    // printf("Enter the array1 size: ");
    // scanf("%d", &size1);
    // int arr1[size1];
    
    // int size2;
    // printf("Enter the array2 size: ");
    // scanf("%d", &size2);
    // int arr2[size2];
    
    // int i = 0;
    // int j = 0;
    
    // printf("Enter the array1 elements: ");
    // for (i = 0; i < size1; i++) {
    //     scanf("%d", &arr1[i]);
    // }
    
    
    
    // printf("Enter the array2 elements: ");
    // for (i = 0; i < size2; i++) {
    //     scanf("%d", &arr2[i]);
    // }
    // int count = 0;
    // for (i = 0; i < size1; i++) {
        
    //     for (j = 0; j < size2; j++) {
    //         if (arr1[i] == arr2[j]) {
    //             count++;
    //             break;
    //         }
    //     }
        
    // }
    // if (count == size1) {
    //     printf("Array elements are equal.");
    // }else {
    //     printf("Array elements are not equal.");
    // }
    // printf("%d", flag);

//--------------------------------------------------------------------------------------

    //Count no.of times a number is repeated

    // int size;
    // int i = 0;
    // printf("Enter the array size: ");
    // scanf("%d", &size);
    // int arr[size];

    // printf("Enter the array elements: ");
    // for (i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // int num;
    // int count = 0;
    // printf("Enter the number to count: ");
    // scanf("%d", &num);

    // for (i = 0; i < size; i++) {
    //     if (arr[i] == num) {
    //         count++;
    //     }
    // }
    // printf("%d ", count);
//--------------------------------------------------------------------------------------

    //Sorting an array in ascending and descending

    // int size; 
    // printf("Enter the array size: ");
    // scanf("%d", &size);
    // int arr[size];
    // printf("Enter the array elements: ");
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i <= size; i++) {
    //     for (int j = 1; j <= size-i-1; j++) {
    //         if (arr[j] < arr[j-1]){

    //                 //if it is smaller, then swap the numbers
    //                 int temp = arr[j];
    //                 arr[j] = arr[j-1];
    //                 arr[j-1] = temp;
                    
                    
    //             }
    //     }
    // }

    // for (int i = 0; i < size; i++) {
    //     printf("%d ", arr[i]);
    // }

//--------------------------------------------------------------------------------------
    
    //Printing Unique elements in a array
    // int size; 
    // printf("Enter the array size: ");
    // scanf("%d", &size);
    // int arr[size];
    // printf("Enter the array elements: ");
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < size; i++) {
    //     int count = 0;
    //     for (int j = 0; j < size; j++) {
    //         if (i == j) {
    //             continue;
    //         }else if (arr[i] == arr[j] && i != j ) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0) {
    //         printf("%d", arr[i]);
    //     }else {
    //         count = 0;
    //     }
    // }

//--------------------------------------------------------------------------------------

    // int size; 
    // printf("Enter the array size: ");
    // scanf("%d", &size);
    // int arr[size];
    // int uni[size];
    // int k = 0;
    // printf("Enter the array elements: ");
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < size; i++) {
    //     int count = 0;
    //     for (int j = 0; j < size; j++) {
    //         if (i == j) {
    //             continue;
    //         }else if (arr[i] == arr[j]) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0) {
    //         // printf("%d", arr[i]);
    //         uni[k] = arr[i];  
    //         k++;          
    //     }else {
    //         count = 0;
    //     }
    // }
    // for (int i = 0; i < k; i++) {
    //     printf("%d ", uni[i]);
    // }

//--------------------------------------------------------------------------------------
    
    //Removing dublicate elements in array

    // int size; 
    // printf("Enter the array size: ");
    // scanf("%d", &size);
    // int arr[size];
    // int uni[size];
    // int k = 0;
    // printf("Enter the array elements: ");
    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // For Removing dublicate elements in array (Method 2)
    // for (int i = 0; i < size; i++) {
    //     int count = 0; 
    //     for (int j = 0; j < i; j++) {
    //         if (arr[i] == arr[j]) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0) {
    //         printf("%d ", arr[i]);
    //     }
    //     // else {
    //     //     count = 0;
    //     // }
    // }


    //For printing uniq values in a array
    // for (int i = 0; i < size; i++) {
    //     int count = 0; 
    //     for (int j = 0; j < size; j++) {
    //         if (i == j) {
    //             continue;
    //         }else if (arr[i] == arr[j]) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if (count == 0) {
    //         uni[k++] = arr[i];
    //         // k++;
    //     }else {
    //         count = 0;
    //     }
    // }

    // for (int i = 0; i < k; i++) {
    //     printf("%d ", uni[i]);
    // }

//--------------------------------------------------------------------------------------

    // int a;
    // char b;
    // short int c; 
    // long int d;
    // long long int e;
    // double f;
    // long double g;

    // printf("%lu ", sizeof(a));
    // printf("%lu ", sizeof(b));
    // printf("%lu ", sizeof(c));
    // printf("%lu ", sizeof(d));
    // printf("%lu ", sizeof(e));
    // printf("%lu ", sizeof(f));
    // printf("%lu ", sizeof(g));

//--------------------------------------------------------------------------------------

    //Insert Element in a particular position
    // int ele;
    // int pos;
    // int size;
    // scanf("%d", &size);

    // int arr[100];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // scanf("%d\n%d", &ele, &pos);
    // // size+=1;

    // // for (int i = size-1; i >= pos; i--) {
    // //     arr[i+1] = arr[i];
    // // }
    // for (int i = size; i >= pos; i--) {
    //     arr[i] = arr[i-1];
    // }
    // arr[pos] = ele;

    // for (int i = 0; i < size+1; i++){
    //     printf("%d ", arr[i]);
    // }

//--------------------------------------------------------------------------------------

    // int ele;
    // int size;
    // scanf("%d", &size);

    // int arr[100];

    // for (int i = 0; i < size; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // scanf("%d", &ele);
    // // size+=1;

    // // int arr2[size++];
    // for (int i = size-1; i >= 0; i--) {
    //     arr[i+1] = arr[i];
    // }
    // arr[0] = ele;

    // for (int i = 0; i < size+1; i++){
    //     printf("%d ", arr[i]);
    // }
//--------------------------------------------------------------------------------------    

// }
//--------------------------------------------------------------------------------------

// void swap(int* arr, int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// void reverse(int* arr, int size, int k) {
//     swap(arr, 0, size-1);
//     swap(arr, 0, k-1);
//     swap(arr, k, size-1);
// }

// void shuffle(int* arr, int size, int k) {
//     for (int i = k; i < size; i+=(2*k)) {
//         // //if (i % k == 0) {
//              swap(arr, i, i+k-1);
//         // //}
        
//     }
// }
// int main() {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k = 2;
//     //reverse(arr, 8, k);
//     shuffle(arr, 10, k);
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
// }

// void countdig(int arr[], int size) {
    
//     for (int i = 0; i < size; i++) {
//         int count = 0;
//         for (int j = i; j < size; j++) {
//             if (i == j) {
//                 continue;
//             }else if (arr[i] == arr[j]) {
//                 count++;
//                 break;
//             }
//         }
//         if (count != 0) {
//             printf("%d ", arr[i]);
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 2, 1};
//     countdig(arr, 5);
// }
//--------------------------------------------------------------------------------------


// #include <stdio.h>

// void mergeAndModify(int arr1[], int size1, int arr2[], int size2, int removeIndex) {
//     int mergedSize = size1 + size2;
//     int mergedArray[mergedSize];
    
//     for (int i = 0; i < size1; i++) {
//         mergedArray[i] = arr1[i];
//     }
//     for (int i = 0; i < size2; i++) {
//         mergedArray[size1 + i] = arr2[i];
//     }

//     printf("Merged array: ");
//     for (int i = 0; i < mergedSize; i++) {
//         printf("%d ", mergedArray[i]);
//     }
//     printf("\n");

//     for (int i = removeIndex; i < mergedSize - 1; i++) {
//         mergedArray[i] = mergedArray[i + 1];
//     }
//     mergedSize--; 

//     for (int i = 0; i < mergedSize; i++) {
//         printf("%d ", mergedArray[i]);
//     }
//     printf("\n");
// }

// int main() {
//     // int arr1[] = {
//     int s1, s2;
//     scanf("%d %d", &s1, &s2);
//     int arr1[s1];
//     int arr2[s2];
//     for (int i = 0; i < s1; i++) {
//         scanf("%d", &arr1[i]);
//     }
//     for (int i = 0; i < s2; i++) {
//         scanf("%d", &arr2[i]);
//     }
//     int removeIndex;
//     scanf("%d", &removeIndex);


//     mergeAndModify(arr1, s1, arr2, s2, removeIndex);
//     return 0;
// }
//--------------------------------------------------------------------------------------

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int ind = 0;
//     int dup = 0;
//     for (int i = 0; i < n; i++) {
//         dup = 0;
//         for (int j = 0; j < ind; j++) {
//             if (arr[i] == arr[j]) {
//                 dup = 1;
//                 break;
//             }
//         }

//         if (!dup) {
//             arr[ind++] = arr[i];
//         }
//     }

//     for (int i = 0; i < ind; i++) {
//         printf("%d ", arr[i]);
//     }
// }
//--------------------------------------------------------------------------------------
    //void moveZeroes(int arr[], int n) {
    //     int j = 0;
    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] != 0) {
    //             arr[j] = arr[i];
    //             if (i != j) arr[i] = 0;
    //             j++;
    //         }
    //     }
    // }
    // void moveZeroes(int arr[], int n) {
    //     int j = n-1;
    //     for (int i = n-1; i >= 0; i--) {
    //         if (arr[i] != 0) {
    //             arr[j] = arr[i];
    //             if (i != j) arr[i] = 0;
    //             j--;
    //         }
    //     }
    // }
    // int main() {
    //     int arr[] = {0, 1, 9, 0, 3, 12};
    //     moveZeroes(arr, 6);
    //     for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    //     return 0;
    // }
//--------------------------------------------------------------------------------------
// #include <stdio.h>
// void findPairWithSum(int arr[], int n, int sum) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (arr[i] + arr[j] == sum) {
//                 printf("Pair: (%d, %d)\n", arr[i], arr[j]);
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {1, 4, 5, 3, 2};
//     findPairWithSum(arr, 5, 7);
//     return 0;
// }
//--------------------------------------------------------------------------------------

// #include <stdio.h>
// int longestIncreasingSubsequence(int arr[], int n) {
//     int lis[n];
//     lis[0] = 1;
//     for (int i = 1; i < n; i++) lis[i] = 1;
//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
//                 lis[i] = lis[j] + 1;
//             }
//         }
//     }
//     int max = lis[0];
//     for (int i = 1; i < n; i++) {
//         if (lis[i] > max) max = lis[i];
//     }
//     return max;
// }
// int main() {
//     int arr[] = {10, 22, 9, 33, 21, 50, 41, 40};
//     printf("Length of Longest Increasing Subsequence: %d\n", longestIncreasingSubsequence(arr, 8));
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// void findUnion(int arr1[], int n1, int arr2[], int n2) {
//     int result[n1 + n2], k = 0;
//     for (int i = 0; i < n1; i++) result[k++] = arr1[i];
//     for (int i = 0; i < n2; i++) {
//         int found = 0;
//         for (int j = 0; j < n1; j++) {
//             if (arr2[i] == arr1[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found) result[k++] = arr2[i];
//     }
//     for (int i = 0; i < k; i++) printf("%d ", result[i]);
// }
// int main() {
//     int arr1[] = {1, 2, 3};
//     int arr2[] = {3, 4, 5};
//     findUnion(arr1, 3, arr2, 3);
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// int subArraySum(int arr[], int n, int sum) {
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int currentSum = 0;
//         for (int j = i; j < n; j++) {
//             currentSum += arr[j];
//             if (currentSum == sum) {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main() {
//     int arr[] = {1, 1, 1, 1, 1};
//     int sum = 3;
//     printf("Number of subarrays with sum %d: %d\n", sum, subArraySum(arr, 5, sum));
//     return 0;
// }
//--------------------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// void printDistinct(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int found = 0;
//         for (int j = 0; j < i; j++) {
//             if (i == j) continue;
//             if (arr[i] == arr[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if (!found) printf("%d ", arr[i]);
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3, 1, 2, 4};
//     printDistinct(arr, 6);
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------

// #define R 2
// #define C 3

// int main() {
//     int arr1[2][3] = {{1, 1, 1}, 
//                     {1, 1, 1}};
//     int arr2[3][3] = {{1, 2, 3}, 
//                     {4, 5, 6}, 
//                     {7, 8, 9}};

//     int res[2][3] = {0};

//     for (int i = 0; i < R; i++) {
//         for (int j = 0; j < C; j++) {
//             for (int k = 0; k < C; k++) {
//                 res[i][j] += (arr1[i][k] * arr2[k][j]);
//             }
//         }
//     }



//     for (int i = 0; i < R; i++) {
//         for (int j = 0; j < C; j++) {
//             printf("%d ", res[i][j]);
//         }
//         printf("\n");
//     }
// }
//--------------------------------------------------------------------------------------------------------------------

// int main() {
//     int arr1[3][3] ={{1, 2, 3}, 
//                     {4, 5, 6}, 
//                     {7, 8, 9}
//                     };
//     int arr2[3][3];

//     // for (int i = 0; i < 2; i++) {
//     //     for (int j = 0; j < 2; j++) {
//     //         arr2[j][2-1-i] = arr1[i][j];
//     //     }
//     // }


//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             arr2[j][3-1-i] = arr1[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             arr2[3-1-j][i] = arr1[i][j];
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }
    // for (int i = 0; i < 2; i++) {
    //     for (int j = i; j < 2; j++) {
    //         int temp = arr1[i][j];
    //         arr1[i][j] = arr1[j][i];
    //         arr1[j][i] = temp;
    //     }
    // }



    // // for (int i = 0; i < 2; i++) {
    // //     for (int j = 0; j < 2; j++) {
    // //         printf("%d ", arr1[i][j]);
    // //     }
    // //     printf("\n");
    // // }

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2/2; j++) {
    //         int temp = arr1[i][j];
    //         arr1[i][j] = arr1[i][2-j-1];
    //         arr1[i][2-j-1] = temp;
    //     }
    // }


    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");
    // }


    // for (int i = 0; i < 2; i++) {
    //     for (int j = i; j < 2; j++) {
    //         int temp = arr1[i][j];
    //         arr1[i][j] = arr1[j][i];
    //         arr1[j][i] = temp;
    //     }
    // }

    // for (int i = 0; i < 2/2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         int temp = arr1[i][j];
    //         arr1[i][j] = arr1[2-1-i][j];
    //         arr1[2-1-i][j] = temp;
    //     }
    // }


    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d ", arr1[i][j]);
    //     }
    //     printf("\n");
    // }
// }

