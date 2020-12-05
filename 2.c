#include <stdlib.h>
#include <stdio.h>


void main()
{
    int salario;
    float aliquota;
    printf("Digite o salario: ");
    scanf("%d",&salario);

        if(salario>=3000)
            aliquota = (salario*0.15);
        if(salario<3000&&salario>=1500)
            aliquota = (salario*0.07);
        if(salario<1500)
            aliquota =0;

    printf("\nImposto de renda = %.2f", aliquota);
}
