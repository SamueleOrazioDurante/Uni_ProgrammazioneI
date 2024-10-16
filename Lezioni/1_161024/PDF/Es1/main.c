#include <stdio.h>
#define PI 3.14

int main(void){

    float raggio,area;
    
    printf("Inserisci il raggio (in cm): ");
    scanf("%f",&raggio);

    area = raggio * 2 * PI;

    printf("Area: %f cm^2.\n",area);
    return 0;
}