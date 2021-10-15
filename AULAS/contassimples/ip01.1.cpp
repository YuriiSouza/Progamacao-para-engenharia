#include<stdio.h>
#include<stdlib.h>

int main() {
    int dia, mes, ano, idade;
    char letra;
    float altura, peso, pi;

    dia = 07;
    mes = 04;
    ano = 2003;
    idade = 2021-2003;
    letra = 'x';
    altura = 1.75;
    peso = 64.0;
    pi = 3.14159265359;

    printf("-Altura = %f\n-Peso = %f\n", altura, peso);
    printf("-Data de nascimento = %d/%d/%d\n Sua idade é %d", dia, mes, ano, idade);

    system("pause");
    return 0;
}

