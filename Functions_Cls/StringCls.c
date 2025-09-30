#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// int main () {

    // char str[100];
    // scanf(" %[^\n]", str);
    // int count, i = 0;
    // while (str[i] != 0) {
    //     count++;
    //     i++;
    // }
    // printf("The length of the string is %d", count);
//------------------------------------------------------------------------------------------------------------------
    //Check whether the character is present or not 

    // char str[100];
    // printf("Enter the String: ");
    // scanf("%[^\n]", str);

    // getchar();

    // char ch;
    // printf("Enter the Character: ");
    // scanf("%c", &ch);

    // int i, flag = 0;
    // while (str[i] != 0) {
    //     if (str[i] == ch) {
    //         flag = 1;
    //         break;
    //     }
    //     i++;
    // }

    // flag = 0? printf("Character is not present int the string ") : printf("Character is present int the string ");

//------------------------------------------------------------------------------------------------------------------
    //Counting vowels in the string 

    // char str[100];
    // printf("Enter the String: ");
    // scanf(" %[^\n]", str);

    // int count, i = 0;
    // while (str[i] != 0) {
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
    //         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

    //             count++;
    //     }  
    //     i++;
    // }
    // printf("The length of the string is %d", count);
//------------------------------------------------------------------------------------------------------------------
    // char str1[100];
    // printf("Enter the String: ");
    // scanf(" %[^\n]", str1);

    // char str2[100];
    // printf("Enter the Vowels: ");
    // scanf(" %[^\n]", str2);
    // int vCount = 0;
    // for (int i = 0; str1[i] != 0; i++){
    //     int j = 0;
    //     while (str2[j] != 0) {
    //         if(str1[i] == str2[j]) {
    //             vCount++;
    //         }
    //         j++;
    //     }
    // }

    // printf("Vowels count in the entered String is %d", vCount);
//------------------------------------------------------------------------------------------------------------------
    //Palindrome or not

//     char str[100];
//     printf("Enter the String: ");
//     scanf(" %[^\n]", str);
//     int length, i = 0;
//     while (str[i] != 0) {
//         length++;
//         i++;
//     }
//     int start = 0;
//     int end = length - 1;
//     int p = 0;
//     while (start <= end) {
//         if (str[start] != str[end]) {
//             p = 1;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (p == 0) {
//         printf("Palindrome");
//     }else {
//         printf("Not a Palindrome");
//     }
// }
    // printf("%d", p);
//------------------------------------------------------------------------------------------------------------------
    //Removing a character from a String 

//     char str[100];
//     printf("Enter the String: ");
//     scanf(" %[^\n]", str);

//     char ch;
//     printf("Enter the Character: ");
//     scanf(" %c", &ch);

//     int i = 0;
//     while (str[i] != 0) {
//         if (str[i] == ch) {
//             int j = i;
//             while (str[j] != 0) {
//                 str[j] = str[j+1];
//                 j++;
//             }
//             i--;
//         }
//         i++;
//     }

//     printf("%s", str);

// }
//------------------------------------------------------------------------------------------------------------------
    //Passing String to the function to get the length of the String excluding null character

    // int Str_leng(char str[]) {
    //     // int i, len = 0;
    //     int i = 0;
    //     // while (str[i] != 0) {
    //     while (str[i++]) {
    //     }
    //     // return len;
    //     return i - 1;
    //     //As it is also cinsidering the null character, we have to eleminate that null count 
    // }

    // int main () {
        // char str[100];
        // printf("Enter the String: ");
        // scanf(" %[^\n]", str);

    //     printf("The length of the String is %d", Str_leng(str));
        
    // }

//------------------------------------------------------------------------------------------------------------------
//Finding the frequency of a characters in a string 
// void Char_Freq(char str[]) {
//     int count[256] = {0};
//     int len = 0;

//     //Finding the length of the string
//     while (str[len] != 0) {
//         len++;
//     }

//     //Finding the occurence of a character in a string
//     for (int i = 0; i < len; i++){
//         count[(int) str[i]]++;
//     }

