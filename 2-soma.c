#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma1= 0;
    int soma2= 0;
    
    srand( time( NULL ) );

    printf("Matriz:\n" );
    for( i = 0; i < 3; i++ ) {
        for( j = 0; j < 3; j++ ) {
            matriz[i][j] = 3 + rand() % 100;
            printf( "%3d", matriz[i][j] );
        }
        printf( "\n" );
    }

    for( i = 0; i < 3; i++ ) {
        soma1 += matriz[i][i];
    }
    printf("\nSoma da diagonal principal: %d", soma1);
    
    for( j = 0; j < 3; j++ ) {
        soma2 += matriz[j][j];
    }
    printf("\nSoma da diagonal secundario: %d", soma2);

    return 0;
}
