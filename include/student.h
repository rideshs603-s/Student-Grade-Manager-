#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
    int roll;
    char name[50];
    float marks;
    char grade;
} Student;

void addStudent(Student students[], int *count);
void displayStudents(Student students[], int count);
char calculateGrade(float marks);

#endif
