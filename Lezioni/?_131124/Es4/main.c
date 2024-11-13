
// STO ESERCIZIO FA ABBASTANZA SCHIFO
#include <stdio.h>

int main(void){

    int a,b,c,d,r1,r2,r3,r4,somma,prodotto;

    printf("ATTENZIONE: non inserire due coppie uguali (es. (42,12) e (42,12) oppure (12,42) e (42,12))\n\n");

    printf("Prima coppia:\n");
    printf("Inserisci il primo numero: ");
    scanf("%d",&a);
    printf("\nInserisci il secondo numero: ");
    scanf("%d",&b);

    printf("\nSeconda coppia:\n");
    printf("Inserisci il primo numero: ");
    scanf("%d",&c);
    printf("\nInserisci il secondo numero: ");
    scanf("%d",&d);


    if(((a==c) && (b==d)) || ((b==c) && (a==d))){
        printf("\nMa cosa stai facendo, ho detto numeri non uguali, sei stupido?\n");
        return 1;
    }


    r1=0;
    r2=0;
    somma=0;
    prodotto = 1;

    while(a>0 && b>0){
        r1=a%10;
        a=a/10;

        r2=b%10;
        b=b/10;

        somma = somma+r1+r2;
        prodotto = prodotto*r1*r2;
        
    }

    r3=0;
    r4=0;

    while(c>0 && d>0){
        r3=c%10;
        c=c/10;

        r4=d%10;
        d=d/10;

        somma = somma+r3+r4;
        prodotto = prodotto*r3*r4;
        
    }

    printf("Somma: %d, Prodotto: %d\n",somma,prodotto);

    if(somma==prodotto){
        printf("Numeri affiatiti\n");
    }
}