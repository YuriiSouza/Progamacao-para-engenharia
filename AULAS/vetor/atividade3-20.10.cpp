#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[8];
     int x, y, z, c;
     
     printf("Escreva os 8 valores em ordem crescente em rela��o � posi��o:\n");
     for(c=0;c<=7;c++)
     scanf("%d", &v[c]);
     
     printf("Escreva os valores das posi��es:\n");
     scanf("%d %d", &x, &y);
     
     z = v[x] + v[y];
     
     printf("O valor da soma �:\n%d", z);
     system("pause");
     return 0;
     }   
