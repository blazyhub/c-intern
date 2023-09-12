#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    int secretNumber = rand() % 100 + 1; 
    int guess, attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the secret number %d in %d attempts!\n", secretNumber, attempts);
        }
    } while (guess != secretNumber);

    return 0;
}
