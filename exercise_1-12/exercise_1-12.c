#include <stdio.h>

int main() {
    int inputChar;

    while (inputChar != '\n') {
        inputChar = getchar();

        if (inputChar == ' ') {
            printf("\n");
        } else {
            printf("%c", inputChar);
        }
    }

    printf("\n");

    return 0;
}
