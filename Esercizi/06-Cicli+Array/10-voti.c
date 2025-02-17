#include <stdio.h>
#define N 10

int main(void) {

    int array[N];
    int temp;

    // printf("Inserire i voti degli studenti (compresi tra 18 e 30): ");
    for(int i = 0;i<N;i++){
        
        do{
            // printf("Inserire il voto numero [%i]: ", i);
            scanf("%i", &temp);
        }while(temp < 18 || temp > 30);
        
        array[i] = temp;
    }
    
    int max,min;
    float somma,media;

    max = array[0];
    min = array[0];
    somma = array[0];

    // Voto massimo, minimo e medio
    for(int i = 1;i<N;i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
        somma += array[i];
    }

    media = somma/N;

    // Stampo array
    for(int i = 0;i<N;i++){
        printf("%i ", array[i]);
    }

    printf("\nVoto massimo: %i\nVoto minimo: %i\nMedia: %.2f\n", max,min,media);

    return 0;
}