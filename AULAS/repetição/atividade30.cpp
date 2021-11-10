#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cpf, nd, sal;
    float  imposto, renda, real, salariominimo;
    int r;
    
    do{
        printf("CPF:");
        scanf("%d",&cpf);
        printf("Dependentes:");
        scanf("%d", &nd);
        printf("SALARIOS MINIMOS:");
        scanf("%d", &sal);
        printf("Valor bruto do salario minimo:");
        scanf("%f", &salariominimo);
        
        renda = sal * salariominimo;
        real = renda - (renda*nd*0.05);
        
        switch(sal){
                case 1 ... 2:
                   printf("Não nescessita pagar...\n");
                   break;
                case 3:
                   imposto = (real*(0.05));
                   break;
                case 4:
                   imposto = (real*(0.1));
                   break;
                case 5 ... 7:
                   imposto = (real*(0.15));
                   break;
                default:
                   imposto = (real*(0.2));
                }
                
                
        printf("CPF: %d\n", cpf);
        printf("VALOR GANHO MENSALMENTE: %.2f\n", renda);
        printf("Valor a pagar: %.2f\n", imposto);
        printf("Continuar:[1 para sim/2 para nao]");
        scanf("%d", &r);
        
        if(r == 2){
        break;
        }
    }while(1);
    
    
    
    
    system("pause");
    return 0;
}
