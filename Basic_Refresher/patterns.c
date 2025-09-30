#include<stdio.h>
#include <math.h>
int main () {
    int n;
    // int m;
    scanf("%d", &n);
    // scanf("%d", &m);


    /*
    * * * * 
    * * * * 
    * * * * 
    * * * * 
    */

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------
    /*
    * 
    * * 
    * * * 
    * * * * 
    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    /*
       *
      **
     ***
    ****
    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if ((i + j) > n){
    //             printf("*");
    //         }else {
    //             printf(" ");
    //         }
            
    //     }
    //     printf("\n");
    // }

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n - i); j++) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
/*

****
 ***
  **
   *

*/
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i <= j) {
    //             printf("*");
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    // for (int i = n; i >= 1; i--) {

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= n-i; j++) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------
   
   /*
   
   *****
   ****
   ***
   **
   *
   
   */
   

    // for (int i = 1; i <= n; i++) {
    //     for (int j = i; j <= n; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------

    /*

    AbCd
    eFgH
    IjKl
    mNoP
    
    */
    // char ch = 'A';

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if ((i + j) % 2 == 0){
    //             // printf("%c", ch+j);  
    //             printf("%c", ch); 
    //         }else {
    //             printf("%c", ch+32);  
    //         }
    //         ch++;
    //     }
    //     //ch+=n;
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

    1
    12
    123
    1234
    
    */
    
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    /*

    1
    22
    333
    4444
    
    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------
    /*

    1 
    2 3 
    4 5 6 
    7 8 9 10 
    
    */
    
    // int c = 1;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d ", c);
    //         c++;
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

    4 
    4 3 
    4 3 2 
    4 3 2 1 
    
    */
    
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d ", (n-j+1));
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

    A 
    B C 
    D E F 
    G H I J 
    
    */
    
    // char ch = 'A';
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         printf("%c ", ch);
    //         ch++;
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

    1 
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1 

    */
    
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         if ((i+j) % 2 == 0) {
    //             printf("1 ");
    //         }else {
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    
    /*

    A 
    b C 
    D e F 
    g H i J 

    */
    
    // char ch = 'A';
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         if ((i+j) % 2 == 0) {
    //             printf("%c ", ch);
    //         }else {
    //             printf("%c ", ch + 32);
    //         }
    //         ch++;
    //     }
    //     // ch+=i;
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    
    4321
     321
      21
       1

     */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i <= j) {
    //             printf("%d", (n-j+1));
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= (n - i); j++) {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= i; k++) {
    //         printf("%d", i-k+1);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    
    1
    12
    1 3
    1  4
    1   5

    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         if (j == 1 || j == i) {
    //             printf("%d", j);
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*  $$$***$$$   */

    // for (int i = 1; i <= n/m; i++) {
    //     printf("$ ");
    // }
    // for (int j = n/m; j < (n-m); j++) {
    //     printf("* ");
    // }
    // for (int k = (n-m); k < n; k++) {
    //     printf("$ ");
    // }

    // for (int i = 1; i < (n/2)-2; i++) {
    //     printf("$ ");
    // }
    // for (int j = (n/2)-1; j <= (n-m); j++) {
    //     printf("* ");
    // }
    // for (int k = (n-m)+1; k <= n; k++) {
    //     printf("$ ");
    // }
    // printf("%d", n/m);

    // for (int i = 1; i <= m; i++) {
    //     printf("$ ");
    // }
    // for (int j = m+1; j <= (n-m); j++) {
    //     printf("* ");
    // }
    // for (int k = (n-m)+1; k <= n; k++) {
    //     printf("$ ");
    // }
//----------------------------------------------------------------------------------
    
    /*
          *
         ***
        *****
       *******
    
    */
    

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2*i-1); k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    /*

      *******
       *****
        ***
         *   
    
    */
    //Second Method
    // for (int i = (n-1); i >= 1; i--) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2*i-1); k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    /*
    
    * 
   * * 
  * * * 
 * * * * 
  * * * 
   * * 
    * 
    
    */
    // for (int row = 0; row < 2*n; row++) {
    //         //no.of cols to be printed in a row
    //         int totalCols = row > n ? 2*n - row : row;
    //         //spaces to be given
    //         int spaces = n - totalCols;
    //         for (int i = 0; i <= spaces; i++) {
    //             printf(" ");
    //         }
    //         for (int col = 0; col < totalCols; col++) {
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }


    //Second method 
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2*i-1); k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // for (int i = (n-1); i >= 1; i--) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2*i-1); k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

        * * * * 
        *     * 
        *     * 
        * * * * 
    
    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n) {
    //             printf("* ");
    //         }else if (j == 1 || j == n){
    //             printf("* ");
    //         }else {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------


    /*
    *****
    *   *
    * * *
    *   *
    *****
    
    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n) {
    //             printf("*");
    //         }else if (j == 1 || j == n){
    //             printf("*");
    //         }else if (i == (n/2)+1 && j == (n/2)+1) {
    //             printf("*");
    //         }
    //         else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    /*
    
    *   *
     * * 
      *  
     * * 
    *   *
    * 
    */
    
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++) {
    //         if (i == j || (i+j == (n+1))) {
    //             printf("*");
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    
    1   1
     2 2 
      3  
     2 2 
    1   1

    */
    // for (int i = 1; i <= (2*n)-1; i++){
    //     for (int j = 1; j <= (2*n)-1; j++) {
    //         if (i == j) {
    //             int s = j > n ? (2*n)-j : j;
    //             printf("%d", s);
    //         }else if (i+j == 2*n) {
    //             int s1 = i > n ? (2*n)-i : i;
    //             printf("%d", s1);
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    /*
    
       1
      123
     12345
    1234567

    */
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2*i-1); j++) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

       1
      121
     12321
    1234321

    */

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d", j);
    //     }
    //     for (int j = (i-1); j >= 1; j--) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------
    /*
    
     *****
      ***
       *
    */
    // for (int i = n-1; i >= 1; i--) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2*i-1); j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    1234321
     12321
      121
       1
     */
    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++) {
    //         printf("%d", j);
    //     }
    //     for (int j = (i-1); j >= 1; j--) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    
    1234567
     12345
      123
       1

    */
    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= (n-i); j++) {
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= (2*i-1); j++) {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*

       *   
      * *  
     *   * 
    *******

    */
    // for (int i = n; i >= 1; i--){
    //     for (int j = 1; j < 2*n; j++) {
    //         if (i == j || (i+j) == 2*n) {
    //             printf("*");
    //         }else if (i == 1) {
    //             printf("*");
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------
    /*

    *
    **
    ***
    ****
    ***
    **
    *
    
    */
    // for (int i = 1; i <= ((2*n)-1); i++) {
    //     int a = n;
    //     int cols = i <= n ? i : ((2*n)-i); 
    //     for (int j = 1; j <= cols; j++) {
    //         int ele = i <= n ? (n-i+j) : (i-n+j);
    //         printf("%d ", ele);
    //     }
    //     printf("\n");
    // }




//----------------------------------------------------------------------------------


    /*
    
       *
      **
     ***
    ****
     ***
      **
       *

    */
    // for (int i = 1; i < 2*n; i++) {
        
    //     int space = i <= n ? (n-i) : (i-n);
    //     for (int j = 1; j <= space; j++) {
    //         printf(" ");
    //     }
    //     int cols = i >= n ? ((2*n)-i) : i; 
    //     // for (int j = 1; j <= cols; j++) {
    //     for (int j = cols; j >= 1; j--) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // for (int i = 1; i <= (2*n-1); i++) {
    //     int star = (i <= n) ? i : (2 * n - i);
    //     int space = n - star;

    //     for (int j = 1; j <= space; j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= star; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    /*
    
       4
      43
     432
    4321
     432
      43
       4

    */
    // for (int i = 1; i < 2*n; i++) {
    //     int a = n;
    //     int space = i <= n ? (n-i) : (i-n);
    //     for (int j = 1; j <= space; j++) {
    //         printf(" ");
    //     }
    //     int cols = i > n ? ((2*n)-i) : i; 
    //     for (int j = cols; j >= 1; j--) {
    //         printf("%d", a);
    //         a--;
    //     }
        
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    // char ch = 'A';
    // for (int i = 0; i <= n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         printf("%c", ch+j);
    //     }
    //     // ch+=i;
    //     printf("\n");
    // }

//----------------------------------------------------------------------------------

    /*
            1 2 3 4
            5   6 
            7 8  
            9 
    
    */
    // int val = 1;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || j == 1) {
    //             printf("%d ", val);
    //             val++;
    //         }else if (i+j == n+1) {
    //             printf("%d ", val);
    //             val++;
    //         }
    //         else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // int val = 1;
    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) {
    //         if (i == n || j == 1) {
    //             printf("%d ", val);
    //             val++;
    //         }else if (i == j) {
    //             printf("%d ", val);
    //             val++;
    //         }
    //         else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= (n - i); j++) {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= (2*i-1); k++) {
    //         printf("%d", k);
    //     }
    //     printf("\n");
    // }
//----------------------------------------------------------------------------------

        // int originalN = n;
        // n = 2 * n;
        // for (int row = 0; row <= n; row++) {
        //     for (int col = 0; col <= n; col++) {
        //         int atEveryIndex = originalN - (int)fmin((int)fmin(row, col), (int)fmin(n - row, n - col));
        //         printf("%d ", atEveryIndex);
        //     }
        //     printf("\n");
        // }
//----------------------------------------------------------------------------------


// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
    for(int i = 1; i <= (2*n-1); i++) {
        int cols1 = i <= n ? i : (2*n-i);
        for (int j = 1; j <= cols1; j++) {
            printf("*");
        }

        int cols2 = (i <= n) ? i : (2*n-i);
        int spaces = 2*n - (2*cols2);

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= cols2; j++) {
            printf("*");
        }
        printf("\n");
    }
