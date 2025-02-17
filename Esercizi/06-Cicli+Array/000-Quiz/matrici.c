#include <stdio.h>

int main(void) {
    // printf("Inserire un numero intero: ");
    int n;
    scanf("%i", &n);
    
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            printf("( %i, %i) ",i,j);
        }
        printf("\n");
    }
    return 0;
}
