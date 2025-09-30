#include<stdio.h>
int perfect(int num);
// int main() {

    // int num;
    // // int fact = 1;
    // printf("Enter the number: ");
    // scanf("%d", &num);

    //Printing the factorial using clockwise
    // for (int i = 2; i <= num; i++) {
    //     fact *= i;
    // }
    // printf("%d\n", fact);
//-----------------------------------------------------------------------
    //Printing the factorial using Anti-clockwise
    // for (int i = num; i >= 2; i--)
    // {
    //     fact *= i;
    // }
    // printf("%d\n", fact);
//-----------------------------------------------------------------------
    //Printing the factors of 5 
    // for (int i = 5; i <= num; i++)
    // {
    //     if (i % 5 == 0){
    //         printf("%d\n", i);
    //     }
    // }

    // for (int i = 5; i <= num; i+=5) {
    //     printf("%d\n", i);
    // }
//-----------------------------------------------------------------------
    //Printing the multiplication of two numbers without multiplication operation
    // int num1, num2, prod = 0;

    // printf("Enter two numbers for multiplication: ");
    // scanf("%d %d", &num1, &num2);

    // for (int i = 1; i <= num2; i++) {
    //     prod += num1;
    // }
    // printf("%d\n", prod);
//-----------------------------------------------------------------------
    //Finding the perfect number 
    // int num;
    // int sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    

    // for (int i = 0; i < num; i++){
    //     int sum = 0;
    //     for (int j = 1; j <= i/2; j++) {
    //         if (i % j == 0){
    //             sum += j;
    //         }
    //     }
    //     if (sum == i){
    //     printf("%d is a perfect number\n", i);
    //     }
    // }

//-----------------------------------------------------------------------
    //Printing N terms of AP
    // int a,d,n;

    // printf("Enter the 1st number of AP/GP series: ");
    // scanf("%d", &a);
    // printf("Enter the difference of AP/GP series: ");
    // scanf("%d", &d);
    // printf("Enter the Nth value of AP/GP series: \n");
    // scanf("%d", &n);

    // Printing AP series for N series
    // printf("AP series upto Nth term series: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d\t", a);
    //     a += d;
    // }

    // Printing Nth number of AP series 
    // printf("AP series Nth term: ");
    // for (int i = 1 ; i < n; i++) {
    //     a += d;
    // }
    // printf("%d\n", a);

    // Printing AP series for N series
    // printf("AP series upto Nth term series: ");
    // for (int i = 1; i < n; i++) {
    //     printf("%d\t", a);
    //     a *= d;
    // }

    // Printing Nth number of GP series
    // printf("AP series Nth term: ");
    // for ( ; a <= n; ) {
    //     a *= d;
    // }
    // printf("%d\n", a);

//-----------------------------------------------------------------------
    
    //Whether the given number is prime or not

    // int num;
    // int count = 0;
    // int i = 2;
    // int j = 2;
    // scanf("%d", &num);
    // for (i = 2; i*i <= num; i++) {
    //     if (num % i == 0) {
    //         // count++;
    //         break;
    //     }
    // }
    // if (i*i > num) {
    //     printf("prime");
    // }else {
    //     printf("Not a prime");
    // }

    //Printing prime numbers <= N
    // for (i = 2; i <= num; i++) {
    //     for (j = 2; j <= i; j++) {
    //         if (i % j == 0) {
    //             break;
    //         }
    //     }
    //     if (j*j > i) {
    //         printf("%d ", i);
    //     }
    // }
    
    //Printing Prime numbers upto N number
    // while (num > count) {
    //     for (j = 2; j <= i; j++) {
    //         if (i % j == 0) {
    //             break;
    //         }
    //     }
    //     if (j*j > i) {
    //         printf("%d ", i);
    //        // count++;
    //            num--;

    //     }
    //     i++;
    // }

    //Printing prime numbers in b/w range

    // int lower = 0; 
    // int upper = 0;
    // int count = 0;
    // scanf("%d", &lower);
    // scanf("%d", &upper);
    // int j = 2;
    // for (int i = lower; i <= upper; i++) {
    //     for (j = 2; j <= i; j++) {
    //         if (i % j == 0) {
    //             break;
    //         }
    //     }
    //     if (j*j > i) {
    //         count++;
    //     }
    // }
    // printf("%d ", count);

