#include<stdio.h>
int main() {
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1 > num2 && num1 > num3 ? (num1) : (num2 > num3 ? num2 : num3);
    printf("%d ", max);

    int min = num1 < num2 && num1 < num3 ? (num1) : (num2 < num3 ? num2 : num3);
    printf("%d ", min);

    // int mid = ((num1>num2 && num1<num3) || (num1>num3 && num1<num2)) ? (num1) : ((num2>num1 && num2<num3)||(num2>num3 && num2<num1) ? num2 : num3);
    int mid = (num1>num2) ? ((num1<num3) ? num1 : num2) : ((num2<num3) ? num2 : num3);
    printf("%d", mid);
}