/*
Scrivere un programma che realizzi il gioco Mastermind. Il
primo giocatore inserisce 4 caratteri che corrispondono alle
iniziali di 4 colori tra (r = rosso; g = giallo; v = verde, b =
blu, n = nero; si assuma che gli utenti inseriscano sempre
una lettera compresa in questo elenco). Il secondo giocatore
ha a disposizione 10 tentativi per indovinare la
combinazione, inserendo a sua volta quattro caratteri ad ogni
tentativo. Dopo ogni tentativo il programma visualizza il
numero di colori corretti in posizione corretta (non vengono
segnalati i colori corretti in posizione sbagliata). Terminati i
tentativi, se il secondo giocatore non è riuscito a indovinare
la sequenza, vengono visualizzati i caratteri corretti.
*/

#include <stdio.h>
#define N 4
#define T 10

int main(void){

    int i,j,win_flag;
    char tmp;
    char combinazione[N],tentativo[N];

    printf("Regole: + giusto - sbagliato\n\n");

    printf("Inserisci 4 caratteri (tra r = rosso, g = giallo, v = verde, b = blu, n = nero) \n\n");
    
    // Inserimento iniziale della combinazione
    for(i = 0;i < N;i++){
        scanf(" %c",&tmp);
        combinazione[i] = tmp;
    }

    printf("\nIndovina la combinazione.\n");
    // T tentativi disponibili (10 default)
    for(j = 1;j<=T;j++){
        win_flag = 1; // flag che indica lo status (hai vinto, o devi riprovare)

        printf("Tentativo n.%d\n",j);

        printf("Inserisci 4 caratteri (tra r = rosso, g = giallo, v = verde, b = blu, n = nero) \n\n");
        for(i = 0;i<N;i++){
            scanf(" %c",&tmp);
            if(combinazione[i]==tmp){
                tentativo[i] = '+';
            }else{
                tentativo[i] = '-';
                win_flag = 0;
            }

        }

        // Stampa risultato del tentativo
        printf("[");
        for(i = 0;i<N;i++){

            if(i==N-1){
                printf("%c",tentativo[i]);
            }else{
                printf("%c,",tentativo[i]);
            }
        }
        printf("]\n");

        // Controlla se ha indovinato
        if(win_flag==1){
            printf("Hai indovinato la combinazione corretta!\n");
            return 0;
        }else{
            // Solo se non è l'ultimo tentativo
            if(j!=N-1){
                printf("Riprova\n");
            }

        }
    }
    
    printf("Hai perso! Combinazione corretta: ");
    // Stampa della soluzione
    printf("[");
    for(i = 0;i<N;i++){

        if(i==N-1){
            printf("%c",combinazione[i]);
        }else{
            printf("%c,",combinazione[i]);
        }
    }
    printf("]\n");
    
    return 0;

}