#include <stdio.h>

float force(float );

float force (float m){


    return m*9.8; 
}




int main(){
    
    float m;
    printf("mass ka value dal:");
    scanf("%f",&m);
    printf("the value of force is %f\n",force(m));

    return 0;
}