//     //Printing the count of occurence of a character
//     for (int i = 0; i < len; i++) {
//         //if (count[(int)str[i]] != 0) {
//             printf("The character %c appearce %d times\n", str[i], count[(int)str[i]]);
//             // printf("%c", str[i]);
//             //Avoids printing the same character again
//             count[(int)str[i]] = 0;
//         //}
//     }


// } 


// int main(){
//     char str[100];
//     printf("Enter the String: ");
//     scanf(" %[^\n]", str);

//     Char_Freq(str);
// }

//------------------------------------------------------------------------------------------------------------------
//Check whether the character is present in a String or not 
// char* My_StrChr(char str[], char ch) {
//     int i = 0;
//     for (i = 0; str[i] != 0; i++) {
//         if (str[i] == ch) {
//             return &str[i];
//         }
//     }
//     return NULL;
// }

// int main() {
//     char str[] = "chitti";
//     char ch = 'a';
//     if (!My_StrChr(str, ch)) {
//         printf("n");
//     }else {
//         printf("s");
//     }

//     printf("%lu", My_StrChr(str, ch));
    
// }
//------------------------------------------------------------------------------------------------------------------

// void Remove_Duplicate(int arr1[], int size1, int arr2[], int* new_size) {
//     int i, j = 0;
//     arr2[0] = arr1[0];
//     for (i = 0; i < size1; i++) {
//         int flag = 0;
//         for (j = 0; j < *new_size; j++){
//             if (arr1[i] == arr2[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             // *(new_size + 1);
//             arr2[((*new_size)++)] = arr1[i];
//             //  (*new_size)++;
//         }
//     }

// }

// void Print_Fun(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d", arr[i]);
//     }
// }

// void Scan_Fun(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
// }



// int main() {
//     int size1;
//     printf("Enter the size1 : ");
//     scanf("%d", &size1);

//     int arr1[size1];
//     printf("Enter the elements: ");
//     Scan_Fun(arr1, size1);

//     int new_size = 1;
//     int arr2[size1];

//     Remove_Duplicate(arr1, size1, arr2, &new_size);
//     // printf("%d", new_size);
//     Print_Fun(arr2, new_size);
// }

//------------------------------------------------------------------------------------------------------------------
//Eleminating the strings present in another string
// int main() {
//     char str1[100];
//     printf("Enter the String1: ");
//     scanf(" %[^\n]", str1);

//     char str2[100];
//     printf("Enter the String2: ");
//     scanf(" %[^\n]", str2);

//     int i, j, k;
    
//     // for (i = 0; str2[i] != 0; i++) {
//     //     j = 0;
//     //     while (str1[j] != 0) {
//     //         if (str1[j] == str2[i]) {
//     //             for (k = j; str1[k] != 0; k++) {
//     //                 str1[k] = str1[k + 1];
//     //             }
//     //         } else {
//     //             j++;
//     //         }
//     //     }
//     // }
//     while (str2[i]) {
//         j = 0;
//         while (str1[j]) {
//             if (str1[j] == str2[i]) {
//                 for (k = j; str1[k]; k++) {
//                     str1[k] = str1[k+1];
//                 }
//                 i++;
//             }else {
//                 j++;
//             }
//         }
//     }

//     printf("Resultant String: %s\n", str1);
// }
//------------------------------------------------------------------------------------------------------------------
//User define function of strstr
// char* My_StrStr(char* mainArr, char* subArr) {
//     if (subArr == 0) {
//         return mainArr;
//     }

//     for (int i = 0; mainArr[i] != 0; i++) {

//         if (mainArr[i] == subArr[0]) {
//             int j;
//             int flag = 0;
//             for (j = 0; subArr[j] != 0; j++) {
                
//                 if (mainArr[i+j] != subArr[j]) {
//                     flag = 1;
//                     break;
//                 }
//             }
//             if (flag == 0) {
//                 return &mainArr[i];
//             }
//         }
//     }
//     return NULL;
// }


// int main() {

//     char str1[256] = "bgmi is good";
//     // printf("Enter the String1: ");
//     // scanf(" %[^\n]", str1);

