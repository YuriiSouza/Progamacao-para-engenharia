#include<stdio.h>
#include<stdlib.h>

int main()
{   
    char c;
    int x, y, m, me;
    y = 0;
    do{
        printf("digite um valor:");
        scanf("%d", &x);
        
        if(y==0){
            m = x;
            me = x;
            y++;
        } else if (x == -1){
            break;
        } else if(x > m){
                m = x;
        } else if(x < me){
                me = x;}
        }
    while(1);
    
    printf("MAIOR: %d\n", m);
    printf("MENOR: %d", me);
    system("pause");
    return 0;
}
