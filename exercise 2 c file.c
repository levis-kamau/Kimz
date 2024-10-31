#include <stdio.h>
#include <stdlib.h>

#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    float marks;
} Student;

int main() {
    Student *students;
    int n, i;
    FILE *file;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n students
    students = (Student *)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Open the file for appending
    file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        free(students);
        return 1;
    }

    // Read names and marks of n students
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Write the data to the file
    for (i = 0; i < n; i++) {
        fprintf(file, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    // Close the file and free allocated memory
    fclose(file);
    free(students);
    
    printf("Data successfully appended to students.txt\n");

    return 0;
}