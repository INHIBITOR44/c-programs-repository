#include <stdio.h>
float c2f(float);

float c2f(float faheranite)
{

    return (9.0 / 5.0) * (faheranite - 32);
}

int main()
{
float faheranite;

printf("temperature bata %f");
scanf("%f",&faheranite);
printf("%f ye faheranite ki value hai %f celcius me",faheranite,c2f(faheranite));
    return 0;
}