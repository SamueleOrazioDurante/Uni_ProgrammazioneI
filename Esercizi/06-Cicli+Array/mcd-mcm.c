#include <stdio.h>

int mcd(int a,int b){ // utilizzo l'algoritmo di Euclide
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a,int b){
    return (a * b) / mcd(a,b);
}

int main(void) {
    int a,b; // entrambi devono essere maggiori di 0 (faccio controlli)

    a = 0;
    b = 0;

    // printf("Inserire il primo numero: ");
    while(a <= 0){
        scanf("%i", &a);
    }
    
    // printf("Inserire il secondo numero: ");
    while(b <= 0){
        scanf("%i", &b);
    }


    // Calcolo il massimo comun divisore e il minimo comune multiplo

    // printf("Il massimo comun divisore tra %i e %i è: ", a,b);
    printf("%i\n",mcd(a,b));

    // printf("Il minimo comune multiplo tra %i e %i è: ", a,b);
    printf("%i\n",mcm(a,b));

    return 0;
}