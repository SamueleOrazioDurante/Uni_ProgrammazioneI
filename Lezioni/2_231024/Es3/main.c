#include <stdio.h>

int main(void){

    int minuti,secondi;

    do{
        printf("Inserisci i minuti: ");
        scanf("%d",&minuti);

    }while(minuti<0);
    
    do{
        printf("Inserisci i secondi: ");
        scanf("%d",&secondi);

    }while(secondi<0);

    if(secondi >= 60){
        minuti += secondi/60;
        secondi = secondi%60;
    }

    printf("Durata dell'esperimento di %d minuto/i e %d secondo/i \n",minuti,secondi);

    return 0;
}