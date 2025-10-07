#include <stdio.h>

int getInt() {
    int n;
    while(scanf("%d", &n) != 1) {
        while(getchar() != '\n');
        printf("Invalid input, enter an integer: ");
    }
    return n;
}

float getFloat() {
    float f;
    while(scanf("%f", &f) != 1) {
        while(getchar() != '\n');
        printf("Invalid input, enter a number: ");
    }
    return f;
}
