#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, d;
    scanf("%d", &a);
    
    d = a%5;
    //if (d == 0) printf("� divisive.");
        //else printf("N�o � divis�vel.");
    (d == 0)? printf("� divisivel por 5."): printf("N�o � divisivel.");
    
    system("pause");
    return 0;
}
