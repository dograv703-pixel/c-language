#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1. Word List (5 words)
    char *wordList[] = {"CODING", "DEBUG", "LINUX", "STACK", "LOOPS"};

    // 2. Select Random Word
    srand(time(NULL));
    char *secretWord = wordList[rand() % 5];

    // 3. Prepare hidden word
    char showWord[20];
    int len = strlen(secretWord);
    for(int k = 0; k < len; k++) showWord[k] = '_';
    showWord[len] = '\0'; // Null terminate

    int lives = 5;
    char guess;
    int i, found;

    printf("--- SIMPLE HANGMAN ---\n");

    // Loop until lives run out or words match
    while (lives > 0 && strcmp(secretWord, showWord) != 0) {

        // 1. Show status
        printf("\nWord: %s  |  Lives: %d\n", showWord, lives);
        printf("Enter uppercase letter: ");
        scanf(" %c", &guess);

        // 2. Check the guess
        found = 0;
        for (i = 0; i < strlen(secretWord); i++) {
            if (secretWord[i] == guess) {
                showWord[i] = guess; // Reveal the letter
                found = 1;
            }
        }

        // 3. Handle wrong guess
        if (found == 0) {
            printf("Wrong guess!\n");
            lives--;
        }
    }

    // 4. Game Over result
    if (lives > 0) {
        printf("\nYOU WIN! The word was: %s\n", secretWord);
    } else {
        printf("\nGAME OVER! The word was: %s\n", secretWord);
    }

    return 0;
}