#include<stdio.h>
int main() {

    // int n;
    // int i = 1;
    // scanf("%d", &n);

    // int i = 1;
    // int n;
    // printf("Enter the range for Natural numbers: ");
    // scanf("%d", &n);

    //Printing Natural numbers

    // while (i <= n)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    // while (n != 0)
    // {
    //     printf("%d\n", n--);
    // }
    
//-------------------------------------------------------------------------------------------
    //Printing Even numbers

    // while (i <= n)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
//-------------------------------------------------------------------------------------------
    //Printing Odd numbers 

    // while (i <= n)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
//-------------------------------------------------------------------------------------------
    //Printing multiples of 3

    // while (i <= n)
    // {
    //     if (i % 3 == 0)
    //     {
    //         printf("%d\n", i);
    //     }
    //     i++;
    // }
//-------------------------------------------------------------------------------------------
    //Printing the Upper case till user input

    // int i = 'A';
    // char ch;
    // scanf("%c", &ch);
    // if (ch >= 'A' && ch <= 'Z'){
    //     while (i <= ch){
    //         printf("%c\n", i);
    //         i++;
    //     }
    // }else {
    //     printf("Invalid input");
    // }
 //-------------------------------------------------------------------------------------------
    //Printing the lower case till user input

    // int i = 'a';
    // char ch;
    // scanf("%c", &ch);
    // if (ch >= 'a' && ch <= 'z'){
    //     while (i <= ch){
    //         printf("%c\n", i);
    //         i++;
    //     }
    // }else {
    //     printf("Invalid input");
    // }
    
    
//-------------------------------------------------------------------------------------------
    //Pirnting the reverse of a number

    // int num;
    // int sum = 0;
    // int rem;
    // scanf("%d", &num);
    // while (num != 0)
    // {
    //     rem = num % 10;
    //     sum = (sum * 10) + rem;
    //     num /= 10;
    // }
    // printf("%d\n", sum);
//-------------------------------------------------------------------------------------------
    //Printing sum of first N natural numbers
    // int i=1;
    // int sum = 0;
    // int n;

    // printf("Enter the number to add upto it: ");
    // scanf("%d", &n);

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // printf("%d\n", sum);
//-------------------------------------------------------------------------------------------
    
    int a,d,n = 0;
    int count = 0;

    printf("Enter the first number for AP/GP: ");
    scanf("%d", &a);
    printf("Enter the difference for AP/GP: ");
    scanf("%d", &d);
    printf("Enter the no.of steps neede for AP/GP: ");
    scanf("%d", &n);
    // printing AP of a given number upto N
    // while (count < n)
    // {
    //     printf("%d\t", a);
    //     a += d;
    //     count++;
    // }

    //printing AP of a given number upto N
    while (n > 0)
    {
        printf("%d\t", a);
        a += d;
        n--;
    }

    //Printing Nth term of AP of a given number
    // while (n > 0)
    // {
    //     a += d;
    //     n--;
    // }
    // printf("%d\t", a);

    //Printing AP series less than or equal to N
    // while (a <= n)
    // {
    //     printf("%d\t", a);
    //     a += d;
    // }

    //printing Nth term of AP of a given number 
    // while (count < n)
    // {
    //     a += d;
    //     count++;
    // }
    // printf("%d\t", a);


    //printing GP of a given number <=  N
    // while (a <= n)
    // {
    //     printf("%d\t", a);
    //     a *= d;
    // }

    //printing GP of a given number upto to N
    // while (count < n)
    // {
    //     printf("%d\t", a);
    //     a *= d;
    //     count++;
    // }

    // printing Nth term of GP of a given number 
    // while (count < n)
    // {
    //     a *= d;
    //     count++;
    // }
    // printf("%d\t", a);

    //Printing Nth term by using another method
    // while (n > 0)
    // {
    //     a *= d;
    //     n--;
    // }
    // printf("%d\t", a);


 //-------------------------------------------------------------------------------------------   
//-------------------------------------------------------------------------------------------

    // for (int i = 0; i < 10; i+=2) {
    //     printf("%d", i);
    // }
}