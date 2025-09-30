// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <strings.h>
// #include <stdarg.h>
// #include <stdbool.h>
// #define SUBJECTS 6

// typedef struct student {
//     int id;
//     char name[20];
// }Student;

// typedef struct class {
//     int subject[SUBJECTS];
//     int total;
//     Student student[40];
// }Class;

// void max_marks(Class* class, int students) {
//     int max_marks = -9999;
//     int student_id;

//     for (int i = 0; i < students; i++) {

//         if (class[i].total > max_marks) {
//             max_marks = class[i].total;
//             student_id = i;
//         }
//     }

//     char* name = class[student_id].student[student_id].name;
//     int total = class[student_id].total;

//     printf("%s got the maximum marks of %d out of the class.\n", name, total);
//     printf("Marks in each subject are: ");
//     for (int j = 0; j < SUBJECTS; j++) {
//         printf("%d ", class[student_id].subject[j]);
//     }
//     printf("\n");
// }

// void read_student_marks(Class* class, int students) {
//     int id, subj1, subj2, subj3;
//     char temp_name[20];
//     for (int i = 0; i < students; i++) {
//         printf("Enter the student %d ID: ", i+1);
//         scanf("%d", &id);
//         getchar();
//         printf("Enter the student %d name: ", i+1);
//         scanf("%[^\n]", temp_name);

//         class[i].student->id = id;
//         strcpy(class[i].student->name, temp_name);
        
//         class[i].total = 0;
//         for (int j = 0; j < SUBJECTS; j++) {
//             printf("Enter sub%d marks: ", i+1);
//             scanf("%d", &class[i].subject[j]);
//             class[i].total += class[i].subject[j];
//         }
//     }
// }
// int main() {
//     Class class[40];
//     read_student_marks(class, 3);
//     max_marks(class, 3);
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <stdarg.h>
#include <stdbool.h>
#define SUBJECTS 6

typedef struct student {
    int id;
    char name[20];
} Student;

typedef struct class {
    int subject[SUBJECTS];
    int total;
    Student* student;
} Class;

void max_marks(Class** class, int students) {
    int max_marks = -9999;
    int student_id;

    for (int i = 0; i < students; i++) {
        if (class[i]->total > max_marks) {
            max_marks = class[i]->total;
            student_id = i;
        }
    }

    char* name = class[student_id]->student->name;
    int total = class[student_id]->total;

    printf("%s got the maximum marks of %d out of the class.\n", name, total);
    printf("Marks in each subject are: ");
    for (int j = 0; j < SUBJECTS; j++) {
        printf("%d ", class[student_id]->subject[j]);
    }
    printf("\n");
}

void read_student_marks(Class** class, int students) {
    int id;
    char temp_name[20];
    for (int i = 0; i < students; i++) {
        class[i] = (Class*)malloc(sizeof(Class));
        class[i]->student = (Student*)malloc(sizeof(Student));

        printf("Enter the student %d ID: ", i + 1);
        scanf("%d", &id);
        getchar();
        printf("Enter the student %d name: ", i + 1);
        scanf("%[^\n]", temp_name);

        class[i]->student->id = id;
        strcpy(class[i]->student->name, temp_name);

        class[i]->total = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter sub%d marks: ", j + 1);
            scanf("%d", &class[i]->subject[j]);
            class[i]->total += class[i]->subject[j];
        }
    }
}

int main() {
    Class* class[40];
    read_student_marks(class, 3);
    max_marks(class, 3);

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(class[i]->student);
        free(class[i]);
    }

    return 0;
}

