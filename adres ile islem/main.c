#include <stdio.h>
#include <stdlib.h>

void karesi(int *a,int *b)
{
    *b=*a**a;
}

int main()
{
    int x=5,y;
    karesi(&x,&y);
    printf("%d",y);
    return 0;
}
