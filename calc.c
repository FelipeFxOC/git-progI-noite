#include <stdio.h>

int main()
{
    int operacao, continuar;
    float num1, num2;
    do
    {
        printf("Qual operação deseja?\n");
        printf("1 - adição\n");
        printf("2 - subtração\n");
        printf("3 - multiplicação\n");
        printf("4 - divisão\n");
        scanf("%d", &operacao);
        
        printf("Entre com num1:");
        scanf("%f", &num1);
        printf("Entre com num2:");
        scanf("%f", &num2);
        
        switch(operacao)
        {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1+num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1-num2);
                break;
            case 3:
                printf("%.2f x %.2f = %.2f\n", num1, num2, num1*num2);
                break;
            case 4:
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1/num2);
                break;    
        }
        printf("Deseja continuar?[1-s/2-n]");
        scanf("%d", &continuar);
    }
    while(continuar == 1);
    
    return 0;
}