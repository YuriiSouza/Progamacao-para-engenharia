#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[10][10]={};
    int i, j;
    int somaprincipal = 0, diagonal2 = 0;
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
           scanf("%d", &A[i][j]);
        }
    }
    for(i=1;i<11;i++){
        for(j=1;j<11;j++){
           scanf("%d", &A[i][j]);
           if(i == 2){
              A[8][j] = A[i][j]; 
           }
           if(j == 4){
              A[i][10] = A[i][j]; 
           }
           if(i == 5){
              A[i][10] = A[i][j]; 
           }
           if(i == j){
              A[8][j] = A[i][j]; 
           }
           }
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
