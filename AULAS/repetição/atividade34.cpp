#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c, idade, otimo, bom, regular, ruim, pessimo, maispessimo, diferencaruimotimo, maisruim, maisotimo;
    float perc, mediaruimidade, somaruimidade;
    char nota;
    for(c=0;c<101;c++){
        printf("IDADE:");
        scanf("%d", &idade);
        printf("NOTA:A, B, C, D, E");
        scanf("%c", &nota);
        getchar();
        
        switch(nota){
                case 'A':
                   otimo++;
                    if(c==0){
                       maisotimo = idade;
                       }else if(idade > maisotimo){
                           maisotimo = idade;
                           }
                   break;
                case 'B':
                   bom++;
                   break;
                case 'C':
                   regular++;
                   break;
                case 'D':
                   ruim++;
                   somaruimidade = (somaruimidade + idade);
                    if(c==0){
                       maispessimo = idade;
                       }else if(idade > maisruim){
                           maisruim = idade;
                           }
                   break;
                case 'E':
                   pessimo++;
                   if(c==0){
                       maispessimo = idade;
                       }else if(idade > maispessimo){
                           maispessimo = idade;
                           }
                }
        }
    mediaruimidade = somaruimidade/ruim;
    perc = (bom/100) - (regular/100);  
    diferencaruimotimo = maisotimo - maisruim;
    printf("Quantidade de bom: %d\n", otimo);
    printf("porcentagem da diferença entre bom e regular: %.1f\n", perc);
    printf("Media das idades de quem respondeu ruim: %.1f\n", mediaruimidade);
    printf("Porcentagem de pessimo: %d %\n", pessimo);
    printf("Maior idade que respondeu pessimo: %d", maispessimo);
    printf("Diferença entre o mais ruim e o pessimo, idade: %d", diferencaruimotimo );
    system("pause");
    return 0;
}




