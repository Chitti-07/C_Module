#include<stdio.h>

int My_getword(char str[]) {

    int i = -1;
    while ((str[++i] != ' ') && (str[i] != '\t') && str[i] != 0);
    str[i] = 0;
    return i;

}

int main() {
    char str[256];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("%d", My_getword(str));
}