#include <stdio.h>

int main()
{
    int d;
    printf("\nTabela ASCII");
    printf("\n____________");
    printf("\nDEC\tCHAR\n");
    for(d=33;d<=126;d++)
    {
        printf(" %d\t%c\n", d, d);
    }
    
    return 0;
}