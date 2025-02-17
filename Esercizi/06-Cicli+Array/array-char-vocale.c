#include <stdio.h>
#define N 10

int main(void) {

    char array[N];
    char temp;

    // printf("Inserire %i caratteri: ",N);
    
    for(int i = 0;i<N;i++){
        // printf("Inserire il carattere numero [%i]: ", i);
        scanf(" %c", &temp);
        array[i] = temp;
    }

    for(int i = 0;i<N/2;i++){
        temp = array[N-i-1]; 

        if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u'){
            array[N-i-1] = '*';
        }else{
            array[N-i-1] = array[i];
        }
        
        if(temp=='a' || temp=='e' || temp=='i' || temp=='o' || temp=='u'){
            array[i] = '*';
        }else{
            array[i] = temp;
        }

    }
    
    // Stampo array
    for(int i = 0;i<N;i++){
        printf("%c ", array[i]);
    }
    // printf("\n");

    return 0;
}