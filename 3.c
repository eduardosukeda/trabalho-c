#include <stdlib.h>
#include <stdio.h>

void main()
{
    int contador=1, numero=0, maior=0, cont=1;
    while (contador<=10)
    {
           printf("DIGITE O NUMERO %d:  ", cont);
           scanf("%d",&numero);
           if(numero>maior)
           {
                  maior=numero;
           }
           contador++;
           cont++;
    }
    printf("\nO maior numero digitado eh: %d", maior);
}
