#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3, z, numero, numeroinverso, z1, z2, z3, s1, s2, s3, s;
    
    printf("Esceva o número da sua conta:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    numero = (n1*100)+(n2*10)+(n3);
    numeroinverso = (n3*100) + (n2*10) + (n1);
    z = numero + numeroinverso;
    z3 = z % 10;
    z2 = ((z-z3)%100)/10;
    z1 = ((z-(z3+z2*10))%1000)/100;
    
    s1 = z1*1;
    s2 = z2*2;
    s3 = z3*3;
    s = z3 % 41;//não sei se isso é necessario, mais está ai, antes pecar pelo excesso que pela falta...
    printf("O codigo verificador é: %d \n", s);
    
system("pause");    
return 0;
}

