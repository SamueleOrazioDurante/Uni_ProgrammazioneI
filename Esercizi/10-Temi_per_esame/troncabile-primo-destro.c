#include <stdio.h>

int isPrime(int val){
    if(val < 2){
        return 0; //numero NON primo
    }
    for(int i = 2; i < val; i++){
        if(val % i == 0){
            return 0; //numero NON primo
        }
    }

    return 1; // numero primo
}

int rightprime(int val){

    int isRightPrime = 1;

    while(val > 0){
        if(!isPrime(val)){
            isRightPrime = 0;
            break;
            // numero non primo, di conseguenza tutto il numero non è trocabile primo destro, esco dal ciclo
        }
        val /= 10; // tolgo l'ultima cifra
    }

    return isRightPrime;
}


int main(void) {
    // printf("Inserire il numero: ");
    int n;
    scanf("%i", &n); // numero intero sicuramente positivo (evito di fare controlli)
    
    //printf("Il numero %i è troncabile a destra: ", n);
    printf("%i\n",rightprime(n));

    return 0;
}