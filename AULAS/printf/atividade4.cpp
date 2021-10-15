#include <stdio.h>
#include <stdlib.h>

int main() {
    int z, kg, g, porc;
    
    printf("Quanto voce pesa, em quilograma?");
    scanf("%d", &kg);
    
    g = kg*1000;
    porc = g*12/100;
    z = porc+g;
    
    printf("Seu peso em gramas é: %d \n", g);
    printf("Seu peso apos engordar 12 por cento da sua massa atual:  %d", z);

system("pause");
return 0;
}
