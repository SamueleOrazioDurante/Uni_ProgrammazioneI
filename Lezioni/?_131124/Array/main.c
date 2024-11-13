
#include <stdio.h>
#define N 4

int main(void){

    int array[N] = {12,32,54,10};

    for(int i =0;i<N;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    for(int i =N-1;i>=0;i--){
        printf("%d ",array[i]);
    }
    printf("\n");
}