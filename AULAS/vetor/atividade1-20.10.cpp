#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int s, c;
     int v[6] = {1, 0, 5, -2, -5, 7. 7};
     s = v[0]+v[1]+v[5];
     
     printf("SOMA = %d", s);
     
     v[4] = 100;
     
     for(c=0;c<=5;c++)
        printf("Vetor[%] = %d", c, v[c]);
     
     system("pause");
     return 0;
     }  
