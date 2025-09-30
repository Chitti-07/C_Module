#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
#include <stdarg.h>


// char* fancy(char str[]) {
//     int i, j = 0;
//     for (i = 0; str[i]; i++) {
//         if (i > 1 && str[i] == str[j-1] && str[i] == str[j-2]) {
//             continue;
//         }else {
//             str[j++] = str[i];

//         }
//     }
//     str[j] = 0;
//     return str;
// }

// int main() {
//     char str[100] = "leeetcode";
//     printf("%s", fancy(str));
// }
//---------------------------------------------------------------------------------------------------------
// int searchInsert(int* nums, int numsSize, int target) {
//     int flag = 0;
//     int index = -1;
//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] == target) {
//             flag = 1;
//             return i;
//             break;
//         }
//     }
//     numsSize += 1;
//     for (int i = 0; i < numsSize; i++) {
//         if (target >= nums[i]) {
//             continue;
//         }else {
//             index = i;
//         }
//     }
//     for (int i = numsSize-1; i >= index; i--) {
//         nums[i] = nums[i-1];
//     }
//     nums[index] = target;
// 	for (int i = 0; i < numsSize; i++) {
// 		printf("%d ", nums[i]);
// 	}
// 	printf("\n");
//     return index;

// }

// int main() {
//     int nums[] = {1,3,5,6};
//     int target = 2;
//     int size = 4;
//     printf("%d", searchInsert(nums, size, target));
// }
//---------------------------------------------------------------------------------------------------------
// int isPalindrome(char* s) {
//     int len = strlen(s);
    
//     for (int i = 0; s[i]; i++) {
//         if (s[i] >= 'A' && s[i] <= 'Z') {
//             s[i] += 32;
//         }
//         if (!(isalnum(s[i]))) {
//             for (int j = i; s[j]; j++) {
//                 s[j] = s[j+1];
//             }
//             s[len] = 0;
//             len--;
//             i--;
//         }
//     }
//     int start = 0;
//     int end = len-1;

//     while(start <= end) {
//         if(s[start] != s[end]) {
//             return 0;
//         }else {
//             start++;
//             end--;
//         }
//     }
//     return 1;
// }

// int main() {
//     char s[50] = "A man, a plan, a canal: Panama";
//     printf("%s\n", s);
//     printf("%d\n", isPalindrome(s));
//     printf("%s", s);
// }
//---------------------------------------------------------------------------------------------------------
// void swap(void *a, void *b, int size){
//         char temp;
//         for(int i=0;i<size;i++){
//             temp = *((char*)a+i);
//             *((char*)a+i) = *((char*)b+i);
//             *((char*)b+i) = temp;
//         }
//     }

//     int main(){
//         float a =1.2;
//         float b = 2.2;
    
//         int c= 10;
//         int d = 20;

//         char e = 'e';
//         char f = 'f';

//         swap(&c,&d,sizeof(c));
//         swap(&a, &b,sizeof(a));
//         swap(&e, &f,sizeof(e));

//         printf("%f %f\n",a,b);
//         printf("%d %d\n",c,d);
//         printf("%c %c\n",e,f);
//     }

//---------------------------------------------------------------------------------------------------------
//Removing 1st and last character from each word
// void getback(char str[], int s, int e) {
// 	int i;
// 	for (i = s; i < e - 1; i++) {
// 		str[i] = str[i+1];
// 	}
// 	str[i] = 0;
// }

// void reverse(char str[]) {
// 	int s = 0;
// 	int e = -1;
// 	while (str[++e]);
// 	getback(str, s, e);
// 	for (int i = 0; i < e - 1; i++) {
// 		if (str[i] == ' ') {
// 			getback(str, i-1, e--);
//             i += 1;
// 			getback(str, i + 1, e--);
// 			e--;
// 		}
// 	}
// 	str[e-1] = 0;
// 	printf("%s\n", str);

// }

// int main() {
// 	char str[20] = "chitti  babu";
// 	reverse(str);
// 	printf("%s", str);
// }



// #include <stdio.h>
// #include <string.h>

// void removeFirstAndLast(char str[]) {
//     int len = strlen(str);
//     int wordStart = -1;
//     int newIndex = 0;

