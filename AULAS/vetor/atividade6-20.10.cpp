#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[10];
     int c, maior, V;
      for(c=0;c<=9;c++)
          scanf("%d", &v[c]);
          
      for(c=0;c<=9;c++)
          printf("%d\n", v[c]);
      
      while(c<10)
          {
          if(c==0){maior = v[0];
             }else{
                 if(v[c] > maior){
                 maior = v[c];
                 V = c;
                 }
                 }
          c = c + 1;
          }
       printf("MAIOR = %d\n", maior);
       printf("POSIÇÃO = %d\n", V);
          
     system("pause");
     return 0;
     }   
