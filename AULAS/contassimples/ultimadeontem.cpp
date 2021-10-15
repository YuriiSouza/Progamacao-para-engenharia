#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, n, tri, cir, trap, quad, ret;
    n = 3.14159;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    tri = (a*c)/2;
    cir = (pow(c,2))*n;
    trap = ((a+b)*c)/2;
    quad = (pow(b,2));
    ret = a*b;
 
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO : %.3lf\nRETANGULO : %.3lf\n",tri, cir, trap, quad, ret);
    return 0;
