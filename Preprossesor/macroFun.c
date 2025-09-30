#include<stdio.h>
#include <stdlib.h>
#include <stdlib.h>
// //Largest of 3 numbers
// // #define MAX_OF_THREE(a, b, c)  a > b && a > c ? a : (b > c ? b : c)

// // int main() {
// //     if (sizeof(void*) == 4) {
// //         printf("This is a 32-bit system.\n");
// //     } else if (sizeof(void*) == 8) {
// //         printf("This is a 64-bit system.\n");
// //     } else {
// //         printf("Unknown bitness.\n");
// //     }
// //     return 0;
// // }
// //--------------------------------------------------------------------------------------------------------------
// // int main() {
// //     #if __SIZEOF_POINTER__ == 8
// //         printf("This is a 64-bit system.\n");
// //     #elif __SIZEOF_POINTER__ == 4
// //         printf("This is a 32-bit system.\n");
// //     #else
// //         printf("Unknown bitness.\n");
// //     #endif

// //     return 0;
// // }
// //--------------------------------------------------------------------------------------------------------------
// // #include <stdio.h>
// // #define SIZEOF(num) ((char*)(&num+1) - (char*)(&num))

// // int main() {
// //     int i;
// //     printf("Size of int : %lu bytes\n", SIZEOF(i));
// //     char ch;
// //     printf("Size of char : %lu bytes\n", SIZEOF(ch));
// //     float f;
// //     printf("Size of float : %lu bytes\n", SIZEOF(f));
// //     double d;
// //     printf("Size of double : %lu bytes\n", SIZEOF(d));
// //     unsigned int uint;
// //     printf("Size of unsigned int : %lu bytes\n", SIZEOF(uint));
// //     short int s;
// //     printf("Size of short int : %lu bytes\n", SIZEOF(s));
// //     long int l;
// //     printf("Size of long int : %lu bytes\n", SIZEOF(l));
// // }
// //--------------------------------------------------------------------------------------------------------------

// // #define SWAP(type, a, b) {\
// //     type temp = a; \
// //     a = b; \
// //     b = temp; \
// // } 

// // int main() {
// //     int opt;
// //     printf("1. Int\n2. char\n3. short\n4. float\n5. double\n6. string\nEnter you choice : ");
// //     scanf("%d", &opt);

// //     int num1, num2;
// //     char ch1,  ch2;
// //     short s1, s2;
// //     float f1, f2;
// //     double d1, d2;
// //     char* str1 = malloc(20);
// //     char* str2 = malloc(20);

// //     getchar();
// //     switch (opt) {
// //         case 1:
// //             printf("Enter num1: ");
// //             scanf("%d", &num1);
// //             printf("Enter num2: ");
// //             scanf("%d", &num2);
// //             SWAP(int, num1, num2);
// //             printf("Num1: %d\n", num1);
// //             printf("Num2: %d", num2);
// //             break;
// //         case 2:
// //             printf("Enter ch1: ");
// //             scanf("%c", &ch1);
// //             getchar();
// //             printf("Enter ch2: ");
// //             scanf("%c", &ch2);
// //             SWAP(char, ch1, ch2);
// //             printf("ch1: %c\n", ch1);
// //             printf("ch2: %c", ch2);

// //             break;
// //         case 3:
// //             printf("Enter short1: ");
// //             scanf("%hd", &s1);
// //             printf("Enter short2: ");
// //             scanf("%hd", &s2);
// //             SWAP(short, s1, s2);
// //             printf("Num1: %hd\n", s1);
// //             printf("Num2: %hd", s2);
// //             break;
// //         case 4:
// //             printf("Enter num1: ");
// //             scanf("%f", &f1);
// //             printf("Enter num2: ");
// //             scanf("%f", &f2);
// //             SWAP(float, f1, f2);
// //             printf("Num1: %f\n", f1);
// //             printf("Num2: %f", f2);
// //             break;
// //         case 5:
// //             printf("Enter num1: ");
// //             scanf("%lf", &d1);
// //             printf("Enter num2: ");
// //             scanf("%lf", &d2);
// //             SWAP(double, d1, d2);
// //             printf("Num1: %lf\n", d1);
// //             printf("Num2: %lf", d2);
// //             break;
// //         case 6:

