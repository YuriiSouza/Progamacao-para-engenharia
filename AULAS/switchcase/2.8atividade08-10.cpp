#include<stdio.h>
#include<stdlib.h>

int main(){
    int cod;
    float pre, total;
    printf("Valor:");
    scanf("%f", &pre);
    printf("Forma de pagamento:");
    scanf("%d", &cod);
    
    switch(cod)
        {
        case 1:
                total = pre-(pre*0.1);
                printf("Ira pagar um total de R$%f", total);
        break;
        case 2:
                total = pre-(pre*0.05);
                printf("Ira pagar um total de R$%f", total);
        break;
        case 3:
                total = pre/2;
                printf("Ira pagar 2 vezes de R$%f", total);
        break;
        case 4:
                total = (pre+(pre*0.1))/3;
                printf("Ira pagar 3 vezes de R$%f", total);
        break;
        default:
                printf("ERROR 31412");
    system("pause");
    return 0;
}
