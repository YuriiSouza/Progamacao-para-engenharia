#include<stdio.h>
#include<stflib.h>

int main() {
    float aplimensal, taxa, montante;
    int tempo;
    printf("Qual valora aplicada mensalmente: ");
    scanf("%f",&aplimensal);
    printf("Qual o tempo, em meses: ");
    scanf("%d",&tempo);
    printf("Qual a taxa mensal: ");
    scanf("%f",&taxa);
    montante = tempo*((1+taxa)*(1+taxa)- 1)/taxa;
    
    printf("O valor ao fim do m�s ser� de: %f", montante);
system("pause");
return 0;
}
