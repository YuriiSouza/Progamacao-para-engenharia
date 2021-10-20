#include<stdio.h>
#include<stdlib.h>

int main(){
   float media, temp, n, c, aux, mtempo, melhorv, soma, car, c1;
   
   printf("Quantidade de voltas:");
   scanf("%f", &n);
   printf("Quantos carros:");
   scanf("%f", &car);
   for(c1=1;c1<=car;c1++)
      {
      for(c=1;c<=n;c++)
            {
            printf("Tempo carro %1.0f volta %1.0f: ",c1, c);
            scanf("%f", &temp);
            if(c==1)
               {
               melhorv = 1;
               mtempo = temp;
               }
               else
                  {
                  if(mtempo > temp)
                    {
                    mtempo = temp;
                    melhorv = c;
                    } 
                  }
           soma += temp;
           }
   media = soma/n;
   printf("CARRO %f....O melhor tempo: %f\nA melhor volta: %f\nMedia: %0.3f\n",c1, mtempo, melhorv, media);
      }
   system("pause");
   return 0;
}
