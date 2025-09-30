#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdarg.h>
#include <stdbool.h>
// int charToRoman(char c) {
//     switch (c)
//     {
//         case 'I': return 1;
//         case 'V': return 5;
//         case 'X': return 10;
//         case 'L': return 50;
//         case 'C': return 100;
//         case 'D': return 500;
//         case 'M': return 1000;
//         default: return 0;
//     }
// }
// int romanToInt(char* s) {
//     int res = 0;
//     int len = strlen(s);
//     int arr[len];

//     for (int i = 0; i < len; i++) {
//         arr[i] = charToRoman(s[i]);
//     }
//     printf("%d\n", len);
//     for (int i = 0; i < len; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < s[i]; i++) {
//         if (i+1 < len && arr[i] < arr[i+1]) {
//             res -= arr[i];
//         }else {
//             res += arr[i];
//         }
//         printf("%d ", res);
//     }
//     printf("\n");

//     return res;
// }

// int main() {
//     // printf("%d\n", romanToInt("III"));
//     // printf("%d\n", romanToInt("LVIII"));
//     printf("%d\n", romanToInt("MCMXCIV"));
//     // printf("%d\n", romanToInt("III"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char* longestCommonPrefix(char** strs, int strsSize) {

//     if (strs == NULL || strsSize == 0) return "";
//     char* res = (char*) malloc((strlen(strs[0]) + 1) * sizeof(char));
//     int size = 0;
//     res[0] = '\0';

//     int min_len = strlen(strs[0]);
//     for (int i = 1; i < strsSize; i++) {
//         int len = strlen(strs[i]);
//         if (len < min_len) {
//             min_len = len;
//         }
//     }


//     for (int i = 0; i < min_len; i++) {
//         char c = strs[0][i];
//         int match = 1;
//         for (int j = 1; j < strsSize; j++) {
//             if (strs[j][i] != c) {
//                 match = 0;
//                 break;
//             }
//         }
//         if (match) {
//             res[size++] = c;
//         }else {
//             break;
//         }
//     }
//     res[size] = '\0'; // Null-terminate the result string
//     return res;
// }

// int main() {
//     char* str[] = {"dog","racecar","car"};
//     char* res = longestCommonPrefix(str, 3);
//     printf("%s", res);
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// int lengthOfLastWord(char* s) {

//     // Left to right
//     // int len = 0, lastWord = 0;
//     // for (int i = 0; i < strlen(s); i++) {
//     //     if (s[i] == ' ') {
//     //         len = 0;
//     //     }else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
//     //         len++;
//     //     }
//     //     //maxLen = len > maxLen ? len : maxLen;
//     //     if (len > 0)
//     //         lastWord = len;
//     // }
//     // if (len > 0)
//     //     lastWord = len;
//     // return lastWord; //> maxLen ? len : maxLen;

//     // From the end
//     int i = strlen(s)-1, len = 0;
//     while (i >= 0 && s[i] == ' ') {
//         i--;
//     }

//     while (i >= 0 && s[i] != ' ') {
//         len++;
//         i--;
//     }
//     return len;
// }

// int main() {
//     char* str = "Today is a nice day";
//     printf("%d", lengthOfLastWord(str));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char* addBinary(char* a, char* b) {
//     int maxLen = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
//     char* res = (char*)malloc((maxLen+2));
//     char carry = '0';
//     int i = strlen(a)-1, j = strlen(b)-1, ind = 0;

//     while (i >= 0 || j >= 0) {
//         char A = i >= 0 ? a[i] : '0';
//         char B = j >= 0 ? b[j] : '0';

//         if (A == '1' && B == '1') {
//             res[ind++] = carry;
//             carry = '1';
//         }else if (A == '1' || B == '1') {
//             if (carry == '1') {
//                 res[ind++] = '0';
//                 carry = '1';
//             }else {
//                 res[ind++] = '1';
//                 carry = '0';
//             }
//         }else {
//             res[ind++] = carry;
//             carry = '0';
//         }
//         i--;
//         j--;
//     }

