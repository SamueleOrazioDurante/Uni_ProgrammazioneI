#include <stdio.h>

int verifica_crescenza(int values[]){

    int temp;

    int crescenza = 1;
    int decrescenza = -1;

    int i = 1;

    while(values[i] != -1){

        temp = values[i-1];
        if(temp <= values[i]){
            decrescenza = 0;
        }
        if(temp >= values[i]){
            crescenza = 0;
        }

        i++;
    }

    return crescenza+decrescenza; // se è 1 allora è crescente, se è -1 allora è decrescente, se 0 allora non è nè crescente nè decrescente
}

void stampa_risultati(int values[]){
    int risultato = verifica_crescenza(values);

    //stampa array

    int i = 0;
    while(values[i] != -1){
        printf("%i, ", values[i]);
        i++;
    }
    printf("STOP\n");

    if(risultato == 1){
        printf("Crescente\n");
    }else if(risultato == -1){
        printf("Decrescente\n");
    }else{
        printf("Nessuna\n");
    }
}

int main(void) {

    int crescente[] = {1,2,3,4,5,6,7,8,9,10,-1};
    int decrescente[] = {10,9,8,7,6,5,4,3,2,1,-1};
    int niente[] = {32,89,12,43,65,12,43,65,12,1,-1};

    stampa_risultati(crescente);
    stampa_risultati(decrescente);
    stampa_risultati(niente);

    return 0;
}