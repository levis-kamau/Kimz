#include <stdio.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    FILE *file;
    int i;

    // Open the file for writing
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read names and marks of 5 students
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Write the data to the file
    for (i = 0; i < MAX_STUDENTS; i++) {
        fprintf(file, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    // Close the file
    fclose(file);
    printf("Data successfully written to students.txt\n");

    return 0;
}