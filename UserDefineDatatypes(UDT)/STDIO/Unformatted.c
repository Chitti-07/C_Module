#include<stdio.h>
#include<ctype.h>
#include<unistd.h>

int main() {
    // char ch;
    // unsigned char ch;
    // char name[] = "chitti";

//--------------------------------------------------------------------------------------------------------------
    //Reading and writing character from user

    // ch = getc(stdin);
    // putc(ch, stdout);
    // printf("%c ", ch);

    // ch = getchar();
    // // putchar(ch);
    // printf("%c ", ch);

    // while ((ch = getchar()) != EOF){
    //     putchar(ch);
    // }

    // while ((ch = getchar()) != EOF){
    //     putchar(toupper(ch));
    // }
    // puts("EOF received");

//--------------------------------------------------------------------------------------------------------------
    
    // char str[5];
    // // gets(str);
    // // puts(str);

    // fgets(str, 5, stdin);
    // puts(str);
//--------------------------------------------------------------------------------------------------------------

    // printf(name);
    // printf("hello", name);

    // int persentage = 10;
    // printf("Loading [");
    // // sleep(1);
    // while (persentage > 0){
    //     // sleep(1);
    //     printf("-");
    //      sleep(1);
    //     persentage--;
    //     // sleep(1);
    // }
    // sleep(1);
    // printf("]");

    // int i = 0;
    // printf("Loading [");
    // while (i != 100)
    // {
    //     printf("-");
    //     usleep(1000);
    //     i++;
    // }
    // printf("]");

    //----------------------------printf function------------------------------
    /*int ret;
    // ret = printf("%d\n",123);       //4
    ret = printf("%d",123);             //3
    printf("%d",ret);*/


    /*int ret = 0;
    ret = printf("hello");
    printf("%d",ret);*/   //hello5


    //printf("%d %d",printf("hello\n"),printf("emertxe"));   //emertxe hello 6 7



//------------------------------sprintf function---------------------------------
    /*int x = 10;
    char ch = 'A';
    float f = 1.23;
    char str[20];
    sprintf(str,"%d %c %f",x,ch,f);     //nothing is printed(contents stored in str)
    printf("%s",str);*/                 //10 A 1.230000



//--------------------------------scanf function------------------------
    /*int x;
    char ch;
    scanf("%d",&x);
    scanf("%c",&ch);
    printf("%d %C",x,ch);       //123



    int x;
    char ch;
    scanf("%d",&x);
    getchar();
    scanf("%c",&ch);
    printf("%d %C",x,ch);       //123 a



    int x;
    char ch;
    scanf("%d",&x);
    scanf(" %c",&ch);
    printf("%d %C",x,ch);*/         //123 a

//--------
    /*int x;
    char ch;
    float f;
    scanf("%d%c%f",&x,&ch,&f);      //123 a 1.23                    //123a1.23
    printf("%d %c %f",x,ch,f);      //123   0.000000                //123a1.23





    int x;
    char ch;
    float f;
    scanf("%d %c %f",&x,&ch,&f);            //123 a 1.23 
    printf("%d %c %f",x,ch,f);*/              //123 a 1.23



//----------------
    /*int x;
    char ch;
    float f;
    scanf("%da%c",&x,&ch);          //123 a         //123aa             //123bc
    printf("%d %c",x,ch);*/           //123           //123 a             //123



    /*int date;
    int month;
    int year;
    scanf("%d/%d/%d/",&date,&month,&year);       //19 9 2003                    // 19/9/2003
    printf("%d %d %d",date,month,year);*/         //19 0 11870336                 // 19 9 2003



    /*int h;
    int m;
    int s;
    scanf("%d:%d:%d:",&h,&m,&s);            //12 3 53               //12:3:53
    printf("%d %d %d",h,m,s);             //12 0 12329088           //12 3 53



    int h=1;
    int m=44;
    int s=55;
    scanf("%d:%d:%d:",&h,&m,&s);            //12 3 53           //12:3:53
    printf("%d %d %d",h,m,s);*/             //12 44 55          //12 3 53


//----------------
    /*int x;
    char ch;
    float f;
    scanf("%d*%c*%f",&x,&ch,&f);
    printf("%d %c %f",x,ch,f);*/

//-----------
    // char str[10];
    // char str1[20];
    // scanf("%[a-zA-Z]",str);    //emertxe123
    // printf("%s",str);           //emertxe


    // scanf("%[0-9]",str1);     //123e45
    // printf("%s",str1);          //123

    char ch = 'y';
    printf("Enter the string: ");
    while (ch != 'n') {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    return 0;
}