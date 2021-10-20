#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[10];
     int c, maior, menor;
     for(c=0;c<=9;c++){
          scanf("%d", &v[c]);
          }
     while(c<10)
          {
          if(c==0){maior = v[0];
             }else{
                 if(v[c] > maior){maior = v[c];}}
          c = c + 1;
          }
          
     c = 0;
          
     while(c<10);
          if(c==0){menor = v[0];
              }else{
                   if(v[c] < menor){menor = v[c];}
                   }
          c = c + 1;
          
          printf("MAIOR = %d\n", maior);
          printf("MENOR = %d\n", menor);
     system("pause");
     return 0;
     }   
