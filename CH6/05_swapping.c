#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 33, b = 44;

    swap(&a, &b);
    printf("the value of the item a is %d,and the value of item b is %d ", a, b);

    return 0;
}