//     char str2[256] = "good";
//     // printf("Enter the String2: ");
//     // scanf(" %[^\n]", str2);

//     printf("%s", My_StrStr(str1, str2)); 
// }

//------------------------------------------------------------------------------------------------------------------
//Reversing the String, using functions

// void swapStr(char* a, char* b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void Reverse_String(char *str) {
//     int length = -1;
//     while (str[++length] != 0);

//     int start = 0;
//     int end = length - 1;
    
//     while (start <= end) {
//         swapStr(&str[start++], &str[end--]);
//         // start++;
//         // end--;
//     }
// }

// int main() {

//     char str[256] = "hello";

//     Reverse_String(str);
//     printf("%s\n", str);
// }

//------------------------------------------------------------------------------------------------------------------

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

//------------------------------------------------------------------------------------------------------------------
//Finding Vowels and consonants by passing them inbuiltly

// void CharCount(char* str, char* Vstr) {
//     int i, j, Vcount, Ccount = 0;
    // while (str[i]) {
    //     if ((str[i] >=65 && str[i] <= 90) || (str[i] >=97 && str[i] <= 122)) {
    //         int j;
    //         int flag = 0;
    //         for (j  = 0; str[j] != 0; j++) {
    //             if (str[i] == Vstr[j]) {
    //                 Vcount++;
    //                 flag = 1;
    //             }
    //         }
    //         if (flag == 0) {
    //             Ccount++;
    //         }
    //     }
    //     i++;
    // }


//     while (str[i]) {
//         j = 0;
//         int vowel = 0;
//         while (Vstr[j]) {
//             if (str[i] == Vstr[j]) {
//                 vowel = 1;
//                 break;
//             }
//             j++;
//         }
//         if (vowel == 0) {
//             Ccount++;
//         }else {
//             Vcount++;
//         }
//         i++;
//     }
//     printf("%d \n%d", Vcount, Ccount);
// }

// int main() {
//     char str[256] = "Hello";
//     char Vstr[256] = "aeiouAEIOU";
//     CharCount(str, Vstr);
// }
//------------------------------------------------------------------------------------------------------------------
//Weighted String

// void WeightedString(char* str1, char* str2) {
//     int count1, count2, i = 0;

//     while (str1[i]) {
//         count1 += (int)str1[i];
//         i++;
//     }
//     i = 0;

//     while (str2[i]) {
//         count2 += (int)str2[i];
//         i++;
//     }

//     int c = count1 > count2 ? printf("String 1 is greater") : printf("String 1 is greater") ;

// }

// int main () {
//     char str1[256] = "hello";
//     char str2[256] = "HELLOHOW";
//     WeightedString(str1, str2);
// }
//------------------------------------------------------------------------------------------------------------------

// int AllVowels(char* str) {
//     int a, e, i, o, u, j = 0;

//     while (str[j]) {
//         char ch = str[j];

//         if (ch >= 'A' && ch <= 'Z') {
//             ch += 32;
//         }

//         if (ch == 'a'){
//             a = 1;
//         } 
         
//         if (ch == 'e'){
//             e = 1;
//         } 
//         if (ch == 'i'){
//             i = 1;
//         } 
//         if (ch == 'o'){
//             o = 1;
//         } 
//         if (ch == 'u'){
//             u = 1;
//         } 

//         if (a && e && i && o && u) {
//             return 1;
//         }
//         j++;

//     }
//     return (a && e && i && o && u);
// }

// int main() {
//     char str[256] = "Education";

//     if (AllVowels(str)) {
//         printf("All vowels are present");
//     }else {
//         printf("All vowels are not present");
//     }
//     printf("\n");
//     printf("%s", str);
// }
//------------------------------------------------------------------------------------------------------------------
//Count no.of words ina string
// int WordCount(char* str) {
//     int i, count = 0;
//     while (str[i]) {
//         char ch = str[i];
//         if ((ch == ' ' || ch == '\t')) {
//             count++;
//         }
//         i++;
//     }
//     return count+1;
// }

