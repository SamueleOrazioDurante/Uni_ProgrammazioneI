/*
Scrivere un programma in C che richiede
all’utente di inserire ore e minuti, calcola l’ora a
San Francisco (9 ore indietro) e a Teheran (+3:30)
e la stampa a video in formato «0-24 h : min». Se a
Teheran è già il giorno successivo o a San
Francisco ancora quello precedente, il programma
corregge l’ora e avvisa l’utente con un opportuno
messaggio a schermo.
*/

#include <stdio.h>

int main(void){

    int ore,minuti,oret,minutit;
    printf("Inserisci ore e minuti\n\n");
    
    printf("Inserisci l'ora: ");
    scanf("%d",&ore);
    printf("\nInserisci i minuti: ");
    scanf("%d",&minuti);

    oret = ore;
    minutit= minuti;

    if(ore<9){
        ore = 24 - (9-ore);
        printf("\nGiorno precedente a San Francisco con orario %d h : %d min\n",ore,minuti);
    }else{
        ore = ore - 9;
        printf("\nOre a San Francisco %d h : %d min\n",ore,minuti);
    }

    if(oret>20 && minutit>30){
        oret = 0 + (oret-20);
        minutit = 0 + (minutit-30);
        printf("Giorno successivo a Teheran con orario %d h : %d min\n",oret,minutit);
    }else{
        oret = oret + 3;
        minutit = minutit + 30;

        if(minutit >= 60){
            minutit -= 60;
            oret += 1;
        }

        printf("Ore a Teheran %d h : %d min\n",oret,minutit);
    }

    return 0;

}