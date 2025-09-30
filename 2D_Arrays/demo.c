#include <stdio.h>
int main() {
    // int arr[] = {};
    // printf("%lu", sizeof(arr));

    // unsigned char c = 9;
    // c = 9 - 134;

    // printf("%d", sizeof(5));

    int arr[5] = {1, 2, 3, 4, 5};
    int (*ptr)[5] = &arr;

    for (int i = 0; i < 5; i++) {
        printf("%d %lu\n", (*ptr)[i], sizeof(ptr));
    }
}