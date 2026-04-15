#include <stdio.h>

float  average (int a,int b,int c);

float average(int a,int b,int c){

    return (a+b+c)/3;
} 



int main(){
    
    int a,b,c;
    printf("Teen numbers dalo sir: ",a,b,c);
    scanf(" %d%d%d",&a,&b,&c);
    printf("%d ,%d ,%d sabka average hai %f",a,b,c, average(a,b,c));



    return 0;
}