// int main () {
//     char str[256] = "hey hello how are you";
//     printf("%d", WordCount(str));
// }
//------------------------------------------------------------------------------------------------------------------

// int AllVowels(char* str) {
//     char vowels[256] = "AEIOU";
//     int flag;
//     if (str == 0) {
//         return 0;
//     }
//     for (int i = 0; vowels[i]; i++) {
//         flag = 0;
//         for (int j = 0; str[j]; j++) {
//             if (vowels[i] == str[j] || vowels[i]+32 == str[j] || vowels[i]-32 == str[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             return 0;
//         }
//      
//     }
//
//     return 1;
// }

// int main() {
//     char str[256] = "AaEeIiOoUu";
//     if (AllVowels(str)) {
//         printf("All vowels are present");
//     }else {
//         printf("All vowels are not present");
//     }
// }
//------------------------------------------------------------------------------------------------------------------

// char* LowerToUpper(char* str) {
//     int i = 0;
//     while (str[i]) {
//         char ch = str[i];
//         if (ch >= 'a' && ch <= 'z') {
//             ch -= 32;
//             str[i] = ch;
//         }
//         i++;
//     }
    
//     return str;


//     // for (int i = 0; str[i]; i++) {
//     //     char ch = str[i];
//     //     if (ch >= 'a' && ch <= 'z') {
//     //         ch -= 32;
//     //         str[i] = ch;
//     //     }
//     // }
//     // return str;
// }

// int main() {
//     char str[256] = "chitti";
//     // LowerToUpper(str);
//     printf("%s", LowerToUpper(str));
//     // LowerToUpper(str)
// }
//------------------------------------------------------------------------------------------------------------------
//Check Anagram
// int AnagramCheck(char* str1, char* str2) {
//     int len1, len2= -1;
//     int i, j = 0; 
//     int flag;

//     while(str1[++len1]);
//     while(str2[++len2]);

//     if (len1 != len2)  {
//         return 0;
//     }

//     for (i = 0; i < str1[i]; i++) {
//         flag = 0;
//         for (j = 0; j < str2[j]; j++) {
//             if (str1[i] == str2[j] || str1[i]-32== str2[j] || str1[i]+32 == str2[j]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             return 0;
//         }
//     }

//     // for (i = 0; i < str2[i]; i++) {
//     //     flag = 0;
//     //     for (j = 0; j < str1[j]; j++) {
//     //         if (str2[i] == str1[j] || str2[i]-32== str1[j] || str2[i]+32 == str1[j]) {
//     //             flag = 1;
//     //             break;
//     //         }
//     //     }
//     //     if (flag == 0) {
//     //         return 0;
//     //     }
//     // }
//     return 1;   
// }

// int main() {
//     char str1[256];
//     char str2[256];

//     printf("Enter the String1: ");
//     scanf(" %[^\n]", str1);

//     printf("Enter the String2: ");
//     scanf(" %[^\n]", str2);

//     if (AnagramCheck(str1, str2)) {
//         printf("Anagram");
//     }else {
//         printf("Not an anagram");
//     }
// }

//------------------------------------------------------------------------------------------------------------------
// Highest word
// void HighestLen(char* str) {
//     int maxLen = 0;
//     int currLen = 0;
//     int maxStart = 0;
//     int currstart = -1;
//     int i, j = 0;

    // for (int i = 0; str[i]; i++) {

    //     if (str[i] != ' ' && str[i] != 0) {

    //         if (currLen == 0) {
    //             currstart = i;
    //         }
    //         currLen++;
    //     }
    //     if (str[i] == ' ') {
    //         if (currLen > maxLen) {
    //             maxLen = currLen;
    //             maxStart = currstart;
    //         }
    //         currLen = 0;
    //         currstart = 0;
    //     }
    // }
    // if (currLen > maxLen) {
    //     maxLen = currLen;
    //     maxStart = currstart;
    // }

    // for (int j = maxStart; j < maxLen+maxStart; j++) {
    //     printf("%c", str[j]);
    // }

    // printf(" %d %d %d %d", currLen, currstart, maxLen, maxStart);

