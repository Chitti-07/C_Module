#include<stdio.h>
#include<stdlib.h>
// void scan_arr(int *ptr, int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%c", &ptr[i]);
//     }
// }
// void print_arr(int *ptr, int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%c", ptr[i]);
//     }
// }
int main() {
    // int size;
    // scanf("%d", &size);
    void* ptr = malloc(8);
    
    char *cptr = (char*) ptr;
    cptr[0] = 'c';

    float *fptr = (float*) (ptr + 4);
    *fptr = 12.34f;

    printf("%c %f", cptr[0], *fptr);
    // scan_arr(ptr, size);
    // print_arr(ptr, size);
}