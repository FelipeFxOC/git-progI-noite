#include <stdio.h>

int main()
{
    float nota1,nota2;
    printf("Digite a primeira nota:");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:");
    scanf("%f", &nota2);
    
    float media=(nota1+nota2)/2;
    
    if (media>=0 && media<5)
    {
        printf("media = %.2f - Reprovado\n", media);
    }
    else if(media>=5 && media<7)
    {
        printf("media = %.2f - Recuperacao\n", media);
    }
    else if(media>=7 && media<10)
    {
        printf("media = %.2f - Aprovado\n", media);
    }
    else 
    {
        printf("Nota invalida\n");
    }
    
    return 0;
}