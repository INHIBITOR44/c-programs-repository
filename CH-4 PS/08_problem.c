#include <stdio.h>

int main()
{

    int product = 1;
    int n = 0;

    for (int i = 1; i <= n; i++)
    {

        product *= i;
    }
    printf("factorial ka value hai %d", product);

    return 0;
}