#include <stdio.h>

int sum(int*,int*);


int sum(int* a,int* b){
    *a=343;
return *a+*b;

}


int main(){
   int x=44;
   int y=55;
    printf("the value of sum is %d\n",sum(&x,&y));
    printf("the value of x is %d\n",x);
    return 0;
}