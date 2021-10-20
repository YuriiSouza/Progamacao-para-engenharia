#include<stdio.h>
#include<stdlib.h>

int main()
    {
     int v[6], c;
     float r[10], q[10];
     
     for(c=0;c<=5;c++)
          scanf("%d", &v[c]);
     
     c = 0;
     for(c=0;c<=5;c++)
          printf("%d", v[c]);
     c = 0;
     for(c=0;c<=9;c++)
          scanf("%f",&r[c]);
     c = 0;
     for(c=0;c<=9;c++)
          q[c] = (r[c])*(r[c]);
     c = 0;
     
     printf("os 6 primeiros:\n");
      for(c=0;c<=9;c++)
          printf("%d\n", v[c]);
     printf("os inseridos:\n");
      for(c=0;c<=9;c++)
          printf("%f\n",r[c]);
     
     printf("OS elevados ao quadrado:\n");
     for(c=0;c<=9;c++)
          printf("%f\n",q[c]);
     
     system("pause");
     return 0;
     }   
