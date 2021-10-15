#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, n1, z;
    
    scanf("%d", &n);
    scanf("%d", &n1);
    
    z = (n % n1);
    
    printf("%d", z);
system("pause");
return 0;
}