//     while(str[i]) {
//         if (str[i] == ' ' || str[i] == 0) {
//             if(currLen > maxLen) {
//                 maxLen = currLen;
//                 maxStart = currstart;
//             }
//             currLen = 0;
//             currstart = -1;
//         }else {
//             if (currstart == -1) {
//                 currstart = i;
//             }
//             currLen++;
//         }
//         i++;
//     }
//     if (currLen > maxLen) {
//         maxLen = currLen;
//         maxStart = currstart;
//     }
//     for (int j = maxStart; j < maxLen+maxStart; j++) {
//         printf("%c", str[j]);
//     }
//     printf(" %d %d %d %d", currLen, currstart, maxLen, maxStart);
// }

// int main() {
//     char str[100] = "India is greater";
//     HighestLen(str);
// }

//------------------------------------------------------------------------------------------------------------------
//Word Reverse 
// void reverse(char* str, int start, int end) {
//     while (start <= end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }


// void WordReverse(char* str) {
//     int strlen = 0;
//     int currLen = 0;
//     int strstart = 0;
//     int currstart = 0;
//     int i;
//     for (i = 0; str[i]; i++) {

//         if (str[i] != ' ' && str[i] != 0) {

//             if (currLen == 0) {
//                 currstart = i;
//             }
//             currLen++;
//         }
//         if (str[i] == ' ' || str[i] == 0) {
//             strlen = currLen;
//             strstart = currstart;

//             reverse(str, strstart, strstart+strlen-1);
        
//             currLen = 0;
//             currstart = 0;
//         }
//     }

//     strlen = currLen;
//     strstart = currstart;

//     reverse(str, strstart, strstart+strlen-1);
// }

// void WordOrderReverse(char* str) {
    
//     int i = -1;
//     while (str[++i]);
//     WordReverse(str);
//     reverse(str, 0, i-1);
//     WordReverse(str);

// }

// int main() {
//     char str[100] = "India is greater";
//     WordOrderReverse(str);
//     printf("%s", str);
// }
//------------------------------------------------------------------------------------------------------------------
// void swap(char *a, char*b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int isCap(char ch) {
//     if (ch >= 'A' && ch <= 'Z') {
//         return 1;
//     }
//     return 0;
// }
// void SortingString(char* str) {
//     int i, j;
//     int len = -1;
    

//     while (str[++len]);
//     for (i = 0; i < len; i++) {
            
//             for (j = 0; j < len-i-1; j++) {

            
//                 if ((str[j] >= 'A' && str[j] <= 'Z') && (str[j+1] >= 'A' && str[j+1] <= 'Z')){
//                     if (str[j] > str[j+1]) {
//                         swap(&str[j], &str[j+1]);
//                     }
//                 }
//                 else if(isCap(str[j])) {
//                     // char small = str[j]+32;
//                     if (str[j]+32 > str[j+1]) {
//                         swap(&str[j], &str[j+1]);
//                     }
//                 }else if (isCap(str[j+1])){
//                     // char big = str[j+1]+32;
//                     if (str[j] > str[j+1]+32) {
//                         swap(&str[j], &str[j+1]);
//                     }
//                 }
//                 else {
//                     if (str[j] > str[j+1]) {
//                         swap(&str[j], &str[j+1]);
//                     }
//                 }
//             }
//         }      
    
        
//     printf("%s", str);
// }


// int main() {
//     char str[100] = "Hello Welcome";
//     SortingString(str);
        
