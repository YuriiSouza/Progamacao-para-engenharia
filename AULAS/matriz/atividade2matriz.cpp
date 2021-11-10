#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[6][6]={};
    int i, j;
    int somaprincipal = 0, diagonal2 = 0;
    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
           scanf("%d", &A[i][j]);
           if(i == j){
              somaprincipal = somaprincipal + A[i][j];
           }
           if(i + j == 7){
              diagonal2 = diagonal2 + A[i][j];
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
