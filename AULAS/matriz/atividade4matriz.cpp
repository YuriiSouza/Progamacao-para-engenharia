#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[6][6]={};
    int i, j;
    int menor=0;
    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
           scanf("%d", &A[i][j]);
           if(i + j ==7 && i == 1){
             menor = A[1][6];
           }
           if(i + j == 7){
              if(A[i][j] < menor){
                     menor = A[i][j];
              }
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
    printf("O menor valor da diagonal secundaria = %d\n", menor); 
  
    system("pause");
    return 0;
}