//  }
//------------------------------------------------------------------------------------------------------------------
// void isUpper()
//----------------------------------------------sorting hthe string alphabetically(both upper and lower)-----------------------------------
// void sort(char *str){
//     int len =0;
//     while(str[++len]);
//     char temp;
//     for(int i=0;i<len-1;i++){
//         for(int j=0;j<len-i-1;j++){
//             if((str[j] >= 'A' && str[j] <= 'Z') && str[j+1] >= 'A' && str[j+1] <= 'Z'){
//                 if(str[j] > str[j+1]){
//                     temp =str[j];
//                     str[j]=str[j+1];
//                     str[j+1] = temp;
//                 }
//             }
//             else if(str[j] >= 'A' && str[j] <= 'Z'){
//                 if(str[j]+32 > str[j+1]){
//                     temp =str[j];
//                     str[j]=str[j+1];
//                     str[j+1] = temp;
//                 }
//             }
//             else if(str[j+1] >= 'A' && str[j+1] <= 'Z'){
//                 if(str[j] > str[j+1]+32){
//                     temp =str[j];
//                     str[j]=str[j+1];
//                     str[j+1] = temp;
//                 }
//             }
//             else if(str[j] > str[j+1]){
//                 temp =str[j];
//                 str[j]=str[j+1];
//                 str[j+1] = temp;
//             }
//         }
//     }
// }
// int main(){
//     char str[] = "Hello WOrld";
//     sort(str);
//     printf("%s",str);
//}


//------alternative upper and lower in a string-------------------------
// void fun(int start,int end,char *str)
// {
    
//         for(int i =start;i<=end;i+=2){
//             if(str[i]>='A' && str[i]<='Z'){
//                 continue;
//             }
//             else{
//                 str[i] = str[i]-32;
//             }
//         }
//         for(int i =start+1;i<=end;i+=2){
//             if(str[i]>='a' && str[i]<='z'){
//                 continue;
//             }
//             else{
//                 str[i] = str[i]+32;
//             }
//         }

    
// }
// void upper_lower(char *str){
//     int l;
//     int index;
//     for(int i =0;str[i];i++){
//         l = 0;
//         int j = i;
//         while(str[j] != ' ' && str[j]){
//             l++;
//             j++;
//         }
//         index = i;
//         i = j;
//         fun(index,index+l-1,str);

//     }
// }

// void AlternateUpper(char* str) {
//     int currS = 0;
//     int currE = 0;
//     int stringS = 0;
//     int stringE = 0;
//     int i, j;
//     for (i = 0; str[i]; i++) {
//         if (str[i] != ' ' && str[i]) {
//             if (currE == 0) {
//                 currS = i;
//             }
//             currE++;
//         }
//         else {
//             currS = stringS;
//             currE = stringE;
//         }
//     }
// }
// int main(){
//     char str[] = "Hello how are you";
//     upper_lower(str);
//     printf("%s",str);
// }
//------------------------------------------------------------------------------------------------------------------

// int removeElement(int* nums, int numsSize, int val) {
//     int i, j;
//     int k = 0;
//     for (i = 0; i < numsSize; i++) {
//         if (nums[i] == val) {
//             k++;
//             for (j = i; j < numsSize; j++) {
//                 nums[j] = nums[j+1];
//             }
//             i--;
//         }
//     }
//     return k;
// }

// int main() {
//     int arr[10] = {3, 2, 2, 3};
//     int val = 3;

//     int k = removeElement(arr, 4, val);
//     for (int i = 0; i < k; i++) {
//         printf("%d ", arr[i]);
//     }
// }
//------------------------------------------------------------------------------------------------------------------

// int my_atoi(const char str[]) {
//     int i;
//     int num = 0;  

//     if (str[0] == '+' || str[0] == '-') {
//         if (str[1] == '+' || str[1] == '-') {
//             return 0;
//         }
//         else if(str[0] == '+') {
//             for (i = 1; str[i]; i++){
//                 if (! (str[i] >= '0' && str[i] <= '9')) {
//                     break;
//                 }
//                 num = num * 10 + (str[i]-48);
//             }
//             return num;
//         }else if(str[0] == '-') {
//             for (i = 1; str[i]; i++){
//                 if (! (str[i] >= '0' && str[i] <= '9')) {
//                     break;
//                 }
//                 num = num * 10 + (str[i]-48);
//                 // break;
//             }
//             return -num;
//         }
//     }
//     else {
//         for (i = 0; str[i]; i++) {
//             if (! (str[i] >= '0' && str[i] <= '9')) {
//                 break;
//             }
//             num = num * 10 + (str[i]-48);
//         }
//         return num;
//     }
// }

// int main() {
//     char str[100] = "1234abcd";
//     printf("%d", my_atoi(str));
// }

