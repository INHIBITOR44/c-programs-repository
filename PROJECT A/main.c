#include <stdio.h>
#include <stdlib.h> // Necessary for rand() and srand()
#include <time.h>   // Necessary for time()

int main() {
    // 1. Seed the random number generator with the current time
    srand(time(0));

    // 2. Generate a random number
    // rand() % 100 gives a range of 0 to 99
    // Adding 1 shifts that range to 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int guessed;


    do{
        printf("guess the random number \n");
        scanf{"%d",&guessed};
        no_of_guesses++;


    }while ( )
    {
        /* code */
    }
    
    // 3. Output the result
    printf("Your random number is: %d\n", randomNumber);

    return 0;
}
