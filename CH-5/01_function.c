#include <stdio.h>

// function prototype
int sum(int, int);

// function defination
int sum(int x, int y)
{

    printf("sum is %d\n", x + y);

    return x + y;
}

int main()
{

    int a = 22;
    int b = 34;

    sum(a, b); // function call

    return 0;
}