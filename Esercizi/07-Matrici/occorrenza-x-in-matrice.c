#include <stdio.h>
#define D1 3
#define D2 3

int main(void) {
    
    int mat[D1][D2];
    int x;
    int occorrenza = 0;

    // Matrice da tastiera
    for(int i=0;i<D1;i++){
        for(int j=0;j<D2;j++){
            // printf("Inserire il valore per la cella [%i][%i]: ", i,j);
            int temp;
            scanf("%i", &temp);
            mat[i][j] = temp;
        }
    }

    // printf("Inserire il numero x: ");
    scanf("%i", &x);

    // calcolo occorrenza di x dentro matrice
    for(int i=0;i<D1;i++){
        for(int j=0;j<D2;j++){
            if(mat[i][j] == x){
                occorrenza++;
            }
        }
    }

    // printf("Il numero %i compare numero di volte nella matrice: ", x);
    printf("%i\n", occorrenza);

    return 0;
}