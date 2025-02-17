#include <stdio.h>

int main(void) {
    // printf("Inserire il numero di partecipanti alla festa: ");
    int n;
    scanf("%i", &n);
    
    int s =0;
    
    for(int i=1;i<=n;i++){
        
        s = s + i-1;
    }


    printf("Le strette di mano sono in tutto %i\n\n", s);

    return 0;
}