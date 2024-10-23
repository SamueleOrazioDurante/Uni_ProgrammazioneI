/*
Scrivere un programma C che chiede all’utente un
valore che rappresenta il peso in Kg e un valore
che rappresenta l’Altezza in metri e calcola l’indice
di massa corporeo, BMI = peso/ altezza^2
*/

#include <stdio.h>

int main(void){

    float peso,altezza,BMI;

    do{
        printf("Inserisci il peso (in kg): ");
        scanf("%f",&peso);

    }while(peso<0);
    
    do{
        printf("Inserisci l'altezza (in m): ");
        scanf("%f",&altezza);

    }while(altezza<0);

    BMI = peso/(altezza*altezza);

    printf("BMI: %f \n",BMI);

    return 0;
}