//     for (int i = 0; i <= len; i++) {  // Use `<= len` to include the null terminator
//         // Check for space or end of string
//         if (str[i] == ' ' || str[i] == '\0') {
//             if (wordStart != -1) {
//                 // If the word length is more than 2, remove the first and last characters
//                 if (i - wordStart > 2) {
//                     for (int j = wordStart + 1; j < i - 1; j++) {  // Skip the first and last characters
//                         str[newIndex++] = str[j];
//                     }
//                     str[newIndex++] = ' ';  // Add a space after the word
//                 }
//                 wordStart = -1; // Reset for the next word
//             }
//         } else {
//             if (wordStart == -1) {
//                 wordStart = i;  // Mark the start of the word
//             }
//         }
//     }

//     // Remove the trailing space if it exists
//     // if (newIndex > 0 && str[newIndex - 1] == ' ') {
//     //     newIndex--;
//     // }

//     str[newIndex] = '\0';  // Null-terminate the modified string
// }

// int main() {
//     char str[100] = "chitti   babu";
//     printf("Original string: %s\n", str);
//     removeFirstAndLast(str);
//     printf("Modified string: %s\n", str);
//     return 0;
// }


//---------------------------------------------------------------------------------------------------------
//Binary to decimal

// void BinaryToDecimanl(char str[]) {
// 	int dec = 0;
// 	int p = 0;
// 	int len = -1;
// 	while (str[++len]);
// 	for (int i = len - 1; str[i]; i--) {
// 		if (str[i] == '0' || str[i] == '1') {
// 			dec += ((str[i]-48)* pow(2, p++));
// 		}else {
// 			break;
// 		}
// 	}
// 	printf("%d\n", dec);
// }

//---------------------------------------------------------------------------------------------------------
// int MyAtoI(char str[]) {
// 	int i;
// 	int num = 0;
// 	for (i = 0; str[i]; i++) {
// 		num = num * 10 + (str[i]-48);
// 	}
// 	return num;
// }
// void DecimalToHexadecimanl(int num) {
// 	char hex[32];
// 	int i = 0;
// 	while (num != 0) {
// 		int rem = num % 16;
// 		if (rem <= 9) {
// 			hex[i++] = rem + 48;
// 		}else {
// 			hex[i++] = rem + 55;
// 		}
// 		num /= 16;
// 	}       
// 	hex[i] = 0;
// 	printf("%s", hex);
// }
// void BinaryToDec(int num) {
// 	int dec = 0, p = 0;
// 	while (num > 0) {
// 		int rem = num % 10;
// 		num /= 10;
// 		dec += rem * pow(2, p++);
// 	}
// 	printf("%d", dec);
// }
// int main() {
// 	// char str[] = "26";
// 	// int num = 1010;
// 	// str[3] = num;
// 	// printf("%s", str);
// 	// BinaryToDecimanl(str);
// 	// BinaryToDec(num);
// 	DecimalToHexadecimanl(894);
// }
//---------------------------------------------------------------------------------------------------------
//Printing 1st and last characters

// void PrintFirstAndLast(char str[]) {
// 	int len = -1;
// 	while (str[++len]);
// 	char new[50];
// 	int ind = 0;
// 	new[ind++] = str[0];
// 	for (int i = 0; str[i]; i++) {
// 		if (str[i] == ' ') {
// 			new[ind++] = str[i-1];
// 			new[ind++] = str[i];
// 			new[ind++] = str[i+1];
// 		}
// 	}
// 	new[ind++] = str[len - 1];
// 	new[ind] = 0;
// 	printf("%s\n", new);
// }
// void removeChar(char str[], int s, int e) {
// 	int i;
// 	for (i = s; i < e-1; i++) {
// 		str[i] = str[i+1];
// 	}
// 	str[i] = 0;
// }
// void removeSpecial(char str[]) {
// 	int len = -1;
// 	while (str[++len]);
// 	int i;
// 	for (i = 0; str[i]; i++) {
// 		if (! ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
// 			removeChar(str, i, len);
// 			i--;
// 		}
// 	}
// 	printf("%s", str);
// }
// int main() {
// 	char str1[20] = "chitti babu ganji";
// 	char str2[30] = "chitti123 @babu ganji./com";
// 	PrintFirstAndLast(str1);
// 	removeSpecial(str2);
// }

//---------------------------------------------------------------------------------------------------------

// void removeEle(int nums[], int s, int e) {
//     int i = 0; 
//     for (i = s; i < e - 1 ; i++) {
//         nums[i] = nums[i+1];
//     }
// 	nums[i] = 0;
// }