//     if (carry == '1') {
//         res[ind++] = carry;
//     }
//     res[ind] = '\0';
//     for (int k = 0; k < ind / 2; k++) {
//         char temp = res[k];
//         res[k] = res[ind - 1 - k];
//         res[ind - 1 - k] = temp;
//     }

//     return res;
// }

// int main() {
//     char a[] = "11";
//     char b[] = "1";

//     char* res = addBinary(a, b);
//     printf("Result: %s\n", res);
//     free(res);
//     return 0;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// int power(int a, int b) {
//     if (b == 0) 
//         return 1;
//     return a * power(a, b-1);
// }
// int titleToNumber(char* columnTitle) {
//     // int alpha[26];
//     // for (int i = 0; i < 26; i++) {
//     //     alpha[i] = i+1;
//     // }  

//     // int colNum = 0;
//     // int len = strlen(columnTitle);
//     // for (int i = 0; columnTitle[i]; i++) {
//     //     colNum += (alpha[columnTitle[i]-'A'] * power(26, len-i-1));

//     //     //  XYZ = 24*(26^2) + 25*(26^1) + 26*(26^0) = 
//     // }
//     // return colNum;

//     // Everything is a base of 26
//     // result *= d + 1  (d = ascii of alphabet)

//     int result = 0;
//     for (int i = 0; columnTitle[i]; i++) {
//         int d = columnTitle[i] - 'A' + 1; // Execl is stated from 1 not 0, so we have to add '1' to it
//         result = result * 26 + d;
//     }
//     return result;
// }

// int main() {
//     printf("%d", titleToNumber("XYZ"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// bool isIsomorphic(char* s, char* t) {
//     if (strlen(s) != strlen(t)) {
//         return false;
//     }
//     int charS[256] = {0};
//     int charT[256] = {0};

//     for (int i = 0; s[i]; i++) {
//         if (charS[s[i]] != charT[t[i]]) {
//             return false;
//         }
//         charS[s[i]] = i+1;
//         charT[t[i]] = i+1;
//     }
//     return true;
// }

// int main() {
//     if (isIsomorphic("abb", "dbc")) {
//         printf("True");
//     }else {
//         printf("False");
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// chennai : bengaluru : hyderabad : pune : delhi, pubjab.kolkatta
// :;.,
// char* my_strtok(char* mainStr, char* delimeter) {

//     static char* input;

//     if (mainStr != NULL) 
//         input = mainStr;
    
//     static int i;
//     char* word_start = input+i;

//     if (*word_start == '\0') {
//         return NULL;
//     }
//     for (; input[i]; i++) {
//         for (int j = 0; delimeter[j]; j++) {
//             if (input[i] == delimeter[j]) {
//                 input[i] = '\0';
//                 i++;
//                 return word_start;
//             }
//         }
//     }

//     return word_start;
// }

// int main() {
//     char str[200] = "chennai:bengaluru:hyderabad:pune:delhi,pubjab.kolkatta";
//     char del[10] = ":;,.";

//     char* token = my_strtok(str, del);
//     while (token) {
//         printf("%s\n", token);
//         token = my_strtok(NULL, del);
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// bool isSubsequence(char* s, char* t) {
//     int i = 0, j = 0;

//     while (t[j]) {
//         if (s[i] == t[j]) {
//             i++;
//         }
//         j++;
//     }

//     //printf("%d %u\n", i, strlen(s));
//     return i == strlen(s) ? true : false;
// }

// int main() {
//     if (isSubsequence("abc", "asjdhflblksdhfciauhkjfb")) {
//         printf("True");
//     }else {
//         printf("False");
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// bool isVowel(char ch) {
//     char* vowels = "AEIOUaeiou";
//     for (int i = 0; vowels[i]; i++) {
//         if (ch == vowels[i]) 
//             return true;
//     }
//     return false;
// }

// void swap(char* a, char* b) {
//     char temp = *a;
//     *a = *b;
//     *b = temp;
// }
// char* reverseVowels(char* str) {
//     int s = 0, e = strlen(str)-1;

