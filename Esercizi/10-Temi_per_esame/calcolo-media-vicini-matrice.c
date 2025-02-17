#include <stdio.h>

#define N 4  // Numero di righe
#define M 4  // Numero di colonne

// Funzione per calcolare la media dei bordi di m1[i][j]
float calcola_media(int m1[N][M], int i, int j) {
    int somma = 0;
    int count = 0;
    
    // Considera i vicini nel bordo (compreso l'elemento stesso)
    for (int di = -1; di <= 1; di++) {
        for (int dj = -1; dj <= 1; dj++) {
            int ni = i + di;
            int nj = j + dj;
            
            // Verifica se l'indice è all'interno dei limiti della matrice
            if (ni >= 0 && ni < N && nj >= 0 && nj < M) {
                somma += m1[ni][nj];
                count++;
            }
        }
    }
    
    // Restituisce la media dei valori
    return (float)somma / count;
}

int main() {
    // Matrice di esempio m1
    int m1[N][M] = {
        {1, 0, 0,0},
        {0, 1, 0,0},
        {0, 0, 1,0},
        {0, 0, 0,1}
    };
    
    // Matrice m2 che conterrà i risultati
    float m2[N][M];
    
    // Calcolare la matrice m2
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            m2[i][j] = calcola_media(m1, i, j);
        }
    }

    // Stampa della matrice m1
    printf("Matrice m1:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }

    // Stampa della matrice m2
    printf("\nMatrice m2 (medie dei bordi):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%.2f ", m2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
