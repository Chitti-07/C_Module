#include<stdio.h>
//Sorting the array using pointers

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int* Sorting(int arr[], int size) {
//     for (int i = 0; i < size-1; i++) {
//         for (int j = 0; j < size-i-1; j++) {
//             if (arr[j] > arr[j+1]) {

//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
        
//     }
//     return arr;
// }

// void Scan_Array(int /* (*ptr) --> */ ptr[] /* More redability */, int size) {
//     for (int i = 0; i < size; i++) {
//         // scanf("%d", ptr+i);
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_Array(int /* (*ptr)--> */ ptr[]/* More readability */, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", ptr[i]);
//     }
// }


// int main() {
//     int size = 0;
//     scanf("%d", &size);
    
//     int arr[size];
//     Scan_Array(arr, size);

//     printf("Array before the Sorting :");
//     Print_Array(arr, size);
    
//     Sorting(arr, size);
//     printf("\n");
//     printf("Array After the Sorting :");
//     Print_Array(arr, size);

// }

//----------------------------------------------------------------------------------------------------------

// void modify(int a, int b, int* sum, int* prod) {
//     *sum = a + b;
//     *prod = a * b;
// }

// int main() {
//     int a = 1;
//     int b = 2;
//     int sum = 0;
//     int prod = 0;
//     modify(a, b, &sum, &prod);
//     printf("%d\n%d ", sum, prod);
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     float age;
//     printf("Enter the age: ");
//     scanf("%f", &age);
    
//     float *fptr = &age;
//     *fptr += 20;
//     printf("Age after increasing by 20 is %g", *fptr);
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     int x = 10;
//     char *cptr = &x;
    
//     if (*cptr == x) {
//         printf("Ours is a big endian");
//     }else {
//         printf("Ours is a little endian");
//     }
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     int arr[5];
//     int *ptr = arr;
//     for (int i = 0; i < 5; i++) {
//         // scanf("%d", &arr[i]);
//         // scanf("%d", i+arr);
//         scanf("%d", ptr+i);
//     }

//     for (int i = 0; i < 5; i++) {
//         // printf("%d", *(i+arr));
//         // printf("%d", i[arr]);
//         // printf("%d ", *(i+arr));
//         printf("%d ", ptr[i]);
//         // printf("%d ", i[ptr]);
//     }
// }
//----------------------------------------------------------------------------------------------------------

// void Scan_Array(int /* (*ptr) --> */ ptr[] /* More redability */, int size) {
//     for (int i = 0; i < size; i++) {
//         // scanf("%d", ptr+i);
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_Array(int /* (*ptr)--> */ ptr[]/* More readability */, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", ptr[i]);
//     }
// }

// int main (){

//     int size = 0;
//     scanf("%d", &size);
    
//     int arr[size];
//     Scan_Array(arr, size);
//     Print_Array(arr, size);
// }

//----------------------------------------------------------------------------------------------------------

// void Scan_Array(int /* (*ptr) --> */ ptr[] /* More redability */, int size) {
//     for (int i = 0; i < size; i++) {
//         // scanf("%d", ptr+i);
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_Array(int /* (*ptr)--> */ ptr[]/* More readability */, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", ptr[i]);
//     }
// }

// float Avg(int ptr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++){
//         sum += ptr[i];
//     }
//     return (float)sum/size;
// }

// int main (){

//     int size = 0;
//     scanf("%d", &size);
    
//     int arr[size];
//     Scan_Array(arr, size);
//     Print_Array(arr, size);
//     // float avg = ;
//     printf("\n");
//     printf("Average of the array is %g", Avg(arr, size));
// }

//----------------------------------------------------------------------------------------------------------

// void Scan_Array(int /* (*ptr) --> */ ptr[] /* More redability */, int size) {
//     for (int i = 0; i < size; i++) {
//         // scanf("%d", ptr+i);
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_Array(int /* (*ptr)--> */ ptr[]/* More readability */, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", ptr[i]);
//     }
// }

// void Square_ele(int ptr[], int size) {
//     for (int i = 0; i < size; i++) {
//         ptr[i] *= ptr[i];
//     }
// }

// int main() {
//     int size = 0;
//     scanf("%d", &size);
    
//     int arr[size];
//     Scan_Array(arr, size);
//     printf("Array before the modification :");
//     Print_Array(arr, size);
//     Square_ele(arr, size);
    // printf("\n");
    // printf("Array After the modification :");
    // Print_Array(arr, size);
// }
//----------------------------------------------------------------------------------------------------------

// void Sort_without_Manup(int ptr[], int size){
//     int max = ptr[0];
//     int min = ptr[0];
//     for (int i = 0; i < size; i++){
//         if (ptr[i] > max) {
//             max = i;
//         }else if(ptr[i] < min) {
//             min = i;
//         }
//     }

//     // printf("%d %d", min, max);
//     int large = ptr[max];
//     int small = ptr[min];
//     int sec_small = large;
//     for (int i = 0; i < size; i++){
//         printf("%d", small);
//         for (int j = 0; j < size; j++){
//             if (ptr[j] > small && ptr[j] < sec_small) {
//                 sec_small = ptr[j];
//             }
//             // small = sec_small;
//             // sec_small = large;
//         }
//         small = sec_small;
//         sec_small = large;
//         // printf("%d", small);
//     }

// }

// void Print_Array(int /* (*ptr)--> */ ptr[]/* More readability */, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", ptr[i]);
//     }
// }

// int main() {
//     int arr[5] = {3, 4, 6, 2, 1};
//     Sort_without_Manup(arr, 5);
//     Print_Array(arr, 5);
// }
//----------------------------------------------------------------------------------------------------------

// int Second_Large(int ptr[], int size) {
//     int large = 0;
//     int secLarge = 0;

//     if (ptr[0] > ptr[1]) {
//         large = ptr[0];
//         secLarge = ptr[1];
//     }else {
//         large = ptr[1];
//         secLarge = ptr[0];
//     }

//     for (int i = 2; i < size; i++) {
//         if (ptr[i] > large) {
//             secLarge = large;
//             large = ptr[i];
//         }else if (ptr[i] > secLarge) {
//             secLarge = ptr[i];
//         }
//     }
//     return secLarge;
// }

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &ptr[i]);
//     }
// }

// int main () {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     Scan_arr(arr, size);
//     printf("%d", Second_Large(arr, size));
    
// }

//----------------------------------------------------------------------------------------------------------

// int Second_Large(int ptr[], int size) {
//     int large = ptr[0];
//     int secLarge = ptr[0];

//     // if (ptr[0] > ptr[1]) {
//     //     large = ptr[0];
//     //     secLarge = ptr[1];
//     // }else {
//     //     large = ptr[1];
//     //     secLarge = ptr[0];
//     // }

//     for (int i = 1; i < size; i++) {
//         if (ptr[i] > large) {
//             secLarge = large;
//             large = ptr[i];
//         }else if (ptr[i] > secLarge) {
//             secLarge = ptr[i];
//         }
//     }
//     return secLarge;
// }

// int Third_Large(int ptr[], int size, int secLarge) {
//     int thirdLarge = ptr[0];
//     for (int i = 0; i < size; i++){
//         if (ptr[i] > thirdLarge && ptr[i] < secLarge) {
//             thirdLarge = ptr[i];
//         }
//     }
//     return thirdLarge;
// }

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &ptr[i]);
//     }
// }

// int main () {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     Scan_arr(arr, size);
//     int secLarge = Second_Large(arr, size);
//     printf("%d ", secLarge);
//     // int thirdLarge = Third_Large(arr, size, secLarge);
//     // printf("%d ", thirdLarge);
    
// }
//----------------------------------------------------------------------------------------------------------

// int Third_Large(int ptr[], int size) {
//     int large = ptr[0];
//     int secLarge = ptr[0];

//     if (ptr[0] > ptr[1]) {
//         large = ptr[0];
//         secLarge = ptr[1];
//     }else {
//         large = ptr[1];
//         secLarge = ptr[0];
//     }
//     int thirdLarge = 0;
//     for (int i = 2; i < size; i++) {
        
        
//         if (ptr[i] > large) {
//             thirdLarge = secLarge;
//             secLarge = large;
//             large = ptr[i];
//         }else if (ptr[i] > secLarge && ptr[i] < large) {
//             thirdLarge = secLarge;
//             secLarge = ptr[i];
//         }else if (ptr[i] > thirdLarge &&  ptr[i] < secLarge) {
//             thirdLarge = ptr[i];
//         }
//     }
//     return thirdLarge;
// }

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &ptr[i]);
//     }
// }

// int main () {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     Scan_arr(arr, size);

//     printf("%d", Third_Large(arr, size));
    
// }
//----------------------------------------------------------------------------------------------------------

// void SortArr(int arr[], int size) {
//     int small = arr[0];
//     int large = arr[0];
//     int i;

//     for (i = 0; i < size; i++) {
//         if (arr[i] > large) {
//             large = arr[i];
//         }
//     }

//     for (i = 0; i < size; i++) {
//         if (arr[i] < small) {
//             small = arr[i];
//         }
//     }

    
//     printf("%d %d\n", small, large);
//     int secSmall = large;
//     for (i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             if (arr[j] > small && arr[j] < secSmall) {
                
//                 secSmall = arr[j];
//             }
//         }
//         printf("%d", small);
//         small = secSmall;
//         secSmall = large;
        
//     }

// }

// void ScanArr (int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
// }

// int main(){
//     int size;
//     scanf("%d", &size);
//     int arr[size];
//     ScanArr(arr, size);
//     SortArr(arr, size);
// }
//----------------------------------------------------------------------------------------------------------
#include <stdio.h>
// void moveZeroes(int arr[], int n) {
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             arr[j] = arr[i];
//             if (i != j) arr[i] = 0;
//             j++;
//         }
//     }
// }
void moveZeroes(int arr[], int n) {
    int j = n-1;
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            if (i != j) arr[i] = 0;
            j--;
        }
    }
}
int main() {
    int arr[] = {0, 1, 9, 0, 3, 12};
    moveZeroes(arr, 6);
    for (int i = 0; i < 6; i++) printf("%d ", arr[i]);
    return 0;
}
