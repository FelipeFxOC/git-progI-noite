#include <stdio.h>

int main()
{
    char nome[100];
    float av1, av2;
    
    printf("Qual o seu nome:");
    scanf("%s", nome);
    printf("Entre com AV1:");
    scanf("%f", &av1);
    printf("Entre com AV2:");
    scanf("%f", &av2);
    
    printf("Ola %s, sua media = %.2f\n", nome, (av1+av2)/2);
    
    return 0;
}