#include<stdio.h>
#include<stdarg.h>

// int Asc(int a, int b) {
//     return a > b;
// }

// int Dsc(int a, int b) {
//     return a < b;
// }
// void swap(int *a, int *b) {
//     int temp = *a; 
//     *a = *b;
//     *b = temp;
// }

// void qSort(int arr[], int size, int (*fptr)(int, int)) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (fptr(arr[j], arr[j+1])) {
//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     int arr[10] = {3, 5, 2, 9, 5};
//     qSort(arr, 5, Asc);
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     qSort(arr, 5, Dsc);
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
// }
//------------------------------------------------
//Variadic function

int fun1(int a, ... ) {
    
    va_list(ap);
    va_start(ap, a);
    int sum = 0;
    while (a) {
        sum += va_arg(ap, int);
        a--;
    }
    va_end(ap);
    return sum;
}

int main() {
    printf("%d", fun1(3, 1, 2, 3));
}