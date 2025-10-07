#include <stdio.h>

typedef struct {
    int roll;
    char name[50];
    float marks;
    char grade;
} Student;

int main() {
    printf("===== Student Grade Management System =====\n");
    printf("1. Add Student\n2. Display Students\n3. Exit\n");
    return 0;
}
