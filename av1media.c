#include <stdio.h>

int main()
{
    int i,q=0;
    float av1[10],soma=0,media,maior=-10;
    
    for(i=0;i<=9;i++)
    {
    printf("Entre com a av1 do aluno %d:",i+1);
    scanf("%f", &av1[i]);
    soma+=av1[i];
    if(av1[i]>maior)
        {
            maior=av1[i];
        }
    }
    
    media=soma/i;
    printf("A media da turma e %.2f\n", media);
    printf("notas >= media\n");
    
    for(i=0;i<=9;i++)
    {
        if(av1[i]>=media)
        {
            printf("%.2f\n", av1[i]);
        }
        if(av1[i]==maior)
        {
            q++;
        }
    }
    
    printf("%d alunos tiraram a maior nota que foi %.2f\n", q, maior);
    
    return 0;
}