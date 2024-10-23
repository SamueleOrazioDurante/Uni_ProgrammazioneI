#include <stdio.h>

int main(void){

    int minuti,secondi,totaleminuti,totalesecondi;

    totaleminuti = 0;
    totalesecondi = 0;

    for(int i=0;i<2;i++){
        printf("Esperimento %d: \n",i+1);
        do{
            printf("Inserisci i minuti: ");
            scanf("%d",&minuti);

        }while(minuti<0);
        
        do{
            printf("Inserisci i secondi: ");
            scanf("%d",&secondi);

        }while(secondi<0);

        totaleminuti += minuti;
        totalesecondi += secondi;
    }
    
    if(totalesecondi >= 60){
        totaleminuti += totalesecondi/60;
        totalesecondi = totalesecondi%60;
    }

    printf("Durata totale dei due esperimenti di %d minuto/i e %d secondo/i \n",totaleminuti,totalesecondi);

    return 0;
}