#include<stdio.h>



// void fun(int num) {
//     if (num > 0){
//         //printf("%d\n", num);
//         fun(num - 1);
//         printf("%d\n", num);
//     }
// }

// int fun(int num) {
//     if (num <= 0) {
//         return 0;
//     }
//     return num += fun(num - 1);
// }

// int main() {
//     int num = 5;
//     int res = fun(num);
//     printf("%d", res);
// }


//-------------------------------------------------------------------------------------------------

/*
int NaturalNum(int num) {
    if (num > 0) {

        num += NaturalNum(num-1);
    }
    return num;
}

int main() {
    int num = 5;
    printf("%d ", NaturalNum(num));
}

*/
//-------------------------------------------------------------------------------------------------

// int Factorial(int num) {
//     if (num > 1) {

//        return num *= Factorial(num-1);
//     }
//     return num;
// }

// int main() {
//     int num = 5;
//     printf("%d ", Factorial(num));
// }

//-------------------------------------------------------------------------------------------------
// Power of a number X^Y

// int PowerMul(int base, int power) {

//     if (power > 1) {
//         return base * PowerMul(base, power-1);
//     }
//     return base;
// }

// int main() {
//     int base = 2;
//     int pow = 3;

//     printf("%d", PowerMul(base, pow));
// }

//-------------------------------------------------------------------------------------------------

//Counting No.of digits of a number

// int CountDigits(int num, int count) {
//     if (num > 0) {
//         return CountDigits((num/10), count+1);
//     }
//     return count;
// }

// int main() {
//     int num = 123456;
//     printf("%d ", CountDigits(num, 0));
// }

//-------------------------------------------------------------------------------------------------

//Using Static variable

// int CountDigits(int num) {
//     static int count = 0;
//     if (num > 0) {
//         count++;
//         return  CountDigits(num/10);
//     }
//     return count;
// }

// int main() {
//     int num = 123456;
//     printf("%d ", CountDigits(num));
// }
//-------------------------------------------------------------------------------------------------
//Adding Digits 

// int AddDigits(int num) {
//     if (num > 0) {
//         return num%10 + AddDigits(num/10);
//     }
//     return num;
// }

// int main() {
//     int num = 123;
//     printf("%d ", AddDigits(num));
// }

//-------------------------------------------------------------------------------------------------
//Reversing number using static variable

// int ReverseNum(int num) {
//     static int sum = 0;
//     if (num > 0) {
//         sum = sum * 10 + (num%10);
//         return ReverseNum(num/10);
//     }
//     return sum;
// }

// int main() {
//     int num = 123;
//     printf("%d", ReverseNum(num));
// }

//-------------------------------------------------------------------------------------------------
//Reversing number  using argument variables

// int ReverseNum(int num, int reverse) {
//     if (num > 0) {
//         reverse = reverse * 10 + (num%10);
//         return ReverseNum(num/10, reverse);
//     }
//     return reverse;
// }

// int main() {
//     int num = 123;
//     printf("%d ", ReverseNum(num, 0));
// }

//-------------------------------------------------------------------------------------------------

// int gcd (int a, int b) {
//     if (a == 0) {
//         return b;
//     }
//     return gcd(b%a, a);
// }

// int lcm (int a, int b) {
//     return a * b / gcd(a, b);
// }

// int main(){
//     int a = 8;
//     int b = 12;
//     printf("%d %d", gcd(a, b), lcm(a, b));
// }

//-------------------------------------------------------------------------------------------------
//Prime number using static variables 

// int Prime(int num) {
//     static int i = 2;
//     if (i <= num/2) {
//         if (num % i == 0) {
//             return 0;
//             i++;
//             Prime(num);
//         }
//     }
//     return 1;
// }

// int main(){

//     int num = 2;
//     printf("%d ", Prime(num));
// }

//-------------------------------------------------------------------------------------------------
//Prime number using argument variables

// int Prime(int num, int i) {
    
//     if (i <= num/2) {
//         if (num % i == 0) {
//             return 0;
//         }
//         Prime(num, i+1);
//     }
//     return 1;
// }

// int main(){

//     int num = 52;
//     printf("%d ", Prime(num, 2));
// }

//-------------------------------------------------------------------------------------------------
//LCM using recursions
// int Lcm(int a, int b, int small, int big){
    
//     if (b % a == 0) {
//         return a;
//     }

//     if (b % a != 0) {
//         if (b > a) {
//             return Lcm(a+(small), b, small, big);
//         }else {
//             return Lcm(a, b+(big), small, big);
//         }      
//     }
//     return a;
    



// }

// int main() {
//     int a = 8;
//     int b = 12;
//     int s = 8;
//     int bi = 12;

