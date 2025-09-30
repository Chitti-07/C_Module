#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// int main() {
//     int size;
//     scanf("%d", &size);

//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < size; i++) {
//         int duplicate = 0;
//         for (int j = 0; j < i; j++) {
//             if (arr[i] == arr[j]) {
//                 duplicate = 1;
//                 break;
//             }
//         }
//         if (duplicate == 0) {
//             printf("%d ", arr[i]);
//         }
//     }

//     printf("\nUnique: ");

//     for (int i = 0; i < size; i++) {
//         int unique = 0;
//         for (int j = 0; j < size; j++) {
//             if (i == j) {
//                 continue;
//             }
//             else if (arr[i] == arr[j]) {
//                 unique = 1;
//                 break;
//             }
//         }
//         if (unique == 0) {
//             printf("%d ", arr[i]);
//         }
//     }
// }

// void findlen(char* str) {
//     int wordstart = -1;
//     int wordlen = 0;
//     int i = 0;

//     while (str[i]) {
//         if (str[i] == ' ') {
//             if (wordstart != -1) {
//                 for (int j = wordstart; j < i; j++) {
//                     printf("%c", str[j]);
//                 }
//                 printf(" length: %d\n", wordlen);
//                 wordlen = 0;
//                 wordstart = -1;
//             }
//         }else {
//             if (wordstart == -1) {
//                 wordstart = i;
//             }
//             wordlen++;
//         }
//         i++;
//     }
//     for (int j = wordstart; j < i; j++) {
//                 printf("%c", str[j]);
//             }
//             printf(" length: %d", wordlen);
// }

//------------------------------------------------------------------------------------------
// void reverse(char* str, int start, int end) {
//     while (start <= end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }
// void wordreverse(char* str) {
//     int wordstart = -1;
//     int wordlen = 0;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] == ' ') {
//             if (wordlen != 0) {
//                 reverse(str, wordstart, wordlen+wordstart-1);
//             }
//             wordlen = 0;
//             wordstart = -1;
//         }else {
//             if (wordstart == -1) {
//                 wordstart = i;
//             }
//             wordlen++;
//         }
//         i++;
//     }
//     reverse(str, wordstart, wordlen+wordstart-1);
// }
// void upperlower(char* str, int start, int end) {
//     int i = 0;
//     for (i = start; i < end; i+=2) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             continue;
//         }else {
//             str[i] -= 32;
//         }
//     }
// }
// void alterupperlower(char* str) {
//     int wordstart = -1;
//     int wordlen = 0;
//     int i = 0;
//     while (str[i]) {
//         if (str[i] == ' ') {
//             if (wordlen != 0) {
//                 upperlower(str, wordstart, wordstart+wordlen);
//             }
//             wordlen = 0;
//             wordstart = -1;
//         }else {
//             if (wordstart == -1) {
//                 wordstart = i;
//             }
//             wordlen++;
//         }
//         i++;
//     }
//     upperlower(str, wordstart, wordstart+wordlen);
// }
// int main() {
//     char str[50] = "hey india bgmi is great";
//     // findlen(str);
//     reverse(str, 0, strlen(str)-1);
//     printf("%s\n", str);
//     wordreverse(str);
//     // alterupperlower(str);
//     printf("%s", str);

