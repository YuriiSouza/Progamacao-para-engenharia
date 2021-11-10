#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, d, h=0;
    //h = soma
    for(d=1;d<=50;d++){
        n = (1 + ( d-1)*2);
        h = n/d + h;
        }
    printf("%d", h);
    system("pause");
    return 0;
}