//     printf("%d", Lcm(a, b, s, bi));
// }
//-------------------------------------------------------------------------------------------------

// int HCF(int num1, int num2, int div) {
    
//     if ((num1 % div == 0) && (num2 % div == 0)) {
//         return div;
//     }else {
//         return HCF(num1, num2, div-1);
//     }
    
    
// }

// int main() {
//     int a = 8;
//     int b = 12;
//     int s = 8;
//     printf("%d", HCF(a, b, s));
    
// }
//-------------------------------------------------------------------------------------------------

// void fabonacci(int num, int a, int b) {
    
//     if (num < 2) {
//         // return num;
//         printf("%d", num);
//     }else if (a <= num){
//         // int temp = a;
//         // printf("%d ", temp);
//         printf("%d ", a);
//         return fabonacci(num, b, a+b);
//     }
    

// }

// int main() {
//     int n = 8;
//     fabonacci(n, 0, 1);
//     // printf("%d ", fabonacci(n, 0, 1));
// }
//-------------------------------------------------------------------------------------------------

// int fabonacci (int num) {
//     if (num < 2) {
//         return num;
//     }
//     return fabonacci(num-1) + fabonacci(num-2);
// }

// int main() {
//     int num = 5;
//     int i = 0;
//     while (num >= fabonacci(i)) {
//         printf("%d", fabonacci(i));
//         i++;
//     }
    
// }

//-------------------------------------------------------------------------------------------------

// int main() {
//     static int num;
//     static int fact = 1;
    
//     if (fact == 1) {
//         printf("Enter a number: ");
//         scanf("%d", &num);
//     }

    
//     if (num > 1) {
//         if (num >= 1) {
//             fact *= num;
//             num--;
//             main();
//         }
//     }
//     else if(num == 0 || num == 1) {
//         printf("%d", fact);
//     }else {
//         printf("Invalid Input");
//     }
// }
//-------------------------------------------------------------------------------------------------
//Positive Fabonacci 
// void Fabonacci(int num, int a, int b, int sum) {
    
//     if (sum <= num) {
//         // sum = a + b;
//         printf("%d ", sum);
//         a = b;
//         b = sum;
//         sum = a + b;
//         Fabonacci(num, a, b, sum);
//     }
// }

// int main() {
//     int n = 8;
//     Fabonacci(n, 0, 1, 0);
// }

//-------------------------------------------------------------------------------------------------

//Negative Fabonacci 
// void Negative_Fabonacci(int num, int a, int b, int diff) {
//     if (diff >= num && -diff >= num) {
//         // sum = a + b;
//         printf("%d ", diff);
//         a = b;
//         b = diff;
//         diff = a - b;
//         Negative_Fabonacci(num, a, b, diff);
//     }
// }

// int main() {
//     int n = 8;
//     Negative_Fabonacci(n, 0, 1, 0);
// }
//-------------------------------------------------------------------------------------------------

#include <stdio.h>

int reverse_number(int num) {

    if (num < 10) return num;  // Base case: single-digit number remains the same

    //int digits = (num < 10) ? 1 : 10;  // Base case handling
    int digits = 10;
    while (num / digits >= 10) digits *= 10;  // Find the highest place value

    return (num % 10) * digits + reverse_number(num / 10);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: %d\n", reverse_number(num));

    return 0;
}

//-------------------------------------------------------------------------------------------------


// #include <stdio.h>

// int lcm_recursive(int a, int b, int multiple) {
//     if (multiple % a == 0 && multiple % b == 0)
//         return multiple;
//     return lcm_recursive(a, b, multiple + b);
// }

// int main() {
//     int num1, num2;
    
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     printf("LCM of %d and %d is %d\n", num1, num2, lcm_recursive(num1, num2, (num1 > num2) ? num1 : num2));

//     return 0;
// }

//-------------------------------------------------------------------------------------------------

//Union of Two arrays

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         printf("%d ", ptr[i]);
//     }
// }

// int Size_Dec(int ptr1[], int ptr2[], int size1, int size2) {
//     int size3 = size1 + size2;
//     for (int i = 0; i < size1; i++){
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 size3--;
//             }
//         }
//     }
//     return size3;
// }

// void Arr3_Logic(int ptr1[], int ptr2[], int ptr3[], int size1, int size2, int size3) {
//     int k = 0;
//     for (int i = 0; i < size1; i++){
//         ptr3[i] = ptr1[i];
//     }

//     for (int i = 0; i < size1; i++) {
//         int count = 0;
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 count++;
//             }
//         }
//         if (count == 0){
//             ptr3[size1 + k] = ptr2[i];
//             k++;
//         }
//     }
// }



// int main() {
//     int s1, s2, s3;
    
