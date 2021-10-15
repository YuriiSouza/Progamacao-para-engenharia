#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, n, e;
    scanf("%d %d", &a, &b);
    n = 1;
    e = 1;
    do{
        e = e*a;
        n = n+1;
        } 
    while(n<b+1);    
        
    printf("%d elevado a %d é igual a %d\n", a, b, e);
    system("pause");
    return 0;
}
