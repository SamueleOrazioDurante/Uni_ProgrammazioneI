#include <stdio.h>
#define ASCISSA_MAX 10
#define ORDINATA_MAX 10

// CI RINUNCIO

struct punto{
    int x;
    int y;
};

struct rettangolo{
    struct punto a;
    struct punto b;
    struct punto c;
    struct punto d;
};

int main(void) {
    
    // Punto A (coordinate x, y)
    struct punto a;

    printf("Inserire la coordinata x del punto A: ");
    scanf("%i", &a.x);
    printf("Inserire la coordinata y del punto A: ");
    scanf("%i", &a.y);

    // Punto B (coordinate x, y)
    struct punto b;

    printf("Inserire la coordinata x del punto B: ");
    scanf("%i", &b.x);
    printf("Inserire la coordinata y del punto B: ");
    scanf("%i", &b.y);

    // Calcolo punti non dati

    // Punto C (coordinate x, y)
    struct punto c;
    c.x = a.x;
    c.y = b.y;

    // Punto D (coordinate x, y)
    struct punto d;
    d.x = b.x;
    d.y = a.y;

    // Rettangolo
    struct rettangolo r;
    r.a = a;
    r.b = b;
    r.c = c;
    r.d = d;

    // Creazione matrice che simula un piano cartesiano
    char piano[ASCISSA_MAX][ORDINATA_MAX] = {};

    // Generazione procedurale che inizializza la matrice
    for(int i = 0; i < ASCISSA_MAX; i++){
        piano[ORDINATA_MAX-1][i] = (char)('0'+i-1);
    }
    for(int i = 0; i < ORDINATA_MAX; i++){
        piano[i][1] = (char)('0'+(ORDINATA_MAX-1-i));;
    }

    // Disegno del rettangolo

    // Lati orizzontali


    for(int i = r.a.x + 1; i < r.d.x + 1; i++){
        piano[i][r.a.y] = '*';
    }
    for(int i = r.c.x + 1; i < r.b.x + 1; i++){
        piano[i][r.c.y] = '*';
    }

    // Lati verticali

    for(int i = r.c.y + 2; i < r.a.y + 2; i++){
        piano[r.c.x][i] = '*';
    }
    for(int i = r.d.y + 2; i < r.b.y + 2; i++){
        piano[r.c.x][i] = '*';
    }


    // Stampa del piano cartesiano

    for(int i = 0; i < ASCISSA_MAX; i++){
        for(int j = 0; j < ORDINATA_MAX; j++){
            printf("%c ", piano[i][j]);
        }
        printf("\n");
    }

    return 0;
}
