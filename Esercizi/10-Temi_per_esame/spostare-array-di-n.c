#include <stdio.h>
#define DIM 10

int main(void) {
    
    int array[DIM];
    int temp,n;

    // printf("Inserisci gli elementi dell'array");
    for(int i=0;i<DIM;i++){
        scanf("%d",&temp);
        array[i]=temp;
    }

    // printf("Inserisci il numero di posizioni da spostare a destra");
    scanf("%d",&n);

    for(int j = 0;j<DIM-n;j++){
        for(int i = 1;i<DIM;i++){
            temp = array[i-1];
            array[i-1] = array[i];
            array[i] = temp;
        }
    }   

    // Stampo array
    // printf("Array codificato: ");
    for(int i=0;i<DIM;i++){
        printf("%d ",array[i]);
    }
    // printf("\n");
    return 0;
}