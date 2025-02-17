#include <stdio.h>


int main(void) {

    int num = -1;
    int cifre[5]={3,3,0,7,4};

    int check_numero = 1;

    // printf("Inserire il numero num (positivo): ");

    while(num<0){
        scanf("%i", &num);
    }
    
    while(num > 0){
        
        int check_cifra = 0;

        for(int i =0;i<5;i++){
            if(num % 10 == cifre[i]){
                check_cifra = 1;
                break;
            }
        }

        if(check_cifra == 0){
            check_numero = 0;
            break;
        }

        num /= 10;

    }

    if (check_numero)
    {
        printf("OK\n");
    }else{
        printf("KO\n");
    }
    

    return 0;
}