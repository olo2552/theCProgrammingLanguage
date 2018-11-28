#include <stdio.h>

int main() {
    int whiteCharactersCount = 0;

    int lastChar;
    int inputChar;
    while (inputChar != '\n') {
        lastChar = inputChar;
        inputChar = getchar();

        if (inputChar != ' ' || lastChar != ' ') {
            printf("%c", inputChar);
        }
    }
}
