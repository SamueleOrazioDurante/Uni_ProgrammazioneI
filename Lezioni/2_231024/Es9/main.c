/*
Scrivere un programma in C che chiede all’utente un
carattere dell’alfabeto minuscolo (assumere non ci
siano errori in inserimento). Il programma calcola e
visualizza il corrispondente carattere maiuscolo.
*/

#include <stdio.h>

int main(void){

    char carattere;
            
    printf("Inserisci un carattere minuscolo qualsiasi (MINUSCOLO es. b,h,y,... ): ");
    scanf("%c",&carattere); 

    carattere = (int)carattere-32;

    printf("Carattere maiuscolo corrispondente: %c\n",(char)carattere);

    return 0;

}