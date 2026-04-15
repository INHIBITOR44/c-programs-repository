#include <stdio.h>

int main(){
    
    int i=99;
    int* j=&i;//ek pointer hai jo i ko batara 
    int  k;

    printf("i ke address ki value hai %p\n",&i);
    printf("j ke address ki value hai %p\n",j);
    printf("k ki baat karte hai %d", *(&i));

    return 0;
}