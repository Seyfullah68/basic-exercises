#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int i;
    for(i=0;i<10;i++){
        dizi[i]=i*2;
        }

    for(i=0;i<10;i++){
        printf("%d\n",dizi[i]);
    }
    return 0;
}
