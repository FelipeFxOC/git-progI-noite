#include <stdio.h>

int main()
{
    int i,j;
    printf("Digite um numero da tabuada:");
    scanf("%d", &j);
    printf(" Tabuada do %d\n", j);
    printf("______________\n");
    for(i=1; i<=10; i++)
    {
        printf(" %d x %d = %d\n", j, i, j*i);
    }
    
    return 0;
}