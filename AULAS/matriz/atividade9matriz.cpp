#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[7][7]={};
    int i, j;
    int par = 0;
    for(i=1;i<8;i++){
        for(j=1;j<8;j++){
           scanf("%d", &A[i][j]);
           if((A[i][j])%2 == 0){
              par = par + 1;
           }
        }
    }
    putchar('\n');
    printf("Matriz organizada");
    for(i=1;i<8;i++){
        putchar('\n');
        for(j=1;j<8;j++){
           printf("  %d", A[i][j]);
           }
        }
    putchar('\n');   
    printf("Total de pares = %d", par);
    system("pause");
    return 0;
}
