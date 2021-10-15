#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    if(a > 0) printf("POSITIVO");
        if(a < 0) printf("NEGATIVO");
            else printf("ZERO");
            
    system("pause");
    return 0;
}
