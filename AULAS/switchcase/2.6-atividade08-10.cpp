#include<stdio.h>
#include<stdlib.h>

int main(){
    int b;
    printf("Codigo do produto:");
    scanf("%d", &b);
    
    switch(b){
        case 1:
                printf("ALIMENTO NAO-PERECIVEL.");
        break;
        case 2:
                printf("ALIMENTO PERECIVEL.");
        break;
         case 3:
                printf("ALIMENTO PERECIVEL.");
        break;
         case 4:
                printf("ALIMENTO PERECIVEL.");
        break;
        case 5:
                printf("VESTUARIO.");
        break;
        case 6:
                printf("VESTUARIO.");
        break;
        case 7:
                printf("HIGIENE PESSOAL.");
        break;
        case 8:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 9:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 10:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 11:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 12:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 13:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 14:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        case 15:
                printf("LIMPEZA E UTENSILIOS DOMESTICOS.");
        break;
        default:
                printf("CODIGO INVALIDO");
        }
    system("pause");
    return 0;
}
