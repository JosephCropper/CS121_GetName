#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL)); 
    int rng = rand() % 100;
    int guess;
    while (1){
        printf("Guess the number: ");
        scanf("%d", &guess);
        if (guess == rng){
            printf("Got it! Number was: %d", rng);
            return 0;
        }
        else if (guess > rng){
            printf("Too High!\n");
        }
        else{
            printf("Too Low!\n");
        }
    }
    return 0;
}

