#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j;
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<4;j++)
            printf("[%d][%d] ", i, j);
            }
    system("pause");
    return 0;
}
