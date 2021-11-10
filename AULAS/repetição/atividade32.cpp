#include <stdio.h>
#include<stdlib.h>
   
int main(){
    float tAnacleto = 1.5, tFelisberto=1.1;
    int ano=0;
       
    while(tFelisberto<tAnacleto){
        ano++;//ano = ano +1;
        tFelisberto = tFelisberto + 0.03;
        tAnacleto = tAnacleto + 0.02;
    }
       
       printf("Serao necessario %d anos para que Felisberto fique maior que Anacleto\n", ano);
       system("pause");
       return 0;
   }
