#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, soma, sub, mult;
    float div;
    printf("Digite valores 1 a 4:\n");
    scanf("%d %d", &a, &b);
    
    soma = a + b;
    sub = a - b;
    div = (a/b);
    mult = a*b;
    if((a > 0 && a < 5) && (b > 0 && b < 5)) printf("SOMA: %d\nSUBTRAÇÃO: %d\nDIVISÃO: %.2f\nMULTIPLICAÇÃO: %d", soma, sub, div, mult);
        else printf("ERRO, VALORES INVALIDOS");
        
    system("pause");
    return 0;
}
