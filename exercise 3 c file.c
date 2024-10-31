#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 5
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    float marks;
} Student;

void writeToFile(const char *filename, Student *students, int count) {
    FILE *file = fopen(filename, "wb"); // Open file in binary write mode
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(students, sizeof(Student), count, file); // Write array to file
    fclose(file);
}

void readFromFile(const char *filename, Student *students, int count) {
    FILE *file = fopen(filename, "rb"); // Open file in binary read mode
    if (file == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }
    fread(students, sizeof(Student), count, file); // Read array from file
    fclose(file);
}

void displayStudents(Student *students, int count) {
    printf("Students Information:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }
}

int main() {
    Student students[MAX_STUDENTS];

    // Input student data
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    // Write student data to file
    writeToFile("students.dat", students, MAX_STUDENTS);

    // Clear the array for reading back the data
    Student readStudents[MAX_STUDENTS];

    // Read student data from file
    readFromFile("students.dat", readStudents, MAX_STUDENTS);

    // Display the read data
    displayStudents(readStudents, MAX_STUDENTS);

    return 0;
}