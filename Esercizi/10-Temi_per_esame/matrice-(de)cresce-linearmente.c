#include <stdio.h>

int main(void) {

    // importante definire una matrice con almeno 3 righe, altrimenti non si può verificare la condizione

    int n,m,L;
    int contatore,differenza;

    // printf("Definire il numero di righe della matrice: ");
    scanf("%i", &n);
    // printf("Definire il numero di colonne della matrice: ");
    scanf("%i", &m);

    int matrice[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // printf("Inserire il valore per la cella [%i][%i]: ", i,j);
            int temp;
            scanf("%i", &temp);
            matrice[i][j] = temp;
        }
    }

    // printf("Inserire il numero L per il quale nella matrice esiste almeno una sequenza verticale di lunghezza L crescente (o decrescente) linearmente: ");
    scanf("%i", &L);

    // stampo la matrice
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%i ", matrice[i][j]);
        }
        printf("\n");
    }

    for(int j=0;j<m;j++){
        contatore = 2;

        for(int i=2;i<n;i++){
            // prendo la differenza tra la riga i-2 e i-1
            differenza = matrice[i-2][j]-matrice[i-1][j];

            // se è uguale alla differenza tra la riga i-1 e i
            if(differenza == (matrice[i-1][j]-matrice[i][j]) && differenza != 0){
                contatore++;
                printf("contatore: %i differenza: %i\n", contatore,differenza);
            }else{
                contatore = 2;
                // resetto il contatore, e continuo a scorrere la matrice
            }

            if(contatore == L || -contatore == L){
                printf("OK\n");
                return 0;
            }
        }
        
        
    }
    printf("KO\n");

    return 0;
}