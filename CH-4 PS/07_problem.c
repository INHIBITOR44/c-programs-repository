#include <stdio.h>

int main(){
    
int n=8;
int sum=0;
    for (int i=1;i<=10;i++){
        sum +=(n*i);                // sum=sum+(n*i)
        printf("%d * %d =%d\n",n,i,n*i);




       
    }
    printf("sum ka total value hai %d\n",sum);


    return 0;
}