// int removeElement(int* nums, int numsSize, int val) {
//     int i;
//     for (i = 0; i < numsSize - 1; i++) {
//         if (nums[i] == val) {
//             removeEle(nums, i, numsSize);
// 			numsSize--;
//         }
//     }
// 	return numsSize-1;
// }
// int main() {
// 	int arr[5] = {3, 2, 2, 3};
// 	int size = removeElement(arr, 5, 3);
// 	for (int i = 0; i < 5; i++) {
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	printf("%d", size);
// }

//---------------------------------------------------------------------------------------------------------
// void removeD(char str[], int s, int e) {
//     int i;
//     for (i = s; i < e - 1; i++) {
//         str[i] = str[i+1];
//     }
//     str[i] = 0;
// }

// char* removeDuplicateLetters(char* s) {
//     int len = strlen(s);
//     int i, j;

//     for (i = 0; s[i]; i++) {
//         for (j = i+1; s[j]; j++) {
//             if (s[i] == s[j]) {
//                 removeD(s, j, len--);
// 				j--;
//             }
//         }
//     }
//     return s;
// }

// int main() {
// 	char str[] = "cbacdcbc";
// 	removeDuplicateLetters(str);
// 	printf("%s", str);
// }
//---------------------------------------------------------------------------------------------------------
// void shuffle(char *str, int *arr, int size) {
//     char new[size+1];
//     for (int i = 0; i < size; i++) {
//         new[arr[i]] = str[i];
//     }
//     new[size] = 0;
//     printf("%s\n", new);
// }
// int main() {
//     char str[] = "codeleet";
//     int arr[] = {4,5,6,7,0,2,1,3};
//     int len = sizeof(arr)/sizeof(arr[0]);
    
//     shuffle(str, arr, len);
//     printf("%s", str);
// }

//---------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>

// // Function to print all combinations
// void printCombinations(char str[], int index, char output[], int outIndex) {
//     if (index == strlen(str)) {
//         if (outIndex > 0) {  // Print only non-empty combinations
//             output[outIndex] = '\0';
//             printf("%s\n", output);
//         }
//         return;
//     }

//     // Include the current character
//     output[outIndex] = str[index];
//     printCombinations(str, index + 1, output, outIndex + 1);

//     // Exclude the current character
//     printCombinations(str, index + 1, output, outIndex);
// }

// int main() {
//     char str[] = "abc";
//     char output[10];  // Temporary array to store combinations

//     printf("Combinations of \"%s\":\n", str);
//     printCombinations(str, 0, output, 0);

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------

// #include <stdio.h>

// int fibonacci(int n) {
//     if (n == 0) return 0;
//     if (n == 1) return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int num;
//     printf("Enter the number of terms: ");
//     scanf("%d", &num);

//     printf("Fibonacci Series: ");
//     for (int i = 0; i < num; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// typedef struct {
//     unsigned int low : 4;  // Lower 4 bits (nibble)
//     unsigned int high : 4; // Higher 4 bits (nibble)
// } NibbleSwap;

// int main() {
//     unsigned char hex;
    
//     printf("Enter the hexa-decimal value: ");
//     scanf("%hhx", &hex);  // Read as hexadecimal

//     NibbleSwap *ptr = (NibbleSwap *)&hex;  // Treat `hex` as bit field structure

//     // Swap nibbles using bit fields
//     unsigned char swapped = (ptr->low << 4) | ptr->high;

//     printf("After swap nibble: %02X\n", swapped);

//     return 0;
// }


// #include <stdio.h>

// union SwapNumbers {
//     int a;
//     int b;
// };

// void swap(union SwapNumbers *x, union SwapNumbers *y) {
//     x->a = x->a + y->a;
//     y->a = x->a - y->a;
//     x->a = x->a - y->a;
// }

// int main() {
//     union SwapNumbers num1, num2;

//     num1.a = 10;
//     num2.a = 20;

//     printf("Before swapping: num1 = %d, num2 = %d\n", num1.a, num2.a);

//     swap(&num1, &num2);

//     printf("After swapping: num1 = %d, num2 = %d\n", num1.a, num2.a);

//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeFirstAndLastChar(char *str) {
    int len = strlen(str);
    char result[len];  
    int index = 0, start = 0, end, i;

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;  
            if (end > start) { 
                for (int j = start + 1; j < end; j++) {
                    result[index++] = str[j];  
                }
                if (str[i] == ' ') result[index++] = ' ';
            }
            start = i + 1;  
        }
    }

    result[index] = '\0'; 
    printf("Modified String: %s\n", result);
}

int main() {
    char str[] = "hello world this is C";
    printf("Original String: %s\n", str);
    removeFirstAndLastChar(str);
    return 0;
}
