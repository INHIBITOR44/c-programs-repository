#include <stdio.h>

int factorial(int);


int factorial(int n){
if (n==1 || n==0){
return 1;}
    return factorial (n-1)* n;}

int main(){
    
int a=20;
printf("factorial %d ki value hai %d",a,factorial(a));


    return 0;
}