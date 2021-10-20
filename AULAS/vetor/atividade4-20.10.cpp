#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[10];
     int  z, c, par;
     
     par = 0;
     printf("Valores\n");
     for(c=0;c<=9;c++)
          scanf("%d", &v[c]);
    
     printf("Os pares:\n");
     for(c=0;c<=9;c++)
          z = (v[c])%2;
          if(z = 0){
             par = par + 1; 
             printf("%d/n", v[c]);
             }
          
     printf("Numero de itens pares = %d", par);
     system("pause");
     return 0;
     }   
