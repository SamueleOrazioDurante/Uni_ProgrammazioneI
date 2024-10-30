/*
Scrivere un programma in C che acquisisce tre
numeri. Il programma verifica se i tre numeri possono
rappresentare le dimensioni dei lati di un triangolo:
devono essere valori positivi e la somma di due numeri
deve essere maggiore del terzo. In caso il controllo
fallisca, il programma deve stampare un apposito
messaggio di errore. Se il controllo è stato superato con
successo, il programma stabilisce che tipo di triangolo
è (isoscele, equilatero o scaleno) e stampa un apposito
messaggio a video. 
*/

#include <stdio.h>

int main(void){

    double lato1,lato2,lato3;

    printf("Inserisci 3 lati di un triangolo\n\n");
    do{

        printf("Inserisci lato 1: ");
        scanf("%lf",&lato1);
        printf("\nInserisci lato 2: ");
        scanf("%lf",&lato2);
        printf("\nInserisci lato 3: ");
        scanf("%lf\n",&lato3);

    }while((lato1 < 0 && lato2 < 0 && lato3 < 0) && ((lato1+lato2)<lato3));

    printf("Inserimento completato.\n");

    if(lato1==lato2==lato3){
        printf("Equilatero\n");
    }else if(lato1==lato2 || lato2==lato3 || lato1==lato3){
        printf("Isoscele\n");
    }else{
        printf("Scaleno\n");
    }

    return 0;

}