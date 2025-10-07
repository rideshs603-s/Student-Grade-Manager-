#include <stdio.h>
#include "student.h"

// Function to calculate grade from marks
char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 50) return 'C';
    else return 'F';
}

// Function to add a new student
void addStudent(Student students[], int *count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]s", students[*count].name); // reads string with spaces
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    students[*count].grade = calculateGrade(students[*count].marks);

    (*count)++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents(Student students[], int count) {
    printf("\n--- Student List ---\n");
    for(int i = 0; i < count; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f, Grade: %c\n",
               students[i].roll, students[i].name, students[i].marks, students[i].grade);
    }
    if(count == 0) printf("No students added yet!\n");
}
