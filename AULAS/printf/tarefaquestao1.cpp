#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a == b) printf("São iguais.");
    else printf("Não são iguais.");
    
    system("pause");
    return 0;   
}
