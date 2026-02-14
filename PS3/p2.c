#include <stdio.h>

int main()
{

    int marks1, marks2, marks3;

    printf("Enter 3 marks: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    printf("the marks are %d,%d and %d\n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {

        printf("faill\n");
    }

    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {

        printf("fail ho gye janaba\n");
    }
    else {
        printf("passsssss!!!!!!!!!!!!\n");    }
    return 0;
}