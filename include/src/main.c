#include <stdio.h>
#include <stdlib.h>
#include "../include/student.h"

int main() {
    Student students[100]; // array to store up to 100 students
    int count = 0;         // number of students added so far
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
                printf("Add student feature coming soon!\n");
                break;
            case 2:
                printf("Display students feature coming soon!\n");
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
