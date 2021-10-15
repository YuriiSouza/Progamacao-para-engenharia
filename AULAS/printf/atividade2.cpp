#include <stdio.h>
#include <stdlib.io>

int main() {
    float litro, tempo, vm, distancia;

    printf("Qual foi a velocidade media da viagem? \n");
    scanf("%f", &vm);
    printf("Qual foi o tempo gasto? \n");
    scanf("%f", &tempo);
    
    distancia = vm*tempo;
    litro = distancia/12;
    
    printf("A distância percorrida foi de: %f \n", distancia);
    printf("A quantidade de gasolina gasta foi de: %f", litro);

system("pause");
return 0;
}
