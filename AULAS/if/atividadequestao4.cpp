#include <stdio.h>
#include <stdlib.h>

int main()
{
    float al, lar, com, uso, capac, dias;
    
    printf("Digite em centímetro:\n");
    printf("Altura:"); 
    scanf("%f", &al);
    printf("Largura: ");
    scanf("%f", &lar);
    printf("Comprimento: ");
    scanf("%f",&com);
    printf("Uso diário: "); 
    scanf("%f", &uso);
    capac = (lar/100)*(com/100)*(al/100);
    dias = capac/uso;
    
    printf("Seu reservatório tem capacidade de: %f litros.\nVocê pode usar ele por: %f dias.", capac, dias);
    printf("Seu consumo se classifica em:");
    if(dias < 2)printf("ELEVADO");
    if(dias > 2 && dias < 7) printf("MODERADO");
    if(dias > 7) printf("REDUZIDO");
    
    system("pause");
    return 0;
}
