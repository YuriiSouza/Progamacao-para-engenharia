#include <stdio.h>
#include <stdlib.h>

int main (){
    float f, c;
    
    printf("Celsius:\n");
    scanf("%f", &c);
    
    f = (((c/5)*9)+32);
    
    printf("Temperatura em ºF: %0.1f\n", f);
    
    system ("pause");
    return 0;
}

