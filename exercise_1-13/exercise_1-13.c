#include <stdio.h>

int currentChar;

int getWordLength () {
    int wordLength = 0;

    while(currentChar != ' ') {
        currentChar = getchar();
        wordLength++;
    }

    return wordLength;
}

void printHistogramLine (int length, char sign) {
    for (int i=0; i < length; i++) {
        printf("%c", sign);
    }
    printf("\n");
}

void printVerticalHistogram () {
    while(currentChar != '\n') {
        int currentWordLength = getWordLength();
        printf("%d", currentWordLength);
        printHistogramLine(currentWordLength, '-');
    }

    return;
}

int main() {
    printVerticalHistogram();


    return 0;
}
