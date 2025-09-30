#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int main() {
//     unsigned int x = 0xabcdef12;
//     char* ptr = &x;

//     // char temp = *ptr;
//     // *ptr = *(ptr + 3);
//     // *(ptr + 3) = temp;
//     // printf("%x\n", x);

//     for (int i = 0; i < 2; i++) {
//         char temp = ptr[i];
//         ptr[i] = ptr[3-i];
//         ptr[3-i] = temp;
//     }

//     printf("%x\n", x);

//     printf("%x", ((x & 0x0000ff) << 2) | ((x & 0xff0000) >> 2));
// }

//----------------------------------------------------------------------------------------------------

// int main() {
//     unsigned int x = 0xabcdef; // Original number

//     // Extract nibbles
//     unsigned int ab = (x & 0xFF0000) >> 16; // Extract 'ab' (bits 16-23)
//     unsigned int cd = (x & 0x00FF00);  // Extract 'cd' (bits 8-15)
//     unsigned int ef = x & 0x0000FF;         // Extract 'ef' (bits 0-7)

//     // Swap 'ab' with 'ef'
//     unsigned int result = (ef << 16) | (cd) | ab;

//     // Print the result
//     printf("Original: 0x%x\n", x);
//     printf("After swapping 'ab' with 'ef': 0x%x\n", result);

//     return 0;
// }

//----------------------------------------------------------------------------------------------------

// unsigned int rotateLeft(unsigned int x, int n) {
//     return (x << n) | (x >> (32 - n));
// }

// unsigned int rotateRight(unsigned int x, int n) {
//     return (x >> n) | (x << (32 - n));
// }

// int main() {
//     unsigned int x = 0x12345678;
//     int n = 16;
//     printf("Original: 0x%x\n", x);
//     printf("After rotating left by %d bits: 0x%x\n", n, rotateLeft(x, n));
//     printf("After rotating right by %d bits: 0x%x\n", n, rotateRight(x, n));
//     return 0;
// }

//----------------------------------------------------------------------------------------------------

#define SWAP16(x)  (((x) >> 8) | ((x) << 8));
#define SWAP32(x)  (((x) >> 24) | (((x) & 0x00FF0000) >> 8) | \
                    (((x) & 0x0000FF00) << 8) | ((x) << 24))


void swapNum(void* n1, void* n2, int size) {
    char* p = (char*)n1;
    char* q = (char*)n2;
    for (int i = 0; i < size; i++) {
        char temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}

void swap2Bytes(unsigned int* num) {
    unsigned short* sptr = (unsigned short*)num;
    int s = 0;
    int e = 1;
    while (s < e) {
        unsigned short temp = sptr[s];
        sptr[s] = sptr[e];
        sptr[e] = temp;
        s++;
        e--;
    }
}

void Endianess1(void* num, int size) {
    char* ch = (char*)num;
    int s = 0;
    int e = size-1;
    while (s < e) {
        char temp = ch[s];
        ch[s] = ch[e];
        ch[e] = temp;
        s++;
        e--;
    }
}


void Endianess2(unsigned int* num) {

    *num = ((*num & 0xff000000) >> 24) | ((*num & 0x00ff0000) >> 8) | ((*num & 0x0000ff00) << 8) | ((*num & 0x000000ff) << 24);
}

// void Endianess3(unsigned int* num) {
//     char change[4];
//     for (int i = 0; i < 4; i++) {
//         change[3-i] = (*num >> (8*i)) & 0xFF;
//     }
// }

unsigned int reverseBits(unsigned int num) {
    unsigned int rev = 0;
    for (int i = 0; i < 32; i++) {
        rev = (rev << 1) | (num & 1);
        (num) >>= 1;
    }
    return rev;
}



void rotateright(unsigned int* num, int left) {
    *num = (*num << left) | (*num >> (32-left));
}

void rotateLeft(unsigned int* num, int right) {
    *num = (*num >> right) | (*num << (32 - right));
}

//int num = 99;
int main() {
    //extern unsigned int num; 
    //printf("%d\n", num);
    printf("%lu\n", sizeof(void));
    printf("%lu\n", sizeof(void*));
    unsigned int num = 0x12345678;
    printf("%x\n", num);
    int n1 = 10;
    int n2 = 20;


    Endianess2(&num);
    printf("%x\n", num);
                   
    Endianess1(&num, sizeof(int));
    printf("%x\n", num);

    Endianess3(&num);
    printf("%x\n", num);

    // num = ((num & 0xffff0000) >> 16) | ((num & 0x0000ffff) << 16);
    // printf("%x\n", num);


    swap2Bytes(&num);
    swap2Bytes(&num);
    printf("%x\n", num);

    printf("Before swap %d %d\n", n1, n2);
    swapNum(&n1, &n2, sizeof(int));
    printf("After swap %d %d\n", n1, n2);

    // num = reverseBits(num);
    // printf("%x\n", num);

    rotateright(&num, 4);
    printf("%x\n", num);

    rotateLeft(&num, 4);
    printf("%x\n", num);

    printf("%x\n", SWAP32(num));

    if (~0 == (unsigned int)-1) {
        printf("%d %u", ~0, (unsigned int)-1);
    }else {
        printf("%d", ~1);
    }

}
//----------------------------------------------------------------------------------------------------

