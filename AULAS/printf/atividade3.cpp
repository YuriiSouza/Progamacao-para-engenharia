#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, z;
    
    printf("Digite um valor para A:");
    scanf("%d",&a);
    printf("Digite um valor para B: ");
    scanf("%d",&b);
    
    z = a;
    a = b;
    b = z;

    printf("Os valores de A e B foram trocados, agora são %d e %d respectivamente.", a, b);

system("pause");
return 0;
}
