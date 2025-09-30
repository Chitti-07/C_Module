#include<stdio.h>
#include<string.h>
void Scan_Str(int row, int col, char str[][col]) {
    for (int i = 0; i < row; i++){
        scanf("%s", str[i]);
    }
}
void Print_Str(int row, int col, char str[][col]) {
    for (int i = 0; i < row; i++) {
        printf("%s\n", str[i]);
    }
}
int Str_Cmp(char str1[], char str2[]) {
    for (int i = 0; str1[i]; i++) {
        if ((str1[i] != str2[i]) && (str1[i]+32 != str2[i]) && (str1[i]-32 != str2[i])) {
            return str1[i]-str2[i];
        }
    }
    return 0;
}
char* Str_Cpy(char str1[], char str2[]) {
    int i;
    for (i = 0; str2[i]; i++) {
        str1[i] = str2[i];
    }
    str1[i] = 0;
    return str1;
}
void Sort(int row, int col, char str[][col]) {
    char temp[50];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row-1; j++) {
            if (Str_Cmp(str[j], str[j+1]) > 0) {
                Str_Cpy(temp, str[j]);
                Str_Cpy(str[j], str[j+1]);
                Str_Cpy(str[j+1], temp);
            }
        }
    }
}
int main() {
    int row;
    printf("Row: ");
    scanf("%d", &row);

    int col;
    printf("Word Length: ");
    scanf("%d", &col);
    getchar();
    char str[row][col];

    Scan_Str(row, col, str);
    // Print_Str(row, col, str);
    Sort(row, col, str);
    Print_Str(row, col, str);

    // char str2[] = "a";
    // char str1[] = "b";
    // // printf("%s", Str_Cpy(str1, str2));
    // printf("%d", Str_Cmp(str1, str2));
}