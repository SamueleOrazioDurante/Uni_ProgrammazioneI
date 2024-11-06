/*
Su una scacchiera 8x8 sono posizionati due pezzi: il Re
bianco e la Regina nera. Si scriva un programma in
linguaggio C che acquisisce le posizioni del Re e della
Regina in termini di coordinate (x,y) assumendo che la
posizione (1,1) sia situata in basso a sinistra rispetto
al giocatore. Il programma controlla prima che le
coordinate inserite siano valide; in particolare
entrambi i pezzi devono trovarsi all’interno della
scacchiera ed inoltre non possono trovarsi nella stessa
posizione. In seguito il programma determina se la
Regina è in posizione tale da poter mangiare il Re e
visualizza un apposito messaggio specificando anche
in che direzione e per quante posizioni deve muoversi
per mangiare. NB: La regina si può muovere in linee
rette verticalmente, orizzontalmente o in diagonale
per il numero di caselle non occupate che trova.
*/

#include <stdio.h>
#include <stdlib.h>

// Funzione per controllare se le coordinate sono valide
int valida_posizione(int x, int y) {
    return (x >= 1 && x <= 8 && y >= 1 && y <= 8);
}

// Funzione per determinare se la Regina può mangiare il Re
int puo_mangiare(int re_x, int re_y, int regina_x, int regina_y) {
    // La Regina può mangiare il Re se sono sulla stessa riga, stessa colonna, o sulla stessa diagonale
    return (re_x == regina_x || re_y == regina_y || abs(re_x - regina_x) == abs(re_y - regina_y));
}

// Funzione per determinare la direzione in cui la Regina deve muoversi
void direzione_mangiare(int re_x, int re_y, int regina_x, int regina_y) {
    if (re_x == regina_x) {
        if (re_y > regina_y) {
            printf("La Regina deve muoversi in alto per %d posizioni.\n", re_y - regina_y);
        } else {
            printf("La Regina deve muoversi in basso per %d posizioni.\n", regina_y - re_y);
        }
    } else if (re_y == regina_y) {
        if (re_x > regina_x) {
            printf("La Regina deve muoversi a destra per %d posizioni.\n", re_x - regina_x);
        } else {
            printf("La Regina deve muoversi a sinistra per %d posizioni.\n", regina_x - re_x);
        }
    } else if (abs(re_x - regina_x) == abs(re_y - regina_y)) {
        if (re_x > regina_x && re_y > regina_y) {
            printf("La Regina deve muoversi in alto a destra per %d posizioni.\n", re_x - regina_x);
        } else if (re_x < regina_x && re_y > regina_y) {
            printf("La Regina deve muoversi in alto a sinistra per %d posizioni.\n", regina_x - re_x);
        } else if (re_x > regina_x && re_y < regina_y) {
            printf("La Regina deve muoversi in basso a destra per %d posizioni.\n", re_x - regina_x);
        } else {
            printf("La Regina deve muoversi in basso a sinistra per %d posizioni.\n", regina_x - re_x);
        }
    }
}

int main() {
    int re_x, re_y, regina_x, regina_y;

    // Acquisizione delle coordinate del Re e della Regina
    printf("Inserisci le coordinate del Re (x y): ");
    scanf("%d %d", &re_x, &re_y);

    printf("Inserisci le coordinate della Regina (x y): ");
    scanf("%d %d", &regina_x, &regina_y);

    // Verifica se le posizioni sono valide
    if (!valida_posizione(re_x, re_y) || !valida_posizione(regina_x, regina_y)) {
        printf("Le posizioni devono essere tra 1 e 8!\n");
        return 1;
    }

    if (re_x == regina_x && re_y == regina_y) {
        printf("Il Re e la Regina non possono trovarsi nella stessa posizione!\n");
        return 1;
    }

    // Controlla se la Regina può mangiare il Re
    if (puo_mangiare(re_x, re_y, regina_x, regina_y)) {
        printf("La Regina può mangiare il Re.\n");
        direzione_mangiare(re_x, re_y, regina_x, regina_y);
    } else {
        printf("La Regina non può mangiare il Re.\n");
    }

    return 0;
}
