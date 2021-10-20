#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c, soma, produ;
    int n;
    double med;
    n = 0;
    while(n == 0){
    scanf("%d %d %lf", &a, &b, &c);
    if(a > b) break;
    if(b>a)break;
    if(a>c)break;
    soma = a+b+c;
    produ = a*b*c;
    med = ((a+b+c)/3.0);
    printf("SOMA = %d\nPRODUTO = %d\nMEDIA = %0.1lf\n", soma, produ, med);
    }

    system("pause");
    return 0;
}
