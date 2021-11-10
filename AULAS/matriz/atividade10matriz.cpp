#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[61][10]={};
    int i, j;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0, soma7 = 0, soma8 = 0, soma9 = 0, soma10 = 0, ;
    for(i=1;i<61;i++){
        for(j=1;j<11;j++){
           scanf("%d", &A[i][j]);  
           if(j==1){
              soma1 = soma1 + A[i][j];
               A[i][1] = soma1;
           }
            if(j==2){
              soma2 = soma2 + A[i][j];
               A[i][2] = soma2;
           }
            if(j==3){
              soma3 = soma3 + A[i][j];
               A[i][3] = soma3;
           }
            if(j==4){
              soma4 = soma4 + A[i][j];
               A[i][4] = soma4;
           }
            if(j==5){
              soma5 = soma5 + A[i][j];
               A[i][5] = soma5;
           }
            if(j==6){
              soma6 = soma6 + A[i][j];
               A[i][6] = soma6;
           }
            if(j==7){
              soma7 = soma7 + A[i][j];
               A[i][7] = soma7;
           }
            if(j==8){
              soma8 = soma8 + A[i][j];
               A[i][8] = soma8;
           }
            if(j==9){
              soma9 = soma9 + A[i][j];
               A[i][9] = soma9;
           }
            if(j==10){
              soma10 = soma10 + A[i][j];
              A[i][10] = soma10;
           }
        }
    }
    putchar('\n');
    printf("Matriz organizada");
    for(i=1;i<62;i++){
        putchar('\n');
        for(j=1;j<11;j++){
           printf("  %d", A[i][j]);
           }
        }

    system("pause");
    return 0;
}