//----------------------------------------------------------------------------------

    //Finding perfect number 
    // int sum = 0;
    // for (int i = 1; i <= num/2; i++) {
    //     if (num % i == 0) {
    //         sum += i;
    //     }
    // }
    // if (sum == num) {
    //     printf("%d is a perfect number", num);
    // }else {
    //     printf("%d is not a perfect number", num);
    // }
    
    //Finding perfect numbers upto N
    // int sum = 0;
    // for (int i = 1; i <= num; i++) {
    //     for (int j = 1; j <= i/2; j++) {
    //         if (i % j == 0) {
    //             sum += j; 
    //         }
    //     }
    //     if (sum == i) {
    //         printf("%d ", i);
    //     }
    //     sum = 0;
    // }


    //Finding N no.of perfect numbers
    // int count = 0;
    // int i = 1;
    // while (num > count) {
    //     int sum = 0;
    //     for (int j = 1; j <= i/2; j++) {
    //         if (i % j == 0) {
    //             sum += j;
    //         }
    //     }
    //     if (sum == i) {
    //         printf("%d ", i);
    //         count++;
    //     }
    //     i++;
    // }
//----------------------------------------------------------------------------------
    //LCM
    // int a, b;
    // scanf("%d %d", &a, &b);
    // if (a == 1) {
    //     printf("%d", b);
    // }else {
    //     int c = b % a;
    // printf("%d ", (a*b)/c);
    // }
    // int c = b % a;
    // printf("%d ", (a*b)/c);

    //LCM
    // int num1, num2;
    // scanf("%d %d", &num1, &num2);

    // int fact1 = num1; 
    // int fact2 = num2;

    // while (fact1 != fact2) {
    //     if (fact1 < fact2) {
    //         fact1 += num1;
    //     } else {
    //         fact2 += num2;
    //     }

    // }
    // if (fact1 == fact2) {
    //     printf("%d ", fact1);
    // }

    //GCF
    // int num1, num2;
    // scanf("%d %d", &num1, &num2);
    // int min = num1 < num2 ? num1 : num2 ;
    // for (int i = min; i > 0; i--) {
    //     if (num1 % i == 0 && num2 % i == 0) {
    //         printf("%d ", i);
    //         break;
    //     }
    // }


	// int iter = 0;

	// while(iter < 10)
	// {
    //     iter++;
	// 	if (iter == 5)
	// 	{
	// 		continue;
	// 	}
		
    //     printf("%d\n", iter);
	// }
//----------------------------------------------------------------------------------

    // int start;
    // int end;
    // int sum = 0;
    // printf("Enter a number: ");
    // scanf("%d %d", &start, &end);

    // for (int i = start; i < end; i++) {
    //     if (perfect(i)) {
    //         printf("%d ", i);
    //     }
    // }
    
    // if (start < 0 || end < 0) {
    //     printf("Invalid");
    // }else {
    //     for (int i = start; i <= end; i++){
    //         int sum = 0;
    //         for (int j = 1; j <= i/2; j++) {
    //             if (i % j == 0){
    //                 sum += j;
    //             }
    //         }
    //         if (sum == i){
    //         printf("%d is a perfect number\n", i);
    //         }
    //     }
    // }
//----------------------------------------------------------------------------------     
//  }
//----------------------------------------------------------------------------------

// int perfect(int num) {
//     int i;
//     int sum = 0;
//     for (i = 1; i <= num/2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == num) {
//         return 1;
//     }        
//     return 0;
// }
//----------------------------------------------------------------------------------

int isprime(int num) {
    int i;
    for (i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            break;
        }
    }
    if (i * i > num) {
        return 1;
    }
    return 0;
}

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= num; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
}