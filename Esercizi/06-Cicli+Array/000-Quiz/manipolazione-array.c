#include <stdio.h>
#define DIM 8

int main(void) 
{
    char arrayChar[DIM];
    // printf("Inserisci %i caratteri ognuno seguito da invio: ", DIM);
    
    for(int i =0;i<DIM;i++){
        char input;
        scanf("%c",&input);
        if(input != ' '){
            arrayChar[i] = input;
        }else{
            i = i-1;
        }
        
    }
    // stampo tutto l'array come stringa
    
    for(int i = 0; i<DIM; i++){
        printf("%c",arrayChar[i]);
    }
    
    //stampo l'array invertito
    
    char temp;
    
    for(int i = 0;i<DIM/2;i++){
        temp = arrayChar[DIM-i-1];
        arrayChar[DIM-i-1] = arrayChar[i];
        arrayChar[i] = temp;
    }
    printf("\n");
    for(int i = 0; i<DIM; i++){
        printf("%c",arrayChar[i]);
    }
    
    //stampo l'array con le * al posto delle vocali minuscole
    
    for(int i = 0;i<DIM;i++){
        switch(arrayChar[i]){
            case 'a':{
                arrayChar[i] = '*';
                break;
            };
            case 'e':{
                arrayChar[i] = '*';
                break;
            };
            case 'i':{
                arrayChar[i] = '*';
                break;
            };
            case 'o':{
                arrayChar[i] = '*';
                break;
            };
            case 'u':{
                arrayChar[i] = '*';
                break;
            };
            default:
                break;
        }
    }
    printf("\n");
    for(int i = 0; i<DIM; i++){
        printf("%c",arrayChar[i]);
    }
    
    return 0;
}