#include<stdio.h>
#include <stdlib.h>
#include<strings.h>
// int AtoI(char* str) {
//     int num = 0;
//     int i;

//     if (str[0] == '+' || str[0] == '-') {

//         if (str[1] == '+' || str[1] == '-') {
//             return 0;
//         }
//         else if (str[0] == '+') {
//             for (i = 1; str[i]; i++) {
//                 if (! (str[i] >= '0' && str[i] <= '9')) {
//                     break;
//                 }
//                 num = (num * 10 )+ (str[i]-48);
//             }
//             return num;
//         }
//         else if (str[0] == '-') {
//             for (i = 1; str[i]; i++) {
//                 if (! (str[i] >= '0' && str[i] <= '9')) {
//                     break;
//                 }
//                 num = (num * 10) + (str[i]-48);
//             }
//             return -num;
//         }
//     }
//     else {
//         for (i = 0; str[i]; i++) {
//             if (! (str[i] >= '0' && str[i] <= '9')) {
//                 break;
//             }
//             num = (num * 10) + (str[i]-48);
//         }
//         return num;
//     }
//     return num;
// }
// int main(int argc, char *argv[]) {
//     int i;
//      for (i = 1; argv[i]; i++) {
//         printf("%s ", argv[i]);
//      }
// }
//----------------------------------------------------------------------------------------------------------------

//Sum of 2 Numbers
// int main(int argc, char *argv[]) {
//     int sum = 0;
//     sum = atoi(argv[1]) + atoi(argv[2]);
//     printf("%d", sum);
// }
//----------------------------------------------------------------------------------------------------------------

//Environmental variables
// int main(int argc, char **argv, char **envp) {
//     for (int i = 0; envp[i]; i++) {
//         printf("%s\n", envp[i]);
//     }
// }
//----------------------------------------------------------------------------------------------------------------
//Only Environmental variables
// int main(int argc, char **argv, char **envp) {
//     for (int i = 0; envp[i]; i++) {
//         printf("%s\n", strtok(envp[i], "="));
//     }
// }
//----------------------------------------------------------------------------------------------------------------
//Printing values of environmental variables
// int main(int argc, char **argv, char **envp) {
//     int i, j;
//     char *val;
//     int flag;
//     for (i = 0; envp[i] != NULL; i++) {
//         flag = 0;
//         if (!strcasecmp(argv[1], strtok(envp[i], "="))) {
//             val = strtok(NULL, "=");
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1) {
//         printf("%s", val);
//     }else {
//         printf("Not found");
//     }
// }
//----------------------------------------------------------------------------------------------------------------

// int main(int argc, char **argv) {
//     int sum = 0; 
//     float avg = 0;
//     for (int i = 1; argv[i]; i++) {
//         sum += AtoI(argv[i]);
//     }
//     avg = (float)sum/(argc-1);
//     printf("%d %f", sum, avg);
// }
//----------------------------------------------------------------------------------------------------------------
// int* runningSum(int* arr, int size, int* returnSize) {
//     for (int i = 1; i < size; i++) {
//         arr[i] += arr[i-1];
//     }
//     *returnSize = size;
//     return arr;
// }
// int main() {
//     int arr[10] = {1, 1, 1, 1};
//     int ans = 0;
//     runningSum(arr, 4, 0);
//     for (int i = 0; i < 4; i++) {
//         printf("%d", arr[i]);
//     }
//     printf("%d", ans);
// }
//----------------------------------------------------------------------------------------------------------------

// int main(int argc, char** argv) {
//     // char str[100] = argv[2];
//     printf("%s", argv[2]);
// }