/*
Scrivere un programma in C che richiede
all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0. Se a è
pari a zero, il programma informa che il polinomio
è di grado inferiore al secondo. In caso contrario, il
programma calcola il determinante (det)
dell’equazione di secondo grado e informa l’utente
se le soluzioni sono reali e distinte (det>0),
coincidenti (det=0) o complesse coniugate (det<0)
*/

#include <stdio.h>

int main(void){

    double a,b,c,delta;
            
    printf("Inserisci i 3 coefficenti \n\n");
    printf("\nInserisci a \n");
    scanf("%lf",&a); 
    printf("\nInserisci b \n");
    scanf("%lf",&b);
    printf("\nInserisci c \n");
    scanf("%lf",&c);

    delta = (b*b)-(4*a*c);
    printf("Il delta è di %lf\n",delta);

    if(delta>0){
        printf("Soluzioni reali e distinte\n");
    }else if(delta<0){
        printf("Soluzioni complesse e coniugate\n");
    }else{
        printf("Soluzioni coincidenti\n");
    }


    return 0;

}