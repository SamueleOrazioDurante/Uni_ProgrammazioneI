#include <stdio.h>


void codifica(char array[],int dim,int k){

    // Codifico array
    
    k = k % 26;

    for(int i = 0; i < dim;i++){

        if(array[i]>='a' && array[i]<='z'){
            
            if(array[i]+k>'z'){
                array[i] = 'a' + (array[i]+k-'z')-1;
            }else{
                array[i] = array[i]+k;
            }
        }
    }

    // Stampo array
    // printf("Array codificato: ");
    for(int i=0;i<dim;i++){
        printf(" %c",array[i]);
    }
    // printf("\n");
}

int main(void) {
    
    int dim,k;
    char temp_input;

    // printf("Inserisci la lunghezza dell'array"); 
    scanf("%i",&dim);

    char array[dim];

    // printf("Inserisci gli elementi dell'array");
    for(int i=0;i<dim;i++){
        scanf(" %c",&temp_input);
        array[i]=temp_input;
    }

    // printf("Inserisci la chiave di codifica"); // sicuramente maggiore o uguale di 0
    scanf("%d",&k);

    codifica(array,dim,k);

    return 0;
}