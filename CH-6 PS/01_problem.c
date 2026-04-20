#include <stdio.h>



int main(){
    

    int a=44;
    int *b=&a;

    printf("the address of a is %p ",*b);
    printf("the value a on the address is %d",*b);
    return 0;
}