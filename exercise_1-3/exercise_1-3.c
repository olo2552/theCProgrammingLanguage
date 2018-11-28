#include <stdio.h>
int main() {
    int lower = 0;
    int upper = 300;
    int step = 20;
    float fahr = lower;
    float celsius;

    printf("Fahrenheit | Celsius\n");
    printf("-----------+--------\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f | %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}