# Student Grade Management System

## Description
A console-based C program to manage students' marks and grades. 
Students can be added, displayed, searched, and updated. 
Grades are automatically calculated based on marks.

## Features
- Add Student with marks and auto-assigned grade
- Display all students
- Search student by roll number
- Update student marks and grade
- Input validation for numbers
- Modular structure: main.c, student.c, utils.c, student.h

## Folder Structure
student-grade-manager/
│── src/
│   ├── main.c
│   ├── student.c
│   └── utils.c
│── include/
│   ├── student.h
│   └── utils.h
│── Makefile
│── README.md

## How to Run
1. Compile all C files using the Makefile:
   or manually:
   gcc src/main.c src/student.c src/utils.c -o student_manager
2.Run the program :
./student_manager






