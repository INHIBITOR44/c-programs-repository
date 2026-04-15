#include <stdio.h>

int main() {
    char grade;
    int marks = 90;

    if (marks <= 100 && marks >= 90) {
        grade = 'A';
    } else if (marks <= 90 && marks >= 70) {
        grade = 'B';
    } else if (marks <= 70 && marks >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Tera grade hai: %c\n", grade);
    return 0;
}