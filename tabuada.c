#include <stdio.h>

int main()
{
    int i,j;
    while(j < 1 || j > 10)
    {    
        printf("Digite um numero de 1 a 10:");
        scanf("%d", &j);
    }    
    printf(" Tabuada do %d\n", j);
    printf("______________\n");
    for(i=1; i<=10; i++)
    {
        printf("  %d x %d = %d\n", j, i, j*i);
    }
    
    return 0;
}