//----------------------------------------------------------------------------------

                // ********
                // ***  ***
                // **    **
                // *      *
                // *      *
                // **    **
                // ***  ***


                
    // for (int i = 0; i < n; i++) {
    //     // Left stars
    //     for (int j = 0; j < (n - i); j++) {
    //         printf("*");
    //     }

    //     // Spaces in the middle
    //     for (int j = 0; j < (2 * i); j++) {
    //         printf(" ");
    //     }

    //     // // Right stars
    //     for (int j = 0; j < (n - i); j++) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = n - 1; i >= 0; i--) {
    //     // Left stars
    //     for (int j = 0; j < (n - i); j++) {
    //         printf("*");
    //     }

    //     // Spaces in the middle
    //     for (int j = 0; j < (2 * i); j++) {
    //         printf(" ");
    //     }

    //     // Right stars
    //     for (int j = 0; j < (n - i); j++) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for (int i = 0; i < n; i++) {
    //     // Print leading spaces for alignment
    //     for (int space = 0; space < n - i - 1; space++) {
    //         printf(" ");
    //     }

    //     int num = 1; // First element is always 1
    //     for (int j = 0; j <= i; j++) {
    //         printf("%d ", num);
    //         num = num * (i - j) / (j + 1); // Compute next element using binomial coefficient
    //     }
    //     printf("\n");
    // }
    // int c = 1;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || j == 1) {
    //             printf("%d ", c++);
    //         }else if (i+j == n+1){
    //             printf("%d ", c++);
    //         }else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }


}