//     scanf("%d", &s1);
//     scanf("%d", &s2);

//     int arr1[s1];
//     int arr2[s2];

//     Scan_arr(arr1, s1);
//     Scan_arr(arr2, s2);

//     s3 = Size_Dec(arr1, arr2, s1, s2);
//     int arr3[s3];
//     Arr3_Logic(arr1, arr2, arr3, s1, s2, s3);
//     Print_arr(arr3, s3);

// }
//-------------------------------------------------------------------------------------------------
//Intersection of Two arrays

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         printf("%d ", ptr[i]);
//     }
// }

// int Size_Dec(int ptr1[], int ptr2[], int size1, int size2) {
//     int size3 = 0;
//     for (int i = 0; i < size1; i++){
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 size3++;
//             }
//         }
//     }
//     return size3;
// }

// void Arr3_Logic(int ptr1[], int ptr2[], int ptr3[], int size1, int size2, int size3) {
//     int k = 0;

//     for (int i = 0; i < size1; i++) {
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 ptr3[k] = ptr1[i];
//                 k++;
//             }
//         }
//     }
// }



// int main() {
//     int s1, s2, s3;
    
//     scanf("%d", &s1);
//     scanf("%d", &s2);

//     int arr1[s1];
//     int arr2[s2];

//     Scan_arr(arr1, s1);
//     Scan_arr(arr2, s2);

//     s3 = Size_Dec(arr1, arr2, s1, s2);
//     int arr3[s3];
//     // printf("%d", s3);
//     Arr3_Logic(arr1, arr2, arr3, s1, s2, s3);
//     Print_arr(arr3, s3);

// }
//-------------------------------------------------------------------------------------------------

// void Scan_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         scanf("%d", &ptr[i]);
//     }
// }

// void Print_arr(int ptr[], int size) {
//     for (int i = 0; i < size; i++){
//         printf("%d ", ptr[i]);
//     }
// }

// int Size_Dec(int ptr1[], int ptr2[], int size1, int size2, int size3) {
//     size3 = 0;
//     for (int i = 0; i < size1; i++){
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 size3++;
//             }
//         }
//     }
//     return size3;
// }

// void Arr3_Logic(int ptr1[], int ptr2[], int ptr3[], int size1, int size2, int size3) {
//     int k = 0;

//     for (int i = 0; i < size1; i++) {
//         for (int j = 0; j < size2; j++){
//             if (ptr1[i] == ptr2[j]) {
//                 ptr3[k] = ptr1[i];
//                 k++;
//             }
//         }
//     }
// }



// int main() {
//     int s1, s2, s3;
    
//     scanf("%d", &s1);
//     scanf("%d", &s2);

//     int arr1[s1];
//     int arr2[s2];

//     Scan_arr(arr1, s1);
//     Scan_arr(arr2, s2);

//     int s3 = Size_Dec(arr1, arr2, s1, s2, s3);
//     int arr3[s3];
//     printf("%d", s3);
//     Arr3_Logic(arr1, arr2, arr3, s1, s2, s3);
//     Print_arr(arr3, s3);

// }
// #include <stdio.h>

// // Function to check if an element is already present in an array
// int isPresent(int arr[], int size, int element) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             return 1; // Element is present
//         }
//     }
//     return 0; // Element is not present
// }

// // Function to find the intersection of two arrays
// void findIntersection(int arr1[], int size1, int arr2[], int size2, int result[], int *resultSize) {
//     for (int i = 0; i < size1; i++) {
//         // If the current element of arr1 is present in arr2 and not already added to result
//         if (isPresent(arr2, size2, arr1[i]) && !isPresent(result, *resultSize, arr1[i])) {
//             result[*resultSize] = arr1[i];
//             (*resultSize)++;
//         }
//     }
// }

// int main() {
//     int size1, size2;

//     // Input for the first array
//     printf("Enter the size of the first array: ");
//     scanf("%d", &size1);
//     int arr1[size1];
//     printf("Enter elements of the first array: ");
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     // Input for the second array
//     printf("Enter the size of the second array: ");
//     scanf("%d", &size2);
//     int arr2[size2];
//     printf("Enter elements of the second array: ");
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     // Array to store the intersection of the two arrays
//     int result[size1 < size2 ? size1 : size2]; // Max possible size is the smaller of the two arrays
//     int resultSize = 0;

//     // Find the intersection
//     findIntersection(arr1, size1, arr2, size2, result, &resultSize);

//     // Print the intersection
//     if (resultSize == 0) {
//         printf("No common elements found.\n");
//     } else {
//         printf("Intersection of the two arrays: ");
//         for (int i = 0; i < resultSize; i++) {
//             printf("%d ", result[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
