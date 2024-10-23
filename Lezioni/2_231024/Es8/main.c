/*
Scrivere un programma che, acquisito un valore
intero da utente, stampi a video 0 se il valore è pari,
1 se è dispari
*/

#include <stdio.h>

int main(void){

    int numero;
            
    printf("Inserisci un numero qualsiasi (intero es. 1,5,3,... ): ");
    scanf("%d",&numero);

    if(numero%2==1 || numero%2==-1){
        printf("Numero dispari\n");
    }else{
        printf("Numero pari\n");
    }

    return 0;

}