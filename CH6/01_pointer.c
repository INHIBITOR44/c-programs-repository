#include <stdio.h>

int main(){
    
    int i=99;
    int* j=&i;//ek pointer hai jo i ko batara 
    int  k;
    char T='A';
    char* l=&T;//ek pointer hai a bta ra
    


    printf("i ke address ki value hai %p\n",&i);
    printf("j ke address ki value hai %p\n",j);
    printf("k   hai %d", *(&i));
    
    return 0;
}