// //             printf("Enter str1: ");
// //             scanf("%[^\n]", str1);
// //             getchar();
// //             printf("Enter str2: ");
// //             scanf("%[^\n]", str2);
// //             SWAP(char*, str1, str2);
// //             printf("Num1: %s\n", str1);
// //             printf("Num2: %s", str2);
// //             break;
// //     }
// // }



// #include <stdio.h>

// int main() {
//     // int a, b, c, middle;

//     // printf("Enter three numbers: ");
//     // scanf("%d %d %d", &a, &b, &c);

//     // middle = (a > b && a < c) || (a > c && a < b) ? a : (b > a && b < c) || (b > c && b < a) ? b : c;

//     // printf("The middle number is: %d\n", middle);

//     // return 0;
//     // int size;
//     // scanf("%d", &size);
//     // // int arr[size];
//     // printf("%lu", sizeof(size + 1.2));

//     int x;
//     scanf("%d", &x);
//     printf("%d", x);
//     int *ptr = &x;
//     printf("%lu\n", sizeof(ptr));
//     printf("%lu\n", sizeof(*ptr));
//     printf("%lu\n", sizeof(x));
//     printf("%lu\n", sizeof(&x));
// }


//--------------------------------------------------------------------------------------------------------------

// #include <stdio.h>

// // Function to convert binary to decimal
// int binaryToDecimal(long long binary) {
//     int decimal = 0, base = 1, rem;
    
//     while (binary > 0) {
//         rem = binary % 10;
//         decimal += rem * base;
//         base *= 2;
//         binary /= 10;
//     }
//     return decimal;
// }

// // Function to convert decimal to binary
// long long decimalToBinary(int decimal) {
//     long long binary = 0;
//     int base = 1;
    
//     while (decimal > 0) {
//         binary += (decimal % 2) * base;
//         decimal /= 2;
//         base *= 10;
//     }
//     return binary;
// }

// // Function to convert decimal to octal
// int decimalToOctal(int decimal) {
//     int octal = 0, base = 1;
    
//     while (decimal > 0) {
//         octal += (decimal % 8) * base;
//         decimal /= 8;
//         base *= 10;
//     }
//     return octal;
// }

// // Function to convert decimal to hexadecimal
// void decimalToHexadecimal(int decimal) {
//     char hex[20];
//     int i = 0;

//     while (decimal > 0) {
//         int rem = decimal % 16;
//         hex[i++] = (rem < 10) ? (rem + '0') : (rem - 10 + 'A');
//         decimal /= 16;
//     }

//     printf("Hexadecimal: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%c", hex[j]);
//     }
//     printf("\n");
// }

// int main() {
//     int choice, decimal;
//     long long binary;

//     printf("Choose conversion type:\n");
//     printf("1. Binary to Decimal\n2. Decimal to Binary\n3. Decimal to Octal\n4. Decimal to Hexadecimal\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             printf("Enter binary number: ");
//             scanf("%lld", &binary);
//             printf("Decimal: %d\n", binaryToDecimal(binary));
//             break;
//         case 2:
//             printf("Enter decimal number: ");
//             scanf("%d", &decimal);
//             printf("Binary: %lld\n", decimalToBinary(decimal));
//             break;
//         case 3:
//             printf("Enter decimal number: ");
//             scanf("%d", &decimal);
//             printf("Octal: %d\n", decimalToOctal(decimal));
//             break;
//         case 4:
//             printf("Enter decimal number: ");
//             scanf("%d", &decimal);
//             decimalToHexadecimal(decimal);
//             break;
//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------

int main() {
    int x = 10;
    int y = 20;

    const int* ptr1 = &x;
    const int* ptr2 = &y;

    const int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("%d %d", *ptr1, *ptr2);
}