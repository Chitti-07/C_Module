#include <stdio.h>

void moveZerosToFront(int arr[], int size) {
    int count = size - 1;  // Index to place non-zero elements

    // Traverse array from end and move non-zero elements to the back
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count--;
        }
    }

    // Fill the beginning of the array with zeros
    while (count >= 0) {
        arr[count] = 0;
        count--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    moveZerosToFront(arr, size);

    printf("Modified array: ");
    printArray(arr, size);

    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Student {
//     int roll;
//     char name[20];
//     int* marks;
//     char grade;
//     float average;
// }sinfo;


// int main() {
//     int n;
//     printf("Enter no.of students : ");
//     scanf("%d", &n);
//     sinfo student[n];
    
//     int sub;
//     printf("Enter no.of subjects : ");
//     scanf("%d", &sub);
    
//     char subjects[sub][20];
//     for (int i = 0; i < sub; i++) {
//         printf("Enter the name of subject %d : ", i+1);
//         scanf("%s", subjects[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         printf("----------Enter the student datails-------------\n");
//         printf("Enter the student Roll no. : ");
//         scanf("%d", &student[i].roll);
//         getchar();
//         printf("Enter the student %d name : ", i+1);
//         scanf("%[^\n]", student[i].name);
//         getchar();
//         student[i].marks = calloc(sub, sizeof(int));
//         for (int j = 0; j < sub; j++) {
//             printf("Enter %s mark : ", subjects[j]);
//             scanf("%d", &student[i].marks[j]);
//         }
        
//     }

//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = 0; j < sub; j++) {
//             sum+= student[i].marks[j];
//         }
//         student[i].average = (float)sum / sub;
//         if (student[i].average >= 90) {
//             student[i].grade = 'A';
//         }else if (student[i].average >= 80 && student[i].average <= 89) {
//             student[i].grade = 'B';
//         }else if (student[i].average >= 70 && student[i].average <= 79) {
//             student[i].grade = 'C';
//         }else if (student[i].average >= 60 && student[i].average <= 69) {
//             student[i].grade = 'D';
//         }else if (student[i].average >= 50 && student[i].average <= 59) {
//             student[i].grade = 'E';
//         }else {
//             student[i].grade = 'F';
//         }
//     }

//     int choice;
//     int particular;
//     int tempRoll;
//     char tempName[20];
//     int flag;
//     do {

//         printf("----Display Menu----\n");
//         printf("1. All student details\n2. Particular student details\nEnter your choice : ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//             case 1:
//                 printf("Roll.no\t\tname\t\t");
//                 for(int i = 0;i < sub; i++)
//                 {
//                     printf("%s\t\t", subjects[i]);
//                 }
//                 printf("Average\t\tGrade\n");
//                 for (int i = 0; i < n; i++) {
//                     printf("%d\t\t%s\t\t", student[i].roll, student[i].name);
//                     for (int j = 0; j < sub; j++) {
//                         printf("%d\t\t", student[i].marks[j]);
//                     }
//                     printf("%f\t\t%c\n", student[i].average, student[i].grade);
//                 }
//                 break;
//             case 2:
//                 printf("1. Name.\n2. Roll no.\nEnter you choice : ");
//                 scanf("%d", &particular);
//                 getchar();
//                 switch (particular)
//                 {
//                 case 1:
                    
//                     flag = 0;
//                     printf("Enter the name of the student : ");
//                     scanf("%[^\n]", tempName);
//                     for (int i = 0; i < n; i++) {
//                         if (!strcasecmp(tempName, student[i].name)) {
//                             printf("Roll.no\t\tname\t\t");
//                             for(int i = 0;i < sub; i++)
//                             {
//                                 printf("%s\t\t", subjects[i]);
//                             }
//                             printf("Average\t\tGrade\n");
//                             printf("%d\t\t%s\t\t", student[i].roll, student[i].name);
//                             for (int j = 0; j < sub; j++) {
//                                 printf("%d\t\t", student[i].marks[j]);
//                             }
//                             printf("%f\t\t%c\n", student[i].average, student[i].grade);
//                             flag = 1;
//                             break;
//                         }
//                     }
//                     if (flag == 0) {
//                         printf("Student with %s not found\n", tempName);
//                     }
//                     break;
//                 case 2:
//                     flag = 0;
//                     printf("Enter the RollNo of the student : ");
//                     scanf("%d", &tempRoll);
//                     for (int i = 0; i < n; i++) {
//                         if (tempRoll == student[i].roll) {
//                             printf("Roll.no\t\tname\t\t");
//                             for(int i = 0;i < sub; i++)
//                             {
//                                 printf("%s\t\t", subjects[i]);
//                             }
//                             printf("Average\t\tGrade\n");
//                             printf("%d\t\t%s\t\t", student[i].roll, student[i].name);
//                             for (int j = 0; j < sub; j++) {
//                                 printf("%d\t\t", student[i].marks[j]);
//                             }
//                             printf("%f\t\t%c\n", student[i].average, student[i].grade);
//                             flag = 1;
//                             break;
//                         }
//                     }
//                     if (flag == 0) {
//                         printf("Student with %d not found\n", tempRoll);
//                     }
//                     break;
//                 default:
//                     printf("Enter valid option\n");
//                     break;
//                 }
//                 break;
//             default:
//                 printf("Enter valid choice\n");
//                 break;
//         }

//     }while (choice != 3);
// }
