#include <stdio.h>

int main() {
    int inputChar;
    while (inputChar != '\n') {
        inputChar = getchar();

        switch (inputChar) {
            case '\t':
                printf("\\t");
                break;
            case ' ':
                printf(" ");
                break;
            case '\\':
                printf("\\");
                break;
            case '\b':
                printf("\\b");
                break;
            default:
                printf("%c", inputChar);
                break;
        }
    }

    printf("\n");

    return 0;
}
