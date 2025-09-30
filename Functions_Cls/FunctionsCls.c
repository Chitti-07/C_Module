#include<stdio.h>

//-------------------------------------------------------------------------------------------------

// void fun(int x){
//     if(x!=0){
//         printf("%d",x);
//         fun(x-1);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
// }

//-------------------------------------------------------------------------------------------------
// void fun(int x){
//     if(x!=0){
//         fun(x-1);
//         printf("%d",x);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
// }

//------------------------------------------------------------------------------------------------
// void fun(int x){
//     if(x!=0){
//         fun(x-1);
//     }
//     printf("%d",x);
// }
// int main(){
//     int x=3;
//     fun(x);
// }


//------------------------------------------------------------------------------------------------
// void fun(int a){
//     if(a>0)
//     fun(--a);
//     printf("%d",a);
// } 
// int main(){
//     int x = 5;
//     fun(x);
// }


//------------------------------------------------------------------------------------------------
//     if(a>1){
//         fun(--a);
//         printf("%d\n",a);
//     }
//     return a;
// }
// int main(){
//     int x = 3;
//     int ret = fun(x);
//     printf("%d\n\n",ret);
// }


//-----------------------------------------------------------------------------------------------
// int fun(int a){
//     static int ret = 0;
//     if(a>0){
//         fun(a-1);
//     }
//     return a+ret;
// }
// int main(){
//     int x = 3;
//     int ret = fun(x);
//     printf("%d\n\n",ret);
// }

//---------------------------------------------------------------------------------------------
// int fun(int a){

//     static int ret = 0;
//     if(a>0){
//         fun(--a);
//     }
//     return a+ret;
// }
// int main(){
//     int x = 3;
//     int ret = fun(x);
//     printf("%d\n\n",ret);
// }

//-------------------------------------------------------------------------------------------------
// int fun(int a){
//     if(a>0){
//         int ret = fun(a-1);
//         return ret+a;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int x = 5;
//     int ret = fun(x);
//     printf("%d ",ret);
// }


//-------------------------------------------------------------------------------------------------
// int fun(int x){
//     if(x<=1){
//         return 0;
//     }
//     if(x%2==0){
//         return fun(x/2);
//     }
//     else{
//         return fun((x-1)/2);
//     }
// } 
// int main(){
//     int x = 5;
//     int ret = fun(x);
//     printf("%d",ret);
// }

//-------------------------------------------------------------------------------------------------
// int fun(int x){
//     if(x==0){
//         return 0;
//     }
//     else if(x==1){
//         return 1;
//     }
//     else{
//         return fun(x-1)+fun(x-2);
//     }
// }
// int main(){
//     int x=6;
//     int ret=fun(x);
//     printf("%d ",ret);
// }

//-----------------------------------------------------------------------------------------------
// int foo(int x){
//     int ret = 1;
//     ret = ret + x;
//     printf("%d",ret);
// }
// int main(){
//     int x = 10;
//     foo(x);
//     foo(x);
// }
//-----------------------------------------------------------------------------------------------
//Average using recursions
// int Avg(int arr[], int size, int sum) {

//     if (size >= 0) {
//         sum += arr[size];
//         return Avg(arr, size - 1, sum);
//     }
//     return sum;
    

// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int size = 5;

//     int f = Avg(arr, size-1, 0);
//     float avg = (float) f / size;
//     printf("%f", avg);
// }
//-----------------------------------------------------------------------------------------------
//Average using Functions
// int Avg(int arr[], int size, int sum) {
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int main() {
//     // int arr[5] = {1, 2, 3, 4, 5};
//     // int size = 5;
//     int size;
//     scanf("%d", &size);
//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int sum = Avg(arr, size, 0);

//     float avg = (float) sum / size;

//     printf("%f", avg);
// }
//-----------------------------------------------------------------------------------------------
//Sorting the array

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int* Sorting(int arr[], int size) {
//     for (int i = 0; i < size-1; i++) {
//         for (int j = 0; j < size-i-1; j++) {
//             if (arr[j] > arr[j+1]) {

//                 swap(&arr[j], &arr[j+1]);
//             }
//         }
        
//     }
//     return arr;
// }



// int main() {
//     int arr[5] = {5, 4, 3, 2, 1};
//     int size = 5;
    
//     Sorting(arr, size);

//     // arr2 = Sorting(arr, size);


//     for (int i = 0; i < size; i++) {
//         printf("%d", arr[i]);
//     }

// }
//-----------------------------------------------------------------------------------------------
// int main(){
//     int x = 0x12345678;
//     int *ptr = &x;
//     short *ptr2 = &x;
//     char *cptr = &x;
//     printf("%x \n", *cptr);
//     printf("%x \n", *ptr);
//     printf("%x \n", *ptr2);

// }
//-----------------------------------------------------------------------------------------------
//Finding whether system is littel or big Endian
// int main() {
//     int n = 10;
//     char *cptr = &n;
//     if (*cptr == n) {
//         printf("Littel Endian system");
//     }else {
//         printf("Big Endian system");
//     }

// }
//-----------------------------------------------------------------------------------------------

int main() {
    int num = 0xABCDEF12;
    char *cptr = &num;
    char temp = *cptr;
    *cptr = *(cptr+3);
    *(cptr+3) = temp;

    // char temp2 = *(cptr+1);
    // *(cptr+1) = *(cptr+2);
    // *(cptr+2) = temp2;

    printf("%x", num);
}
//-----------------------------------------------------------------------------------------------

