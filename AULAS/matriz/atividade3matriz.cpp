#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[7][6]={};
    int i, j;
    int soma = 0, soma5 = 0, soma3 = 0;
    for(i=1;i<8;i++){
        for(j=1;j<7;j++){
           scanf("%d", &A[i][j]);
           if(i == 5){
              soma5 = soma5 + A[i][j];
           }
           if(j == 3){
              soma3 = soma3 + A[i][j];
           }  
        }
    }
    soma = soma5 + soma3;
    putchar('\n');
    printf("Matriz organizada");
    for(i=1;i<8;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %d", A[i][j]);
           }
        }
    putchar('\n');   
    printf("A soma da linha 5 e = %d\nA soma da coluna 3 e = %d\n", soma5, soma3);
    printf("A soma das duas e = %d", soma);

    system("pause");
    return 0;
}
