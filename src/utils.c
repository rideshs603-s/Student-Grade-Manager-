#include <stdio.h>


// Safe integer input
int getInt() {
    int n;
    while(scanf("%d", &n) != 1) {
        while(getchar() != '\n'); // clear invalid input
        printf("Invalid input, enter an integer: ");
    }
    return n;
}

// Safe float input
float getFloat() {
    float f;
    while(scanf("%f", &f) != 1) {
        while(getchar() != '\n');
        printf("Invalid input, enter a number: ");
    }
    return f;
}
