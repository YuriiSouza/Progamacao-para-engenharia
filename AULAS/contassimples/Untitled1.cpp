#include <stdio.h>
#include <stdlib.h>

int main() {
 
    float a, b, MEDIA;
    scanf("%f %f", &a, &b);
    
    MEDIA = ((a*3.5)+(b*7.5))/11;

    printf("MEDIA = %f", MEDIA);
    system("pause");
    return 0;
}
