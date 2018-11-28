#include <stdio.h>

int main() {
    int whiteCharactersCount = 0;

    while (1) {
        const int inputChar = getchar();

        if (inputChar == '\n' || inputChar == '\t' || inputChar == ' ') {
            whiteCharactersCount++;
        }

        printf("You have entered %d characters.\n", whiteCharactersCount);
    }
}