//-------------------------------------------------------------------------------------------------------
// void reverse(char str[], int start, int end) {
    
//     while (start <= end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }
//-------------------------------------------------------------------------------------------------------
// void itoa(int num, char str[]) {

//     int tempNum = num;
//     int i = 0;
//     if (num == 0) {
//         str[i] = '0';
//         str[i+1] = 0;
//     }else {
//         if (num < 0) {
//             str[i] = '-';
//             num = (num) * -1;
//             i++;
//         }
//         while (num != 0) {
//             str[i] = (num % 10) + 48;
//             num /= 10;
//             i++;
//         }
//         str[i] = 0;
//         int len = -1;
//         while (str[++len]);

//         if (tempNum < 0) {
//             reverse(str, 1, len-1);
//         }else {
//             reverse(str, 0, len-1);
//         }
//     }
// }

// int main()
// {
//     int num = 0;
//     char str[10];
    
//     printf("Enter the number:");
//     scanf("%d", &num);
    
//     itoa(num, str);
//     printf("Integer to string is %s", str);
//     // printf("%d", num);
// }
//-------------------------------------------------------------------------------------------------------

// void reverse_recursive(char str[], int start, int end) {
//     if (start > end) {
//         return;
//     }
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;
//     reverse_recursive(str, start+1, end-1);
// }

// int main()
// {
//     char str[30];
    
    
//     printf("Enter any string : ");
//     scanf("%[^\n]", str);
//     int len = -1;
//     while(str[++len]);
//     reverse_recursive(str, 0, len-1);
    
//     printf("Reversed string is %s\n", str);
// }
//-------------------------------------------------------------------------------------------------------

// int main() {
//     char ch;
//     char PrevChar;
//     int charCount = 0;
//     int wordCount = 0;
//     int lineCount = 0;

//     while ((ch = getchar()) != EOF) {
//         charCount++;

//         if ((PrevChar == ' ' || PrevChar == '\n' || PrevChar == '\t') && (ch != ' ' && ch != '\n')){
//             wordCount++;
//         }
//         if (ch == '\n') {
//             lineCount++;
//         }
//         PrevChar = ch;
//     } 
//     if (PrevChar != ' ' || PrevChar == '\t' || PrevChar != '\n') {
//         wordCount++;
//     }

//     printf(" %d\t%d\t%d\n", lineCount, wordCount, charCount);

    
// }
//-------------------------------------------------------------------------------------------------------

// int pangram(char string[]) {
    
//     int str[26] = {0};
//     int len = -1;
//     while(string[++len]);
//     printf("%d\n", len);
//     for (int i = 0; i < len; i++){
//         if (string[i] != ' '){
//             if (string[i] >= 'A' && string[i] <= 'Z') {
//                 str[(string[i] + 32) - 97] = 1;
//             }
//             else {
//                 str[string[i]-97] = 1;
//             }
//         }
//     }

//     for (int i = 0; i < 26; i++){
//         printf("%d ", str[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 26; i++){
//         if (str[i] == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     char str[50];
//     scanf("%[^[\n]", str);
//     printf("%d ", pangram(str));
//     if (pangram(str) != 0) {
//         printf("The Entered String is a Pangram String");
//     }else {
//         printf("The Entered String is not a Pangram String");
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
//     int i, j, k;
//     int index = 0;
//     for (i = 0; str2[i]; i++) {
//         for (j = 0; str1[j]; j++) {
//             if((str2[i] == str1[j]) || (str2[i] == str1[j]+32) || (str2[i] == str1[j]-32)) {
//                 for (k = j; str1[k]; k++) {
//                     str1[k] = str1[k+1];
//                 }
//                 j--;
//             }
//             // i--;
//         }
//         // i--;
//     }
// }

// int main()
// {
//     char str1[30], str2[30];
    
//     printf("Enter string1:");
//     scanf("%[^\n]", str1);
//     getchar();

//     printf("Enter string2:");
//     scanf("%[^\n]", str2);
    
//     squeeze(str1, str2);
    
//     printf("After squeeze s1 : %s\n", str1);
    
