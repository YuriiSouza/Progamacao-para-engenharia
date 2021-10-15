#include <stdio.h>
#include <stdlib.h>

int main() {
    int salario, kwquantidade;
    float kwpreco, preco, desconto, final;
    
    printf("Qual o salario mínimo? R$");
    scanf("%d", &salario);
    
    printf("Quantidade de Kw gasta: ");
    scanf("%d", &kwquantidade);
    printf("\n");
    kwpreco = salario/700;
    preco = kwquantidade*kwpreco;
    desconto = preco*0.15;
    final = preco - desconto;
    
    printf("Cada Kw vale R$%f",kwpreco );
    printf("Preço bruto: %f \n", preco);
    printf("Desconto de 15% = %f \n", desconto);
    printf("Valor a ser pago: R$ %f", final);

system("pause");
return 0;
}
