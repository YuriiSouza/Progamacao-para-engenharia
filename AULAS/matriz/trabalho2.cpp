#include<stdio.h>
#include<stdlib.h>

int main(){
    int m[6][6];
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, i, j;
    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
           scanf("%d", &m[i][j]);
           if(j > i){
              soma1 = soma1 + m[i][j];
           }
           if(i + j < 7){
              soma2 = soma2 + m[i][j];
           }
           if(i == 1){
              switch(j){
                 case 2:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 3:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 4:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 5:   
                    soma4 = soma4 + m[i][j];
                    break;
                 default:
                    break;
              }
           }
           if(i == 2){
              switch(j){
                 case 1:
                    soma3 = soma3 + m[i][j];
                    break;
                 case 3:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 4:
                    soma4 = soma4 + m[i][j];
                    break;
                  case 6:
                    soma3 = soma3 + m[i][j];
                    break;
                  default:
                    break;
              }
           }
           if(i == 3){
              switch(j){
                 case 1:
                    soma3 = soma3 + m[i][j];
                    break;
                 case 2:
                    soma3 = soma3 + m[i][j];
                    break;
                 case 5:   
                    soma3 = soma3 + m[i][j];
                    break;
                  case 6:
                    soma3 = soma3 + m[i][j];
                    break;
                  default:
                    break;
              }
           }   
           if(i == 4){
              switch(j){
                 case 1:
                    soma3 = soma3 + m[i][j];;
                    break;
                 case 2:
                    soma3 = soma3 + m[i][j];
                    break;
                 case 5:   
                    soma3 = soma3 + m[i][j];
                    break;
                  case 6:
                    soma3 = soma3 + m[i][j];
                    break;
                  default:
                    break;
              }
           }   
           if(i == 5){
              switch(j){
                 case 1:
                    soma3 = soma3 + m[i][j];
                    break;
                 case 3:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 4:
                    soma4 = soma4 + m[i][j];
                    break;
                  case 6:
                    soma3 = soma3 + m[i][j];
                    break;
                  default:
                    break;
              }
           }   
           if(i == 6){
              switch(j){
                 case 2:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 3:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 4:
                    soma4 = soma4 + m[i][j];
                    break;
                 case 5:   
                    soma4 = soma4 + m[i][j];
                    break;
                 default:
                    break;
              }
           }      
        }
    }
    printf("Soma 1: %d\n", soma1);
    printf("Soma 2: %d\n", soma2);
    printf("Soma 3: %d\n", soma3);
    printf("Soma 4: %d\n", soma4);
    system("pause");
    return 0;
}
