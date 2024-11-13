
#include <stdio.h>
#DEFINE N 4

int main(void){

    int array[N] = {12,32,54,10};
    
    printf("Inserisci un numero: ");
    scanf("%d",&num);
    n = num;
    rev=0;
    r=0;
    while(num>0){
        r=num%10;
        num=num/10;
        printf("Singola cifra: %d\n",r);
        rev = rev*10+r;
    }

    if(n==rev){printf("\n\nÈ palindromo\n");}
    else{printf("\n\nNon è palindromo\n");}
    printf("Num: %d\n",rev);
}