//     int arr[3] = {1, 2, 3};
// }
//------------------------------------------------------------------------------------------

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

    // int large = arr[0];
    // int small = arr[0];

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] > large) {
    //         large = arr[i];
    //     }else if (arr[i] < small) {
    //         small = arr[i];
    //     }
    // }

    // printf("%d %d\n", large, small);
    // int secS = large;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (arr[j] > small && arr[j] < secS) {
    //             secS = arr[j];
    //         }
    //     }
    //     printf("%d ", small);
    //     small = secS;
    //     secS = large;
    // }
    // printf("\n");

    //printf("%d %d\n", large, small);
//-----------------------------------------------------------------------------------
    // int large = arr[0] > arr[1] ? arr[0] : arr[1];
    // int secL = arr[0] < arr[1] ? arr[0] : arr[1];

    // printf("%d %d\n", large, secL);
    // for (int i = 2; i < n; i++) {
    //     if (arr[i] > large) {
    //         secL = large;
    //         large = arr[i];
    //     }else if (arr[i] > secL) {
    //         secL = arr[i];
    //     }
    // }
    // printf("%d", secL);
//-----------------------------------------------------------------------------------

//     int small = arr[0] < arr[1] ? arr[0] : arr[1];
//     int Secsmall = arr[0] < arr[1] ? arr[1] : arr[0];

//     for (int i = 2; i < n; i++) {
//         if (arr[i] < small) {
//             Secsmall = small;
//             small = arr[i];
//         }else if (arr[i] < Secsmall) {
//             Secsmall = arr[i];
//         }
//     }
//     printf("%d", Secsmall);
// }

//-----------------------------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>

// void reverse_word(char *start, char *end) {
//     while (start < end) {
//         char temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// void reverse_each_word(char *str) {
//     char *start = str, *end = str;
//     reverse_word(start, (end + (strlen(str) - 1)));
//     while (*end) {
//         if (*end == ' ' || *(end + 1) == '\0') {
//             reverse_word(start, (*end == ' ') ? (end - 1) : end);
//             start = end + 1;
//         }
//         end++;
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';  // Remove newline

//     reverse_each_word(str);

//     printf("Reversed words: %s\n", str);

//     return 0;
// }

//-----------------------------------------------------------------------------------


// #include <stdio.h>
// #include <string.h>

// void reverse(char *start, char *end) {
//     while (start < end) {
//         char temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// void reverseSentence(char *str) {
//     int len = strlen(str);
//     reverse(str, str + len - 1);  // Step 1: Reverse the entire string

//     char *word_start = str, *temp = str;

//     while (*temp) {
//         if (*temp == ' ' || *(temp + 1) == '\0') {  
//             reverse(word_start, (*temp == ' ') ? temp - 1 : temp);  // Step 2: Reverse each word
//             word_start = temp + 1;
//         }
//         temp++;
//     }
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';  // Remove newline

//     reverseSentence(str);

//     printf("Reversed sentence: %s\n", str);

//     return 0;
// }

//-----------------------------------------------------------------------------------

// #include <stdio.h>

// void removeSubstring(char *str, char *sub) {
//     int i, j, k, found = 0;
//     int lenStr = 0, lenSub = 0;

//     // Calculate lengths manually
//     while (str[lenStr] != '\0') lenStr++;
//     while (sub[lenSub] != '\0') lenSub++;

//     // Search for substring in main string
//     for (i = 0; i <= lenStr - lenSub; i++) {
//         found = 1;
//         for (j = 0; j < lenSub; j++) {
//             if (str[i + j] != sub[j]) {
//                 found = 0;
//                 break;
//             }
//         }

//         // If substring is found, shift characters
//         if (found) {
//             for (k = i; k <= lenStr - lenSub; k++) {
//                 str[k] = str[k + lenSub];
//             }
//             lenStr -= lenSub;
//             i--;  // Check again in case of multiple occurrences
//         }
//     }
// }

// int main() {
//     char str[20] = "helloworld hello";
//     char sub[10] = "hell";

//     removeSubstring(str, sub);

//     printf("Modified string: %s\n", str);
//     return 0;
// }

//-----------------------------------------------------------------------------------

// int main() {
//     char* str = "hello how are 1234567";

//     int currlen = 0, maxlen = 0;

//     while (*str) {
//         if (*str == ' ' || *str == '\t' || *str == '\n') {
//             if (currlen > maxlen) {
//                 maxlen = currlen;
//             }
//             currlen = 0;
//         }else {
//             currlen++;
//         }
//         str++;
//     }
//     if (currlen > maxlen) {
//         maxlen = currlen;
//     }
//     printf("%d", maxlen);
// }


//-----------------------------------------------------------------------------------


// int main() {
//     int arr[10] = {1, 0, 2, 0, 3, 0, 4, 0, 5, 0};
//     int res[10] = {0};
//     int ind = 0;
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] != 0) {
//             res[ind++] = arr[i];
//         }
//     }

//     for (int i = 0; i < 10; i++) {
//         printf("%d ", res[i]);
//     }
// }

//-----------------------------------------------------------------------------------

// int main() {
//     int nums[10] = {0};
//     char str[30];
//     scanf("%[^\n]", str);
    
//     for (int i = 0; str[i]; i++) {
//         if ((str[i] - '0' >= 0) && str[i] - '0' <= 9) {
//             nums[str[i] - '0']++;
//         }
//     }

//     for (int i = 0; i < 10; i++) {
//         printf("%d ", nums[i]);
//     }
// }

//-----------------------------------------------------------------------------------

//int main() {
//     int arr[3][3] = {1, 2, 3, 
//                     4, 5, 6, 
//                     9, 8, 7};
    
//     int i, j;
//     int max, min;
//     for (i = 0; i < 3; i++) {
//         min = arr[i][0];
//         int col = 0;
//         for (j = 0; j < 3; j++) {
//             if (arr[i][j] < min) {
//                 min = arr[i][j];
//                 col = j;
//             }
//         }

//         max = -1;
//         for (j = 0; j < 3; j++) {
//             if (arr[j][col] > max) {
//                 max = arr[j][col];
//                 //printf("%d %d\n", i, j);
//             }
//         }
//         if (min == max) {
//             printf("%d %d\n", i, col);
//             printf("%d", arr[i][col]);
//             break;
//         }
//     }
//     //printf("%d", max);
// }

//-----------------------------------------------------------------------------------

// void rotateClock(int r1, int c1, int arr1[][c1], int r2, int c2, int arr2[][c2]) {
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             arr2[j][r1 - i - 1] = arr1[i][j];
//         }
//     }

//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             //arr2[j][r1 - i - 1] = arr1[i][j];
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");

//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c1; j++) {
//             arr2[c1 - j - 1][i] = arr1[i][j];
//         }
//     }

//     for (int i = 0; i < r2; i++) {
//         for (int j = 0; j < c2; j++) {
//             //arr2[j][r1 - i - 1] = arr1[i][j];
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }

