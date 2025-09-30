#include<stdio.h>

union findSys {
    // int x;
    char ch;
    int x;
};

int main() {
    union findSys var = {.x = 0x1234};
    if (var.ch == 0x12) {
        printf("Big Endian\n");
    }else {
        printf("Littel Endian\n");
    }
    printf("%x", var.ch);
}
