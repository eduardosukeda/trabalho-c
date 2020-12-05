#include <stdlib.h>
#include <stdio.h>

void main ()
{
    int n1,n2,n3,n4;

        printf("Digite a nota 1 do aluno: ");
        fflush(stdin);
        scanf("%d",&n1);
        printf("Digite a nota 2 do aluno: ");
        fflush(stdin);
        scanf("%d",&n2);
        printf("Digite a nota 3 do aluno: ");
        fflush(stdin);
        scanf("%d",&n3);
        printf("Digite a nota 4 do aluno: ");
        fflush(stdin);
        scanf("%d",&n4);

        if((n1+n2+n3+n4)>=60)
            printf("\n Aluno foi aprovado");
        else
            printf("\n Aluno foi reprovado");
}