// }

// int main() {
//     int arr1[2][3] = {1, 2, 3, 
//                       4, 5, 6};
//     int arr2[3][2];
//     rotateClock(2, 3, arr1, 3, 2, arr2);
// }

//-----------------------------------------------------------------------------------

// int main() {
//     char* str[] = {"hi", "cat", "dog", "ant", "buff", "Ant"};
//     int size = (sizeof(str)/sizeof(str[0]));
//     printf("%d", size);

//     for (int i = 0; i < size; i++) {
//         printf("%s ", str[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (strcmp(str[j], str[j+1]) > 0) {
//                 char* temp = str[j];
//                 str[j] = str[j+1];
//                 str[j+1] = temp;
//             }
//         }
//     }

//     //char str[][20] = {"hi", "cat", "dog", "ant", "buff", "Ant"};
//     // for (int i = 0; i < size - 1; i++) {
//     //     for (int j = 0; j < size - i - 1; j++) {
//     //         if (strcmp(str[j], str[j+1]) > 0) {
//     //             char temp[20];
//     //             strcpy(temp, str[j]);
//     //             strcpy(str[j], str[j+1]);
//     //             strcpy(str[j+1], temp);
//     //         }
//     //     }
//     // }

//     for (int i = 0; i < size; i++) {
//         printf("%s ", str[i]);
//     }
// }
//-----------------------------------------------------------------------------------

// int main() {
//     int arr[8] = {10, 9, 2, 5, 3, 7, 101, 18};

//     int max = 0;
//     for (int i = 0; i < 8; i++) {
//         int seq = 0;
//         for (int j = i + 1; j < 8; j++) {
//             if (arr[i] < arr[j]) {
//                 seq++;
//             }
//         }
//         if (seq > max) {
//             max = seq;
//         }
//     }

//     printf("%d ", max);
// }

//-----------------------------------------------------------------------------------
// Helper function to check if a substring is a palindrome
// bool isPalindrome(const char *s, int left, int right) {
//     while (left < right) {
//         if (s[left] != s[right]) {
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// // Function to check if the string can be a palindrome by removing at most one character
// bool canBePalindrome(const char *s) {
//     int left = 0;
//     int right = strlen(s) - 1;

//     while (left < right) {
//         if (s[left] != s[right]) {
//             // Try removing either the left or the right character
//             return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
//         }
//         left++;
//         right--;
//     }
//     return true;
// }

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     scanf("%s", str);

//     if (canBePalindrome(str)) {
//         printf("The string can be converted into a palindrome by removing at most one character.\n");
//     } else {
//         printf("The string cannot be converted into a palindrome by removing at most one character.\n");
//     }

//     return 0;
// }
//-----------------------------------------------------------------------------------
// void fun(int* aa) {
//     int a = 10;
//     *aa = (int*)&a;
// }
// #include <stdio.h>

// int main() {
    // unsigned int x = 0xabcdef12;
    // char* ch = &x;
    // if (ch == 0xab) {
    //     printf("Big");
    // }else {
    //     printf("Little");
    // }
    

// }

#include <stdio.h>

// #define ROWS 2
// #define COLS 3

void rotateClockwise(int ROWS, int COLS, int arr[][COLS], int mat[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[j][ROWS - 1 - i] = arr[i][j];
        }
    }
}

void rotateCounterclockwise(int ROWS, int COLS, int arr[][COLS], int mat[COLS][ROWS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            mat[COLS - 1 - j][i] = arr[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {

    printf("%lu", sizeof((void*)0));
    int ROWS, COLS;
    scanf("%d %d", &ROWS, &COLS);
    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    //getchar();
    int matClockwise[COLS][ROWS];
    int matCounterclockwise[COLS][ROWS];


    printf("Original Matrix:\n");
    printMatrix(ROWS, COLS, arr);

    rotateClockwise(ROWS, COLS, arr, matClockwise);
    printf("\n90° Clockwise Rotated Matrix:\n");
    printMatrix(COLS, ROWS, matClockwise);

    rotateCounterclockwise(ROWS, COLS, arr, matCounterclockwise);
    printf("\n90° Counterclockwise Rotated Matrix:\n");
    printMatrix(COLS, ROWS, matCounterclockwise);

    return 0;
}

// void reverse(char* s, char* e) {
//     if (s >= e) {
//         return;
//     }
//     char temp = *s;
//     *s = *e;
//     *e = temp;
//     reverse(s+1, e-1);
// }

// int main() {
//     char str[20] = "hii hello";
//     reverse(str, str+(strlen(str) - 1));
//     printf("%s", str);
// }
