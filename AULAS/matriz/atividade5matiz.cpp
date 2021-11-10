#include<stdio.h>
#include<stdlib.h>

int main(){
    float A[8][8]={};
    int i, j;
    float maior = 0;
    for(i=1;i<9;i++){
        for(j=1;j<9;j++){
           scanf("%f", &A[i][j]);
           if(i == j && i == 1){
              maior = A[1][1];
           }
           if(i==j){
              if(A[i][j] > maior){
                 maior = A[i][j];
              }
           } 
        }
    }
    putchar('\n');
    printf("Matriz organizada");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %.1f", A[i][j]);
           }
        }
    putchar('\n');   
    printf("Maior valor = %d\n", maior);
     printf("Matriz organizada");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           A[i][j] = (A[i][j])/maior;
           printf("  %.1f", A[i][j]);
           }
        }

    system("pause");
    return 0;
}
