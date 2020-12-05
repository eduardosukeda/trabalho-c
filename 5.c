#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main ()
{
    int v[10];
    setlocale(LC_ALL, "Portuguese");
    for(int i=0;i<10;i++)
    {
        printf("\n Digite um numero impar: ");
        scanf("%d",&v[i]);
        if((v[i])%2==0){
            i=i-1;}

    }
    for(int i=0;i<10;i++)
        printf("\nPosição[%d] = %d ",i+1,v[i]);
}
