/*
Scrivere in linguaggio C un programma per calcolare il
numero di bottigliette d’acqua che si possono comprare
alla macchinetta. Il programma, dopo aver chiesto
all’utente i soldi a disposizione, stampa a video il numero
di bottigliette che possono essere acquistate e il resto da
ricevere dopo l’acquisto. Il prezzo di ciascuna bottiglietta è
di 40 centesimi. Si supponga che la cifra a disposizione sia
positiva e che la macchinetta abbia in giacenza un numero
illimitato di bottigliette. Per erogare il resto, la
macchinetta utilizza pezzi da 20, 10, 5 e 1 centesimi: il
programma dovrà calcolare il numero di monete di resto di
ciascun taglio, prediligendo l’utilizzo di monete di taglio
maggiore (ad esempio, se il resto è di 0.37 €, il programma
dovrà restituire: 1*20 cent, 1*10 cent, 1*5 cent, 2*1 cent).
Suggerimento: moltiplicare il valore della cifra a
disposizione per 100 per ottenere il numero di centesimi ed
eseguire il cast del valore ad int
*/

#include <stdio.h>
#define PREZZO_BOTTIGLIETTA 40

int main(void){

    float euro;
    int resto,centesimi;

    do{
        printf("Inserisci i soldi a disposizione (in euro es: 1.34€ ): ");
        scanf("%f",&euro);

    }while(euro<0);

    centesimi = (int)(euro*100);

    printf("Acquisto di %d bottigliette! \n",centesimi/PREZZO_BOTTIGLIETTA);

    resto = centesimi%PREZZO_BOTTIGLIETTA;
    printf("Erogazione del resto di %d centesimi in corso... \n",resto);

    printf("Monete da 20 centesimi: %d \n",resto/20);
    resto = resto%20;
    printf("Monete da 10 centesimi: %d \n",resto/10);
    resto = resto%10;
    printf("Monete da 5 centesimi: %d \n",resto/5);
    resto = resto%5;
    printf("Monete da 1 centesimi: %d \n",resto);

    return 0;
}