#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

int main() {
    Student students[100];
    int count = 0;
    int choice;

    while(1) {
        printf("\n===== Student Grade Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int roll;
        switch(choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                printf("Enter roll to search: ");
                scanf("%d", &roll);
                searchStudent(students, count, roll);
                break;
            case 4:
                printf("Enter roll to update: ");
                scanf("%d", &roll);
                updateStudent(students, count, roll);
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
