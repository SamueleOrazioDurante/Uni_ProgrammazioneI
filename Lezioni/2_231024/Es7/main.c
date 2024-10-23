/*
Scrivere un programma in C che chiede all’utente
una numero in virgola mobile. Il programma calcola
e visualizza su due righe separate la parte intera e
quella decimale di tale numero.
Ad esempio, nel caso in cui l’utente inserisce il
numero 4.14, il programma visualizzerà
*/

#include <stdio.h>

int main(void){

    float numero;
    int intera,decimale;

    printf("Inserisci un numero (in virgola mobile es: 2.34): ");
    scanf("%f",&numero);

    intera = (int)numero;
    decimale = (numero - (float)intera) * 100;

    printf("Parte intera: %d \nParte decimale: %d\n",intera,decimale);

    return 0;
}