#include<stdio.h>
#include<string.h>


struct Student{
    int rollNo;
    char name[20];
    char address[50];
    char mail[20];
};
void ScanStu(struct Student* sptr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &sptr[i].rollNo);
        scanf("%s", sptr[i].name);
        scanf("%s", sptr[i].address);
        scanf("%s", sptr[i].mail);
    }
}
void PrintStu(struct Student* sptr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", sptr[i].rollNo);
        printf("%s ", sptr[i].name);
        printf("%s ", sptr[i].address);
        printf("%s ", sptr[i].mail);
        printf("\n");
    }
}
void CompRollNo(struct Student* sptr, int size, int roll) {
    int flag;
    for (int i = 0; i < size; i++) {
        flag = 0;
        if (sptr[i].rollNo == roll){
            printf("%d %s %s %s\n", sptr[i].rollNo, sptr[i].name, sptr[i].address, sptr[i].mail);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Invalid RollNo ");
    }
}
void CompName(struct Student* sptr, int size, char name[]) {
    int flag = 0;
    for (int i = 0; i < size; i++) {
        if (!(strcmp(sptr[i].name, name))){
            printf("%d %s %s %s\n", sptr[i].rollNo, sptr[i].name, sptr[i].address, sptr[i].mail);
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("Invalid Name ");
    }
}

int main() {

    int Stusize;
    printf("Enter the no.of students for information: ");
    scanf("%d", &Stusize);

    int option2;
    int rollno;
    char name[20];

    //student Array Structure declaration 
    struct Student student[Stusize];
    ScanStu(student, Stusize);

    int option;
    // printf("Select the below options: \n1.Print all\n2.Print particular student\n3.Exit");
    // scanf("%d", &option);

    while (1) {
        printf("Select the below options: \n1.Print all\n2.Print particular student\n3.Exit ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            PrintStu(student, Stusize);
            break;
        case 2:
            // int option2;
            printf("Select the below\n1.Select Rollno: \n2.Select Name: ");
            scanf("%d", &option2);
            // while (1) {
                switch (option2)
                {
                case 1:
                    // int rollno;
                    printf("Enter the rollNo of a student: ");
                    scanf("%d", &rollno);
                    CompRollNo(student, Stusize, rollno);
                    break;
                case 2:
                    // char name[20];
                    printf("Enter the name of a student: ");
                    getchar();
                    scanf("%[^\n]", name);
                    CompName(student, Stusize, name);
                    break;
                default:
                    printf("Invalid option");
                }
            // }
            break;
        case 3:
            return 0;
        default:
            printf("Invalid option");
        }
    }

}