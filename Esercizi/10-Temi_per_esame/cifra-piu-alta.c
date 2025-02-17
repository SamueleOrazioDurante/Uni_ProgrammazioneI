#include <stdio.h>

int higherdigit(int n,int m){
    int maxn,maxm;

    //trovo la cifra più alta in n
    maxn = n % 10; // prima cifra a destra del numero
    while(n > 0){
        if(n % 10 > maxn){
            maxn = n % 10;
        }
        n /= 10;
    }

    //trovo la cifra più alta in m
    maxm = m % 10; // prima cifra a destra del numero
    while(m > 0){
        if(m % 10 > maxm){
            maxm = m % 10;
        }
        m /= 10;
    }

    if(maxn > maxm){
        return maxn;
    }else{
        return maxm;
    }
}

int main(void) {
    int n1,n2;
    // printf("Inserire il primo numero: ");
    scanf("%i", &n1);
    
    // printf("Inserire il secondo numero: ");
    scanf("%i", &n2);

    //printf("La cifra più alta tra quelle in %i e in %i è: ", n1,n2);
    printf("%i\n",higherdigit(n1,n2));

    return 0;
}