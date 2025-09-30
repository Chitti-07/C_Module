#include<stdio.h>
#include <stdbool.h>
// int main() {
    // int num;
    // scanf("%d", &num);
    // if (! (num & 1)) {
    //     printf("Number is even\n");
    // }else {
    //     printf("Number is odd\n");
    // }
//----------------------------------------------------------------------------------------------------------
    // int num = 15;
    // int n = 4;
    // int pos = 2;

    // unsigned mask = num & ((1 << n) - 1) << pos;
    // printf("%d\n", mask);
    // printf("%d", mask >> pos);
//----------------------------------------------------------------------------------------------------------
    // int num = 0xa;
    // int Leftshift;
    // unsigned RightShift;
    // for (int i = 0; i < 32; i++) {
    //     RightShift = ((num>>i) & 1);
    //     printf("%d", RightShift);
    // }
    // printf("\n");
    // for (int i = 31; i >= 0; i--) {
    //     RightShift = ((num>>i) & 1);
    //     printf("%d", RightShift);
    // }
    // printf("\n");

    // for (int i = 0; i < 32; i++) {
    //     Leftshift = ((num<<i) & 1<<31);
    //     if (Leftshift == 0) {
    //         printf("%d", 0);
    //     }else {
    //         printf("%d", 1);
    //     }
    // }
    // printf("\n");
    // for (int i = 31; i >= 0; i--) {
    //     Leftshift = ((num<<i) & 1<<31);
    //     if (Leftshift == 0) {
    //         printf("%d", 0);
    //     }else {
    //         printf("%d", 1);
    //     }
    // }
//----------------------------------------------------------------------------------------------------------

    // int num = 0xf2a;
    // unsigned set;
    // int count = 0;
    // for (int i = 0; i < 32; i++) {
    //     set = (num & (1<<i));
    //     if (set > 0) {
    //         count++;
    //     }
    //     printf("%d", set);
    // }
    // printf("\n");
    // printf("The binary of %d has %d set bits", num, count);
//----------------------------------------------------------------------------------------------------------

    // int num = 10;
    // unsigned set;
    // int count = 0;
    // for (int i = 31; i >= 0; i--) {
    //     set = (num & (1<<i));
    //     if (set != 0) {
    //         break;
    //     }
    //     count++;
    // }
    // printf("The binary of %d has %d no.of leading zero bits", num, count);
//----------------------------------------------------------------------------------------------------------
    // int num = 32;
    // unsigned set;
    // int count = 0;
    // for (int i = 0; i < 32; i++) {
    //     set = (num>>i & 1);
    //     if (set != 0) {
    //         break;
    //     }
    //     count++;
    // }
    // printf("The binary of %d has %d no.of trailing zero bits", num, count);
