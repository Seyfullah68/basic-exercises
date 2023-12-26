#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ustunual(int *a,int *b,int *c)
{
    *c = pow(*a,*b);
}

int main()
{
    int x=4,y=5,r;
    ustunual(&x,&y,&r);
    printf("%d",r);
    return 0;
}
