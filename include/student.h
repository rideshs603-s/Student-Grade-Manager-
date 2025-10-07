#ifndef STUDENT_H
#define STUDENT_H


typedef struct {
    int roll;
    char name[50];
    float marks;
    char grade;
} Student;

// Phase 2 functions
void addStudent(Student students[], int *count);
void displayStudents(Student students[], int count);
char calculateGrade(float marks);

// Phase 3 functions
void searchStudent(Student students[], int count, int roll);
void updateStudent(Student students[], int count, int roll);

#endif
