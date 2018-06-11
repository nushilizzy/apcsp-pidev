#include <stdio.h>
#include <string.h>

struct Student {
        char firstName[20];
        char lastName[20];
        int age;
        int studentID;
};

void printStudent(struct Student* student) {
        printf("First Name: %s\n", student->firstName);
        printf("Last Name: %s\n", student->lastName);
        printf("Age: %d\n", student->age);
        printf("Student ID: %d\n", student->studentID);
        printf("\n");
}

void foo() {

        struct Student students[256];
        char checkDone[10];
        int index = 0;

        while (1) {

          char input[256];

          printf("Input student first name: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", students[index].firstName);

          printf("Input student last name: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", students[index].lastName);

          printf("Input student age: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%d", &students[index].age);

          printf("Input student ID: \n");
          fgets(input, 256, stdin);
          sscanf(input, "%d", &students[index].studentID);

          index++;

          printf("If you are done, type 'done'. If not, press enter.\n");
          fgets(input, 256, stdin);
          sscanf(input, "%s", checkDone);

            if(strcmp(checkDone, "done") == 0) break;

        }

        for (int i = 0; i < index; i++) {
          printStudent(&students[i]);
        }
}
