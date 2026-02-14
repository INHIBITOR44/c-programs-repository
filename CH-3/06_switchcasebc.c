#include <stdio.h>

int main() {
    int a;
    printf("a daal madar: ");
    scanf("%d", &a);

    switch(a) {
        case 1:
            printf("1 dala lode\n");
            break;
        case 2:
            printf("2 dala \n");
            break;
        case 3:
            printf("3 dala \n");
            break;
        default:
            printf("kuch to dalde madar\n");
            break; 
    }

    return 0;
}