//     while (s < e) {
//         if (isVowel(str[s]) && isVowel(str[e])) {
//             swap(&str[s++], &str[e--]);
//         }else if (!isVowel(str[s])) {
//             s++;
//         }else {
//             e--;
//         }
//     }
//     return str;
// }

// int main () {
//     char str[20] = "leetcode";
//     printf("%s", reverseVowels(str));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// bool canConstruct(char* ransomNote, char* magazine) {
//     int alpha[26] = {0};
//     for (int i = 0; magazine[i]; i++) {
//         alpha[magazine[i]-'a']++;
//     }

//     for (int i = 0; ransomNote[i]; i++) {
//         if (--alpha[ransomNote[i]-'a'] < 0) {
//             return false;
//         }
//     }
//     return true;

// }

// int main() {
//     if (canConstruct("aa", "abbb")) {
//         printf("True");
//     }else {
//         printf("False");
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char* my_substr(char* mainStr, char* subStr) {
//     if (mainStr == NULL) 
//         return NULL;
//     for (int i = 0; mainStr[i]; i++) {
//         if (mainStr[i] == subStr[0]) {
//             int j;
//             for (j = 0; subStr[j]; j++) {
//                 if (mainStr[i+j] != subStr[j]) {
//                     break;
//                 }
//             }
//             if (j == strlen(subStr)) {
//                 return &mainStr[i];
//             }
//         }
//     }
//     return NULL;
// }

// int main() {
//     printf("%s", my_substr("abcdedefdefghi", "def"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// int firstUniqChar(char* s) {
//     int freq[26] = {0};
//     for (int i = 0; s[i]; i++) {
//         freq[s[i]-'a']++;
//     }

//     for (int i = 0; s[i]; i++) {
//         if (freq[s[i]] == 1) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     printf("%d", firstUniqChar("aacssdasdb"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char findTheDifference(char* s, char* t) {
//     int tsum = 0, sSumm = 0;
//     for (int i = 0; t[i]; i++) {
//         tsum += t[i];
//     }

//     for (int i = 0; s[i]; i++) {
//         sSumm += s[i];
//     }

//     return tsum - sSumm;
// }

// int main() {
//     printf("%c", findTheDifference("ymbgaraibkfmvocpizdydugvalagaivdbfsfbepeyccqfepzvtpyxtbadkhmwmoswrcxnargtlswqemafandgkmydtimuzvjwxvlfwlhvkrgcsithaqlcvrihrwqkpjdhgfgreqoxzfvhjzojhghfwbvpfzectwwhexthbsndovxejsntmjihchaotbgcysfdaojkjldprwyrnischrgmtvjcorypvopfmegizfkvudubnejzfqffvgdoxohuinkyygbdzmshvyqyhsozwvlhevfepdvafgkqpkmcsikfyxczcovrmwqxxbnhfzcjjcpgzjjfateajnnvlbwhyppdleahgaypxidkpwmfqwqyofwdqgxhjaxvyrzupfwesmxbjszolgwqvfiozofncbohduqgiswuiyddmwlwubetyaummenkdfptjczxemryuotrrymrfdxtrebpbjtpnuhsbnovhectpjhfhahbqrfbyxggobsweefcwxpqsspyssrmdhuelkkvyjxswjwofngpwfxvknkjviiavorwyfzlnktmfwxkvwkrwdcxjfzikdyswsuxegmhtnxjraqrdchaauazfhtklxsksbhwgjphgbasfnlwqwukprgvihntsyymdrfovaszjywuqygpvjtvlsvvqbvzsmgweiayhlubnbsitvfxawhfmfiatxvqrcwjshvovxknnxnyyfexqycrlyksderlqarqhkxyaqwlwoqcribumrqjtelhwdvaiysgjlvksrfvjlcaiwrirtkkxbwgicyhvakxgdjwnwmubkiazdjkfmotglclqndqjxethoutvjchjbkoasnnfbgrnycucfpeovruguzumgmgddqwjgdvaujhyqsqtoexmnfuluaqbxoofvotvfoiexbnprrxptchmlctzgqtkivsilwgwgvpidpvasurraqfkcmxhdapjrlrnkbklwkrvoaziznlpor", "qhxepbshlrhoecdaodgpousbzfcqjxulatciapuftffahhlmxbufgjuxstfjvljybfxnenlacmjqoymvamphpxnolwijwcecgwbcjhgdybfffwoygikvoecdggplfohemfypxfsvdrseyhmvkoovxhdvoavsqqbrsqrkqhbtmgwaurgisloqjixfwfvwtszcxwktkwesaxsmhsvlitegrlzkvfqoiiwxbzskzoewbkxtphapavbyvhzvgrrfriddnsrftfowhdanvhjvurhljmpxvpddxmzfgwwpkjrfgqptrmumoemhfpojnxzwlrxkcafvbhlwrapubhveattfifsmiounhqusvhywnxhwrgamgnesxmzliyzisqrwvkiyderyotxhwspqrrkeczjysfujvovsfcfouykcqyjoobfdgnlswfzjmyucaxuaslzwfnetekymrwbvponiaojdqnbmboldvvitamntwnyaeppjaohwkrisrlrgwcjqqgxeqerjrbapfzurcwxhcwzugcgnirkkrxdthtbmdqgvqxilllrsbwjhwqszrjtzyetwubdrlyakzxcveufvhqugyawvkivwonvmrgnchkzdysngqdibhkyboyftxcvvjoggecjsajbuqkjjxfvynrjsnvtfvgpgveycxidhhfauvjovmnbqgoxsafknluyimkczykwdgvqwlvvgdmufxdypwnajkncoynqticfetcdafvtqszuwfmrdggifokwmkgzuxnhncmnsstffqpqbplypapctctfhqpihavligbrutxmmygiyaklqtakdidvnvrjfteazeqmbgklrgrorudayokxptswwkcircwuhcavhdparjfkjypkyxhbgwxbkvpvrtzjaetahmxevmkhdfyidhrdeejapfbafwmdqjqszwnwzgclitdhlnkaiyldwkwwzvhyorgbysyjbxsspnjdewjxbhpsvj"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char *my_strcpy(char *dest, const char *src) {
//     //char *original = dest;
//     while ((*dest++ = *src++));
//     return dest;
// }

// void reverseStr(char str[][50] ,int size) {
//     char temp[100];
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size-i-1; j++) {
//             if (str[j][0] > str[j+1][0]) {
//                 my_strcpy(temp, str[j]);
//                 my_strcpy(str[j], str[j+1]);
//                 my_strcpy(str[j+1], temp);
//             }
//         }
//     }
// }

// int main() {
//     char str[5][50] = {"hekk", "csjhdf", "asdgwer", "fsartfs", "ddoiwe"};
//     reverseStr(str, 5);
//     for (int i = 0; i < 5; i++) {
//         printf("%s\n", str[i]);
//     }
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// Standard string library implementation

// strlen

// int my_strlen(char* s) {
//     int len = -1;
//     while (s[++len]);
//     return len;
// }

// char* my_strcpy(char* dest, char* src) {
//     char* d = dest;
//     while ((*d++ = *src++));
//     return dest;
// }

// char* my_strncpy(char* dest, char* src, int n) {
//     char* d = dest;
//     while (n-- && (*d++ = *src++));
//     *d++ = '\0';
//     return dest;
// }

// char* my_strcat(char* s1, char* s2) {
//     char* s = s1;
//     while (*++s);
//     while ((*s++ = *s2++));
//     return s1;
// }

// char* my_strncat(char* s1, char* s2, int n) {
//     char* s = s1;
//     while (*++s);
//     while (n-- && (*s++ = *s2++));
//     return s1;
// }

// int my_strcmp(char* s1, char* s2) {
//     while (*s1 && *s1 == *s2) {s1++; s2++; }
//     return *s1 - *s2;
// }

// union endianess {
//     int n;
//     char c;
// };

// int main() {
//     printf("%d\n", my_strlen("Hello"));
//     printf("%d\n", my_strcmp("world", "world"));
//     char dest[30];
//     printf("%s\n", my_strcpy(dest, "Hello world"));
//     printf("%s\n", my_strncpy(dest, "Hello world", 3));
//     char s1[30] = "hello", s2[30] = "world";
//     //printf("%s\n", my_strcat(s1, s2));
//     printf("%s\n", my_strncat(s1, s2, 3));

//     int a = 1;
//     char* c = (char*)&a;
//     if (*c == 1) {
//         printf("Little\n");
//     }else {
//         printf("Big");
//     }

//     union endianess check;
//     check.n = 1;
//     if (check.c == 1) {
//         printf("Little");
//     }else {
//         printf("Big");
//     }

// }
//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// int longestPalindrome(char* s) {
//     int count = 0;
//     int freq[128] = {0}; // ASCII size to handle all characters

//     for (int i = 0; s[i]; i++) {
//         freq[s[i]]++;
//     }
//     int hasodd = 0;
//     for (int i = 0; i < 128; i++) {
//         if (freq[i] % 2 == 0) {
//             count += freq[i];
//         }else {
//             count += freq[i]-1;
//             hasodd = 1;
//         }
//     }

//     return count + hasodd;
// }

// int main() {
//     printf("%d", longestPalindrome("abccccdd")); //asffrrddjddrrffsa
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// char* addStrings(char* num1, char* num2) {
//     int len1 = strlen(num1);
//     int len2 = strlen(num2);
//     int largeLen = len1 > len2 ? len1 : len2;
//     char* res = (char*)malloc(largeLen+2);

//     int i = len1-1, j = len2-1,ind = 0, carry = 0, sum = 0;
//     while ( i >= 0 || j >= 0) {
//         int a = i >= 0 ? num1[i]-'0' : 0;
//         int b = j >= 0 ? num2[j]-'0' : 0;

//         sum = (a + b + carry);
//         carry = sum / 10;
//         res[ind++] = (sum%10) + '0';
//         i--;
//         j--;
//     }
//     if (carry != 0) {
//         res[ind++] = carry+'0';
//     }
//     res[ind] = '\0';

//     for (int i = 0; i < ind/2; i++) {
//         char temp = res[i];
//         res[i] = res[ind - i - 1];
//         res[ind - i - 1] = temp; 
//     }

//     return res;
// }

// int main() {
//     printf("%s", addStrings("99", "9"));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

// int countSegments(char* s) {
//     if (strlen(s) == 0) {
//         return 0;
//     }
//     int continous = 0;
//     for (int i = 0; s[i]; i++) {
//         if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0'))
//             continous++;
//     }
//     return continous;
// }

// int main() {
//     printf("%d", countSegments("hi hello "));
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------

char* my_strcpy(char* dest, char* src) {
    char* d = dest;
    while ((*d++ = *src++));
    return dest;
}

char* my_strcat(char* s1, char* s2) {
    char* s = s1;
    while (*s) s++;
    while ((*s++ = *s2++));
    return s1;
}

char* my_strstr(char* mainstr, char* substr) {
    for (int i = 0; mainstr[i]; i++) {
        if (mainstr[i] == substr[0]) {
            int j;
            for (j = 0; substr[j]; j++) {
                if (mainstr[i+j] != substr[j]) {
                    break;
                }
            }
            if (j == strlen(substr)) {
                return &mainstr[i];
            }
        }
    }
    return NULL;
}

bool repeatedSubstringPattern(char* s) {
    char news[strlen(s) * 2+1];
    my_strcpy(news, s);
    my_strcat(news, s);
    int i;
    for (i = 1; news[i]; i++) {
        news[i-1] = news[i];
    }
    news[i-2] = '\0';
    if (my_strstr(news, s)) {
        return true;
    }
    return false;
}

int main() {
    if (repeatedSubstringPattern("abcabcabc")) {
        printf("Yes");
    }else {
        printf("No");
    }
}