#include <stdio.h>

void LtoB (int type, void* num1) {
    char temp;
    int start = 0;
    int end = type - 1;

    while (start < end) {
        temp = *((char*)(num1+start));
        *((char*)(num1+start)) = *((char*)(num1+end));
        *((char*)(num1+end)) = temp;
        start++;
        end--;
    }
}
int main() {
    
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int hex;
    printf("Enter any number in Hexadecimal: ");
    scanf("%X", &hex);

    LtoB(size, &hex);

    printf("After conversion %X", hex);
}