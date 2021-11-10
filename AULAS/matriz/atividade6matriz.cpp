#include<stdio.h>
#include<stdlib.h>

int main(){
    int m[6][6]={}, n[6][6]={}, c[6][6]={}, d[6][6]={},r[6][6]={};
    int i, j;
    int somaprincipal = 0, diagonal2 = 0;
    printf("Matriz M");
    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
           scanf("%d", &m[i][j]);
        }
    }
    printf("matriz N");
    for(i=1;i<7;i++){
        for(j=1;j<7;j++){
           scanf("%d", &n[i][j]);
        }
    }
    
    putchar('\n');
    printf("Matriz N");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %d", n[i][j]);
        }
    }
    putchar('\n');
    printf("Matriz M\n");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %d", m[i][j]);
        }
    }
    putchar('\n');   
    printf("Soma entre M e N\n");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           c[i][j] = m[i][j] + n[i][j];
           printf("  %d", c[i][j]);
        }
    }
    putchar('\n');
    printf("Subtracao entre M e N\n");
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           d[i][j] = m[i][j] - n[i][j];
           printf("  %d", d[i][j]);
        }
    }
    
    
    r[i][j] = 
    for(i=1;i<7;i++){
        putchar('\n');
        for(j=1;j<7;j++){
           printf("  %d", m[i][j]);
        }
    }
    
    system("pause");
    return 0;
}