// }
//----------------------------------------------------------------------------------------------------------

    /*
    Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
    Enter string2 : ;./-:
    
    */
// char *my_strtok(char str[], const char delim[]){

//     static char *str1;
//     if (str != NULL) {
//         str1 = str;
//     }
//     static int i = 0;
//     char *pos = str1 + i;
//     if(*pos == NULL) {
//         return NULL;
//     }
//     for ( ;str1[i]; i++) {
//         for (int j = 0; delim[j]; j++) {
//             if (str1[i] == delim[j]) {
//                 str1[i] = 0;
//                 i++;
//                 return pos;
//             }
//         }
//     }
//     // printf("%s", pos);

//     return pos;
// }

// int main()
// {
//     char str[50];
//     char delim[50];
    
//     // printf("Enter the string  : ");
//     // scanf("%s", str);
    
//     // __fpurge(stdout);
 
//     // printf("Enter the delimeter : ");
//     // scanf("\n%s", delim);
//     // __fpurge(stdout);
    
//     char *token = my_strtok(str, delim);
//     printf("Tokens :\n");

//     while (token)
//     {
//         if (*token != 0) {
//             printf("%s\n", token);
//         }
//         token = my_strtok(NULL, delim);
//     }
// }
//----------------------------------------------------------------------------------------------------------

// void reversePrint(char str[], int ind) {

//     if (ind < 0) {
//         return;
//     }
//     printf("%c", str[ind]);
//     reversePrint(str, ind-1);
// }
// void swap(char* a, char* b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void ReverseStr(char str[], int s, int e) {
//     if (s > e) {
//         return;
//     }
//     swap(&str[s], &str[e]);
//     ReverseStr(str, s+1, e-1);
    
// }

// int main(){
//     char str[20] = "Chitti";
//     int len = -1;
//     while (str[++len]);
//     reversePrint(str, len);
//     ReverseStr(str, 0, len-1);
//     printf("\n");
//     printf("%s", str);
// }
//----------------------------------------------------------------------------------------------------------
//Sum of all numbers in a string

// int sumInStr (char str[]) {
//     int sum = 0, i;

//     for (i = 0; str[i]; i++) {
//         if (str[i] >= '0' && str[i] <= '9') {
//             sum += (str[i]-48);
//         }
//     }
//     return sum;
// }

// int main() {
//     char str[50] = "Chitti123@ gmail.com567";
//     int sum = sumInStr(str);
//     printf("%d", sum);
// }
//----------------------------------------------------------------------------------------------------------

//Swapping vowels

// int IsVowel(char ch) {
//     char vowel[20] = "AEIOU";
//     for (int i = 0; vowel[i]; i++) {
//         if (vowel[i] == ch || ((vowel[i] + 32) == ch)) {
//             return 1;
//         }
//     }
//     return 0;
// }

// void swap(char* a, char* b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void ReverseVowel(char str[]) {
//     int len = -1;
//     while (str[++len]);

//     int start = 0;
//     int end = len - 1;

//     while (start <= end) {
//         if (IsVowel(str[start]) && IsVowel(str[end])) {
//             swap(&str[start++], &str[end--]);
//         }
//         if (! IsVowel(str[start])) {
//             start++;
//         }else if (! IsVowel(str[end])) {
//             end--;
//         }
//     }
// }

// int main() {
//     char str[20] = "aeiou aeiou";
//     ReverseVowel(str);
//     printf("%s", str);
// }
//----------------------------------------------------------------------------------------------------------

// int main() {
//     char mainStr[100] = "hi hello hiw are you";
//     char substr[10] = "hiw";
//     char replace[10] = "how";
//     char* add;
//     if ((add = strstr(mainStr, substr))) {
//         if (strlen(substr) == strlen(replace)) {
//             for (int i = 0; replace[i]; i++) {
//                 add[i] = replace[i];
//             }
//             printf("Modified String %s\n", mainStr);
//         }else {
//             printf("Substring and replace string are not matching\n");
//         }
//     } else {
//         printf("Sub string not found\n");
//         return 0;
//     }
// }