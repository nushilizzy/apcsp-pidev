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


int main() {

	struct Student students[256];
	char checkDone[10];
	int index = 0;

	while (1) {

	  char input[256];

	  printf("Enter student first name: \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", students[index].firstName);

	  printf("Enter student last name: \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", students[index].lastName);

	  printf("Enter student age: \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%d", &students[index].age);

	  printf("Enter student ID: \n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%d", &students[index].studentID);

	  index++;

	  printf("If you are done, type 'done' If you are not, press enter.\n");
	  fgets(input, 256, stdin);
	  sscanf(input, "%s", checkDone);

	    if(strcmp(checkDone, "done") == 0) break;

	}

	for (int i = 0; i < index; i++) {
	  printStudent(&students[i]);
	}

}

