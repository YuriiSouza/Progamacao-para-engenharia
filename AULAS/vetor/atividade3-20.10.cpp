#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[8];
     int x, y, z, c;
     
     printf("Escreva os 8 valores em ordem crescente em relação á posição:\n");
     for(c=0;c<=7;c++)
     scanf("%d", &v[c]);
     
     printf("Escreva os valores das posições:\n");
     scanf("%d %d", &x, &y);
     
     z = v[x] + v[y];
     
     printf("O valor da soma é:\n%d", z);
     system("pause");
     return 0;
     }   
