#include <stdio.h>

int main()
{
    char palavra1[50];
    char palavra2[50];
    int i;
    
    printf("Digite qulaquer palavra: ");
    scanf("%s", palavra1);
    
    for (i=0;i<50;i++)
    {
        palavra2 [i] = palavra1 [i];
        
    }
    
    printf("\nAqui esta sua palavra copiada: ");
    printf("%s", palavra2);
    return 0;
}

