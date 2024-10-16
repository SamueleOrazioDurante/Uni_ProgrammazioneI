#include <stdio.h>

int main(void){

    float gradiCelsius,gradiFahrenheit;
    
    printf("Inserisci la temperatura (in celsius): ");
    scanf("%f",&gradiCelsius);

    gradiFahrenheit = gradiCelsius * 1.8 + 32;

    printf("Gradi fahrenheit: %f °F.\n",gradiFahrenheit);
    return 0;
}