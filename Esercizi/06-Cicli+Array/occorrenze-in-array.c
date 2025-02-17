#include <stdio.h>
#define N 10

int main(void) {

    int array[N];
    int temp,x;

    // printf("Inserire 10 numeri: ");
    
    for(int i = 0;i<N;i++){
        // printf("Inserire il numero numero [%i]: ", i);
        scanf("%i", &temp);
        array[i] = temp;
    }

    // printf("Inserire il numero x: ");
    scanf("%i", &x);

    int occorrenze = 0;

    for(int i = 0;i<N;i++){
        if(array[i] == x){
            occorrenze++;
        }
    }

    // Stampo numero di occerrenze
    // printf("Il numero %i compare numero di volte nell'array: ", x);

    printf("%i", occorrenze);

    // printf("\n");

    return 0;
}