#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, d;
    scanf("%d", &a);
    
    d = a%5;
    //if (d == 0) printf("É divisive.");
        //else printf("Não é divisível.");
    (d == 0)? printf("É divisivel por 5."): printf("Não é divisivel.");
    
    system("pause");
    return 0;
}
