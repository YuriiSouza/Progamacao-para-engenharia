#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float d, s=0;
    int p, c;
    
    for(c=1;c<=10;c++){
        p = (c%2);
        d = c*c;
        if(p==0){
            s = -1*(c/d)+ s;
        }else if(p>0){
                s = s + (c/d);
                }
        }
    printf("%f", s);
    system("pause");
    return 0;
}