//----------------------------------------------------------------------------------------------------------

    // int num = 32;
    // unsigned set;
    // int flag = 0;
    // for (int i = 0; i < 32; i++) {
    //     set = (num & (1<<i));
    //     if (set == num) {
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 1) {
    //     printf("The number %d is a 2's power", num);
    // }else {
    //     printf("The number %d is not a 2's power", num);
    // }

    // if ((num & (num-1)) == (num - 1)) {
    //     printf("hsfg");
    // }else {
    //     printf("sdfsf");
    // }
//----------------------------------------------------------------------------------------------------------

    // char ch;
    // scanf("%hhx", &ch);
    // char mask1 = 0;
    // unsigned char mask2 = 0;
    
    // mask1 = (ch & 0x0f) << 4;
    // // mask1 = mask1 << 4;
    // mask2 = (ch & 0xf0) >> 4;
    // // mask2 = mask2 >> 4;
    // ch = mask1 | mask2;

    // printf("%hhx", ch);
//----------------------------------------------------------------------------------------------------------

//     int num = 10;
//     int pos1 = 1;
//     int pos2 = 4;
//     int mask1 = 0;
//     unsigned mask2 = 0;

//     mask1 = (num & (1<<pos1))<<(pos2-pos1);
//     mask2 = (num & (1<<pos2))>>(pos2-pos1);

//     if (mask1 == 0) {
//         num = num & (~(1<<pos2));
//         num = num | mask2;
//     }
//     if (mask2 == 0) {
//         num = num & (~(1<<pos1));
//         num = num | mask1;
//     }
//     printf("%d\n", num);
//     printf("%d\n", mask1);
//     printf("%d", mask2);
    // int x = 1, y;

    // int a, b, c, d, e, f;
    // a = 3, b=3, c=2, d=3, e=2, f=11;

    //printf("%d", a-b || (a-b*c) + d && e - f % 3);
    // printf("%d %d %d", a, ++a, a++);
    // for (int x=0;++x;){
    //     printf("H");
    // }
    // char i;
    // for (i = 'a'; i <= 127; i++) {
    //     printf("A\n");
    // }
// }
//----------------------------------------------------------------------------------------------------------

// #include<stdio.h>
// int main() {
//     unsigned int num;
//     scanf("%x", &num);
    
//     int count = 0;
    
//     for (int i = 0; i < 32; i++) {
//         if ((num & (1<<i)) > 0) {
//             count++;
//         }
//     }
//     return count;
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     unsigned int num;
//     scanf("%x", &num);
    
//     for (int i = 31; i >= 0; i--) {
//         if ((num & (1<<i)) == 0) {
//             printf("0");
//         }else {
//             printf("1");
//         }
//     }
// }
//----------------------------------------------------------------------------------------------------------

// int is_prime(int num) {
//     int i;
//     if (num == 0) return 0;
//     for (i = 2; i*i <= num; i++) {
//         if (num % i == 0) {
//             break;
//         }
//     }
//     if (i*i <= num) {
//         return 0;
//     }else {
//         return 1;
//     }
// }

// void generate_prime(int num) {
//     int i;
//     for (i = 2; i <= num; i++) {
//         if (is_prime(i)) {
//             printf("%d", i);
//         }
//     }
// }

// int main()
// {
//     int limit;
    
//     printf("Enter the limit: ");
//     scanf("%d", &limit);
    
//     if (limit > 1)
//     {
//         generate_prime(limit);
//     }
//     else
//     {
//         printf("Invalid input\n");
//     }
    
//     return 0;
// }

//----------------------------------------------------------------------------------------------------------

// void squeeze(char str1[], char str2[]) {
//     int i, j;
//     int index = 0;
//     for (i = 0; str1[i]; i++) {
//         if (str2[index] == str1[i]) {
//             for (j = i; str1[j]; j++) {
//                 str1[j] = str1[j+1];
//             }
//             index++;
//         }
//     }
// }

// int main()
// {
//     char str1[30], str2[30];
    
//     printf("Enter string1:");
//     scanf("%[^\n]", str1);
    

//     printf("Enter string2:");
//     scanf("%[^\n]", str2);
    
//     squeeze(str1, str2);
    
//     printf("After squeeze s1 : %s\n", str1);
    
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     unsigned int num = 10;
//     // int n = 3;
//     // if (((num >> n) & 1)) {
//     //     printf("set\n");
//     // }else {
//     //     printf("Clear\n");
//     // }

    
//     for (int i = 0; i < 32; i++) {

//     }
// }

//----------------------------------------------------------------------------------------------------------


// int main() {
//     int num;
//     scanf("%d", &num);

//     int size = (sizeof(num) * 8) - 1;
//     unsigned int lsb = num & 1;
//     unsigned int msb = (num >> size) & 1;

//     num = (num & ~(1 << 0)) | (msb << 0); 
//     num = (num & ~(1 << 31)) | (lsb << size);

//     printf("%d\n", num);
// }



// int isPrime(int num) {
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int isPalindrome(int num) {
//     int reverse = 0, original = num;
//     while (num > 0) {
//         reverse = reverse * 10 + (num % 10);
//         num /= 10;
//     }
//     return reverse == original ? 1 : 0;
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i) && isPalindrome(i)) {
//             printf("%d\n", i);
//         }
//     }
// }
// int main() {
//     char name[10];
//     scanf("%[^\n]", name);

//     int len = -1;
//     while (name[++len]);

//     int s = 0;
//     int e = len - 1;

//     while (s < e) {
//         char temp = name[s];
//         name[s] = name[e];
//         name[e] = temp;
//         s++;
//         e--;
//     }

//     printf("%s", name);
// }


// #include <stdio.h>

// void swapBytes(unsigned int* num) {
//     *num =  ((*num & 0xFF000000) >> 24) | 
//            ((*num & 0x00FF0000) >> 8) | 
//            ((*num & 0x0000FF00) << 8) | 
//            ((*num & 0x000000FF) << 24);
// }

// int main() {
//     unsigned int num = 0x12345678;
//     printf("Original: 0x%X\n", num);
//     swapBytes(&num);
//     printf("Swapped Bytes: 0x%X\n", num);
//     printf("%x", num);
//     return 0;
// }

//helloworld
//world
char* mystr(char* M, char* S) {
    for (int i = 0; M[i]; i++) {
        if (M[i] == S[0]) {
            int j;
            for (j = 0; S[j]; j++) {
                if (M[i+j] != S[j]) {
                    break;
                }
            }
            if (!S[j]) {
                return &M[i];
            }
        }
    }
    return 0;
}

int main() {
    if (mystr("helloled", "le")) {
        printf("Hooo\n");
    }else {
        printf("HAAAA\n");
    }
    char* M = "helloled";
    char* S = "le";
    printf("%s", mystr(M, S));
}

// #include <stdio.h>

// // User-defined strstr function
// char* my_strstr(char* mainStr, char* subStr) {
//     if (*subStr == '\0') {
//         return 0; // If subStr is empty, return the entire mainStr
//     }

//     while (*mainStr) {
//         char* m = mainStr;
//         char* s = subStr;

//         while (*m && *s && (*m == *s)) {
//             m++;
//             s++;
//         }

//         if (*s == '\0') {
//             return (char*)mainStr; // Found the substring
//         }

//         mainStr++;
//     }

//     return NULL; // Substring not found
// }

// int main() {
//      char* mainStr = "Hello, worled!";
//      char* subStr = "le";

//     char* result = my_strstr(mainStr, subStr);

//     if (result) {
//         printf("Substring found: %s\n", result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return 0;
// }