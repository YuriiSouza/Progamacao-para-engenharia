#include<stdio.h>
#include<stdlib.h>

int main (){

    int x, y, z;
    char c;
    
    printf("Escreva um valor para 'x': \n");
    scanf("%d", &x);
    printf("Escreva um valor para 'y': \n");
    scanf("%d", &y);
    printf("x = %d\n", x);
    printf("y = %d\n", y); 
    
    z = x;
    x = y;
    y = z;
    
    printf("Agora\n x = %d\n y = %d", x, y)
       
    system("pause");
    return 0;
}
