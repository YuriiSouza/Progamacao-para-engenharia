#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, n1;
    printf("Escreva um n�mero de 0 a 60.\n");
    scanf("%d", &n);

    n1 = (n+1)%61;

    printf("Seu sucessor � %d.\n", n1);
    
system("pause");
return 0;
}
