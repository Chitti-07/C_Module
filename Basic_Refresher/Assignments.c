#include<stdio.h>
int main () {

    //Positive Fibonacci series upto N
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int a = 0;
    int b = 1;
//     // int sum = 0;
//     int diff = 0;
//    // printf("%d %d ", a, b);
    while (num >= sum) {
        // printf("%d %d", a, b);
        printf("%d ", sum);
        a = b; 
        b = sum;
        sum = a + b;

    }

        // while (a < num) {
        //     printf("%d ", a);
        //     sum = a + b;
        //     a = b; 
        //     b = sum;
        // }

//     while (diff >= num && -diff >= num) {
//         // printf("%d %d", a, b);
//         printf("%d ", diff);
//         a = b; 
//         b = diff;
//         diff = a - b;

//     }

//------------------------------------------------------------------------------------------------------

    // int n;
    // printf("Enter the Nth day: ");
    // scanf("%d", &n);

    // if (n < 0 && n > 365) {
    //     printf("Error: Invalid Input, n value should be > 0 and <= 365");
    // }

    // int day;
    // printf("Select the day: \n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
    // scanf("%d", &day);

    // if (day < 1 && day > 7) {
    //     printf("Error: Invalid input, first day should be > 0 and <= 7");
    // }

    // 
    // int res = (((n % 7 )+ day)-1)%7;

    // int date = res == 0 ? 7 : res;
    // // printf("%d ", date);

    // switch (date)
    // {
    // case 1:
    //     printf("Sunday");
    //     break;

    // case 2:
    //     printf("Monday");
    //     break;

    // case 3:
    //     printf("Tuesday");
    //     break;

    // case 4:
    //     printf("Wednesday");
    //     break;

    // case 5:
    //     printf("Thursday");
    //     break;

    // case 6:
    //     printf("Friday");
    //     break;

    // case 7:
    //     printf("Saturday");
    //     break;
    // }

//------------------------------------------------------------------------------------------------------
    //Prime number by seive of Method
    
    // int n;
    // // printf("Enter the value of 'n' : ");
    // scanf("%d", &n);
    
    // /* Check whether the size is greater than zero or not */
    
    // if (n > 1) 
    // {
        
    //     /* If the size is greater than zero, then perform prime operation */
    //     int arr[n];
        
    //     /* Assigning array values from 2 to N */
    //     for (int i = 0; i < n-1; i++) 
    //     {
    //         arr[i] = i + 2;
    //     }

    //     /* Running the outter loop for N/2 times*/
    //     for (int i = 0; i < n/2; i++) 
    //     {
    //         /* If an element is zero, then skip it */
    //         if (arr[i] == 0) 
    //         {
    //                 continue;
    //         }
            
    //         /* Running inner loop for all the elements inside the array */
    //         for (int j =i+1; j < n-1; j++)
    //         {
    //             /* If any element is divisible by one of the elements, the make that element as '0' */
    //             if ((arr[j] % arr[i] == 0)) 
    //             {
    //                 arr[j] = 0;
    //             }
                
    //         }
    //     }
        
    //     /* Printing all the non zero elements, which are the requried prime numbers <= N */
    //     printf("The primes less than or equal to %d are : ", n);
    //     for (int i = 0; i < n-1; i++)
    //     {
    //         if (arr[i] != 0)
    //         {
    //             printf("%d ", arr[i]);
    //         }
            
    //     }
        
    // }
    
    // /*If the size is < 0, Then print the below statement */
    // else {
    //     printf("Please enter a positive number which is > 1");
    // }
}


//------------------------------------------------------------------------------------------------------

    
    //Generating AP, GP, HP series 
    // int a,d,n = 0;
    // int AP, GP, HP = 0;

    // printf("Enter the first number for AP/GP: ");
    // scanf("%d", &a);
    // printf("Enter the difference for AP/GP: ");
    // scanf("%d", &d);
    // printf("Enter the no.of steps neede for AP/GP: ");
    // scanf("%d", &n);
    
    // if (n > 0) {

    //     AP = a;
    //     for (int i = 0; i < n; i++) {
    //         printf("%d ", AP);
    //         AP += d;
            
    //     }
    //     printf("\n");
    //     GP = a;
    //     for (int i = 0; i < n; i++) {
    //         printf("%d ", GP);
    //         GP *= d;
    //     }

    //     printf("\n");
    //     HP = a;
    //     for (int i = 0; i < n; i++) {
    //         printf("%f ", (float)1/HP);
    //         HP += d; 
    //     }
    // }else {
    //     printf("Invalid input");
    // }
    

//------------------------------------------------------------------------------------------------------
    //Median

//     int size1, size2;
//     printf("Enter the size1 and size2: ");
//     scanf("%d %d", &size1, &size2);

//     int arr1[size1];
//     int arr2[size2];


//     /* Reading inputs to arrays */
//     printf("Enter array1 elements: ");
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter array2 elements: ");
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     //Sorting the array1
//     for (int i = 0; i < size1-1; i++) {
//         for (int j = 0; j < size1-i-1; j++) {
//             if (arr1[j] > arr1[j+1]) {

//                 int temp = arr1[j];
//                 arr1[j] = arr1[j+1];
//                 arr1[j+1] = temp;
//             }
//         }
//     }

//     //Sorting the array2
//     for (int i = 0; i < size2-1; i++) {
//         for (int j = 0; j < size2-i-1; j++) {
//             if (arr2[j] > arr2[j+1]) {

//                 int temp = arr2[j];
//                 arr2[j] = arr2[j+1];
//                 arr2[j+1] = temp;
//             }
//         }
//     }

//     //Finding Median for both arrays
//     //For array1
//     float med1 = 0;
//     if (size1 % 2 != 0) {
//         med1 = arr1[(size1/2)];
//     }else {
//         med1 = (float)(arr1[size1/2] + arr1[size1/2 - 1]) / 2;
//     }
//     printf("Median of array1 is %g\n", med1);
//     //For array2
//     float med2 = 0;
//     if (size2 % 2 != 0) {
//         med2 = arr2[(size2/2)];
//     }else {
//         med2 = (float)(arr2[(size2/2)] + arr2[size2/2 - 1]) / 2;
//     }
//     printf("Median of array2 is %g\n", med2);


//     //Final Median for both the arrays

//     float FinalMedian = 0;
//     FinalMedian = (med1 + med2 ) / 2.0;

//     printf("Final median is %g", FinalMedian);


// }
//------------------------------------------------------------------------------------------------------
// void StepBack(char* str, int )

// void RemoveSpace(char* str) {
//     int i, j;

//     for (i = 0; str[i]; i++) {

//         if (str[i] == ' ') {

//             if (str[i+1] == ' ') {
//                 for (j = i; str[j]; j++) {
//                     str[j] = str[j+1];
//                 }
//                 i--;
//             }
//         }
//     }
//     printf("%s", str);
// }

// int main() {
//     char str[100] = "hello  how   are u";
//     RemoveSpace(str);
// }