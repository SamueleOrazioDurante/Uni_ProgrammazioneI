/*
Scrivere un programma C che chiede all’utente
due numeri interi n1 e n2 e un carattere op
(appartenente all’insieme {‘+’,’-’,’*’,’/’}). Il
programma calcola e stampa a video il risultato
dell’operazione corrispondente a op applicata ai
numeri n1 e n2.
*/

#include <stdio.h>

int main(void){

    double n1,n2,risultato;
    char operazione;

    printf("Inserisci 2 numeri\n\n");
    printf("Inserisci il primo numero: ");
    scanf("%lf",&n1);
    printf("\nInserisci il secondo numero: ");
    scanf("%lf",&n2);
    printf("\nInserisci l'operazione da eseguire (+,-,*,/): ");
    scanf(" %c", &operazione);

    switch(operazione){
        case '+':
{            risultato = n1+n2;
            break;
            }
        case '-':
{            risultato = n1-n2;
            break;
            }
        case '*':
{            risultato = n1*n2;
            break;
            }
        case '/':
{            risultato = n1/n2;
            break;
            }
        default:
{           printf("\nErrore, operazione non valida\n");
            return 1;}
    }
    printf("\nIl risultato è: %lf\n",risultato);
    return 0;

}