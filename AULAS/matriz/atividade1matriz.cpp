#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[5][5]={};
    int i, j;
    int soma = 0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           scanf("%d", &A[i][j]);
           soma = soma + A[i][j];
           }
        }
    putchar('\n');
    printf("Matriz organizada");
    for(i=0;i<5;i++){
        putchar('\n');
        for(j=0;j<5;j++){
           printf("%d", A[i][j]);
           }
        }
    putchar('\n');   
    printf("A soma é = %d", soma);

    system("pause");
    return 0;
}
