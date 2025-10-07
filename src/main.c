#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

int main() {
    Student students[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== Student Grade Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
