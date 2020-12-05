#include <stdlib.h>
#include <stdio.h>

void main()
{
    int numero=1;
    int divisor=0;
    int dividendo=0;
    float media;

    while(numero!=0)
    {
        printf("\nDigite um numero par: ");
        fflush(stdin);
        scanf("%d",&numero);

        if(numero%2==0)
        {
            dividendo= dividendo + numero;
            divisor++;
        }
        else
            printf("\n Numero nao contabilizado\n");

    }
    dividendo= dividendo - numero;
    printf("\n Media: %.2f",(float)dividendo/(divisor-1));
}
