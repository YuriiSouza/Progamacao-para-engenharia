#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10][10]={};
    int i, j;
    int maior = 0,minimax = 0, x, y;
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
           scanf("%d", &A[i][j]);
           if(i == 1 && j ==1){
              maior = A[j][i];
           }else if(A[i][j] > maior){
              maior = A[i][j];
              x = i;  
           }
        }
    }
    for(j=1;i<11;j++){
        i = x;
        if(j==1){
           minimax = A[x][j];
        }else if(minimax > A[x][j]){
                minimax = A[x][j];
        }
        
    putchar('\n');
    printf("Matriz organizada");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %d", A[i][j]);
           }
        }
    putchar('\n');   
    printf("A soma da diagonal principal e = %d\n", somaprincipal);
    printf("A soma da diagonal secundaria e = %d", diagonal2);

    system("pause");
    return 0;
}
