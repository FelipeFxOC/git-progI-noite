#include <stdio.h>

int main()
{
    int idade;
    printf("Qual a sua idade?");
    scanf("%d", &idade);
    
    if(idade<=15)
    {
        printf("Voce nao pode votar\n");
    }
    else if(idade>=18 && idade<=70)
    {
        printf("voce eh obrigado(a) a votar\n");
    }
    else
    {
        printf("voto facultativo\n");
    }
    
    return 0;
}