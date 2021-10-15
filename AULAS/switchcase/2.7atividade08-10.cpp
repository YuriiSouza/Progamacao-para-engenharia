#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("Qual é a idade do nadador?");
    scanf("%d", &a);
    
    switch(a){
        case 5:
                printf("INFANTIL A");
        break;
        case 6:
                printf("INFANTIL A");
        break;
        case 7:
                printf("INFANTIL A");
        break;
        case 8:
                printf("INFANTIL B");
        break;
        case 9:
                printf("INFANTIL B");
        break;
        case 10:
                printf("INFANTIL B");
        break;
        case 11:
                printf("JUVENIL A");
        break;
         case 12:
                printf("JUVENIL A");
        break;
         case 13:
                printf("JUVENIL A");
        break;
        case 14:
                printf("JUVENIL B");
        break;
         case 15:
                printf("JUVENIL B");
        break;
         case 16:
                printf("JUVENIL B");
        break;
         case 17:
                printf("JUVENIL B");
        break;
        default:
                printf("ADULTO");
        }
    system("pause");
    return 0;
}
