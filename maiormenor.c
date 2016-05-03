#include <stdio.h>

int main()
{
    int resp,num,maiorNum=-1000000,menorNum=1000000;
    
    do
    {
        printf("Entre com um numero de 1 a 100:");
        scanf("%d", &num);
        
        if(num<menorNum)
        {
            menorNum=num;
        }
        
        if(num>maiorNum)
        {
            maiorNum=num;
        }
        
        printf("Deseja continuar(1-s/2-n)?");
        scanf("%d", &resp);
    }    
    while(resp==1);
    
    printf("maior numero = %d\n", maiorNum);
    printf("menor numero = %d\n", menorNum);
    
    return 0;
}
