#include<stdio.h>
int main() {
//read array ele feom file and print on terminal
    int size = 0;
    char ch;
    FILE* fptr = fopen("array.txt","r");
    int arr[100];
    fscanf(fptr,"%d",&arr[size]);
    while((ch = getc(fptr)) != EOF){
        if(ch == '\n'){
           size++;
        }
        fscanf(fptr,"%d",&arr[size]);
    }

    printf("%d\n",size);
    for(int i=0;i<=size;i++)
    {
        printf("%d\n",arr[i]);
    }



//read from user and write to file
    /*FILE* fptr = fopen("array.txt","w");
    int size = 5;
    int arr[size];
    char ch;
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<size;i++){
        fprintf(fptr,"%d\n",arr[i]);
    }*/
}