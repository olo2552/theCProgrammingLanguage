#include <stdio.h>

float fahrenheitToCelcius (float fahrenheit) {
    return (fahrenheit + 32) * (5.0/9.0);
}

float celsiusToFahrenheit (float celsius) {
    return (5.0/9.0) * (celsius - 32.0);
}

void displayTableRow (float celsius, float fahrenheit) {
    printf("%3.0f %6.1f\n", fahrenheit, celsius);    
}

void displayTemperatureTable (int lowerRange, int higherRange, int step) {
    for (int temperature = lowerRange; temperature <= higherRange; temperature += step) {
        displayTableRow(temperature, celsiusToFahrenheit(temperature));
    }
}

int main() {
    displayTemperatureTable(20, 100, 1);

    return 0;
}