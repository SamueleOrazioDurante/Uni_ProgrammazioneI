/*
Chiamiamo coppia di quadrati (CQ) una coppia <a,b> di
numeri interi che sono uno il quadrato dell’altro. Esempio
<9,3> oppure <-3,9> (infatti 9=3*3).
Si codifichi un programma C che legge da tastiera una
sequenza che termina con 99 (di lunghezza a priori
illimitata) di numeri interi e stampa a video quante
coppie di numeri consecutivi all’interno della sequenza
rappresentano una CQ.
Ad esempio: 2 4 16 0 3 9 99 contiene 3 CQ: <2,4>
<4,16> e <3,9>
*/

#include <stdio.h>
#define N 99

int main(void){

    int num,prec_num,count;
    num = 0;
    prec_num = N;
    count = 0;  

    printf("Inserisci 99 per terminare l'esecuzione\n");

    while(num!=N){
        
        printf("Inserisci un numero: ");
        scanf("%d",&num);
        if(prec_num==N){
            continue;
        }

        if((prec_num*prec_num)==num){
            count++;
        }

        prec_num = num;
    }
    printf("%d",count);
}