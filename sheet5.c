#include <stdio.h>
#include <string.h>

int main() {
    char word[50], guess, guessed[50];
    int chances = 3, correct = 0, len;
    
    printf("enter the word");
    scanf("%s", word);
    
    len = strlen(word);
    for (int i = 0; i < len; i++) guessed[i] = '_';
    guessed[len] = '\0';
    
    while (chances > 0 && correct < len) {
        printf("word: %s\n", guessed);
        printf("enter guess");
        scanf(" %c", &guess);
        int found = 0;
        for (int i = 0; i < len; i++) {
            if (word[i] == guess && guessed[i] == '_') {
                guessed[i] = guess;
                correct++;
                found = 1;
            }
        }
        if (!found) chances--;
        printf(found ? "right\n" : "wrong %d chances left\n", chances);
    }
    printf(correct == len ? "win %s\n" : "game over %s\n", word);
    return 0;
}
