#include <stdio.h>
#include "student.h"


// Calculate grade based on marks
char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 50) return 'C';
    else return 'F';
}

// Add a new student
void addStudent(Student students[], int *count) {
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].roll);
    printf("Enter Name: ");
    scanf(" %[^\n]s", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);

    students[*count].grade = calculateGrade(students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

// Display all students
void displayStudents(Student students[], int count) {
    printf("\n--- Student List ---\n");
    for(int i = 0; i < count; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f, Grade: %c\n",
               students[i].roll, students[i].name, students[i].marks, students[i].grade);
    }
    if(count == 0) printf("No students added yet!\n");
}

// Search student by roll
void searchStudent(Student students[], int count, int roll) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].roll == roll) {
            printf("Found: Roll: %d, Name: %s, Marks: %.2f, Grade: %c\n",
                   students[i].roll, students[i].name, students[i].marks, students[i].grade);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student with roll %d not found.\n", roll);
}

// Update student marks and grade
void updateStudent(Student students[], int count, int roll) {
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(students[i].roll == roll) {
            printf("Enter new marks for %s: ", students[i].name);
            scanf("%f", &students[i].marks);
            students[i].grade = calculateGrade(students[i].marks);
            printf("Student updated successfully!\n");
            found = 1;
            break;
        }
    }
    if(!found) printf("Student with roll %d not found.\n", roll);
}
