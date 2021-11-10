#include<stdio.h>
#include<stdlib.h>

int main(){
    int v[10] = {};
    int a[10][5] ={};
    int i, j;
    float m[10] = {}, mediatotal = 0, total = 0;
    for(i=1;i<11;i++){
        printf("Digite a matricula do aluno %d\n", i);
        scanf("%d", &v[i]);
    }
    for(i=1;i<11;i++){
        printf("Digite as notas do aluno %d\n", v[i]);
        for(j=1;j<6;j++){
           printf("Prova %d:", j);
           scanf("%d", &a[i][j]);
           total = total + a[i][j];
           if(i == 1){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 2){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 3){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 4){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 5){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 6){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 7){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 8){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                 m[i] = m[i]/5;
              }   
           }
           if(i == 9){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                   m[i] = m[i]/5;
              }   
           }
           if(i == 10){
              m[i] = m[i] + a[i][j];
              if(j == 5){
                   m[i] = m[i]/5;
              }   
           }
        }
    }
    mediatotal = total/50.0;
        
    for(i=1;i<11;i++){
        printf("Matricula: %d\n", v[i]);
        printf("media: %.1f\n", m[i]);
        if(m[i] > 6){
           printf("Aprovado\n");
           }else{
           printf("Reprovado\n");
           }
           printf("|||||||||||||||||||||||||||||||\n");  
    }
        printf("MEDIA DA SALA: %.1f\n", mediatotal);
    system("pause");
    return 0;
}
