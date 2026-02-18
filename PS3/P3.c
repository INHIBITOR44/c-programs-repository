#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("income bata:\n ");
    scanf("%f", &income);

    
    if (income >= 0 && income <= 250000) {
        tax = 0;
    } 
  
    else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);
    } 
    else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * 250000 + 0.2 * (income - 500000);
    } 
    else if (income > 1000000) {
        tax = 0.05 * 250000 + 0.2 * 500000 + 0.3 * (income - 1000000);
    } 
   
    else { 
        printf("negative value dali hai invalid hai\n");
        return 0; 
    }

    printf("total tax itta banta: %f", tax);
    return 0;
}