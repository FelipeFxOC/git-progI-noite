#include <stdio.h>

int main()
{
    int hora;
    printf("Sao que horas?");
    scanf("%d", &hora);
    
    if(hora<12)
    {
        printf("Bom dia!\n");
    }
    else if(hora>=12 && hora<18)
    {
        printf("Boa tarde!\n");
    }
    else if(hora<24)
    {
        printf("Boa noite!\n");
    }
    else 
    {
        printf("Numero invalido, tente novamente\n");
    }
    return 0;
}