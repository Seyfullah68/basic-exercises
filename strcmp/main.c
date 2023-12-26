#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi1[10]="Naberssss";
    char dizi2[10]="nABER";
    int x,y;
    x=strcmp(dizi1,dizi2);//ikinin ilk harfini ascii tablosuna gore karsilastirir.
    printf("%d\n",x);
    y=strncmp(dizi1,dizi2,5);//ilk 6 karakteri kiyasla
    printf("%d",y);
    return 0;
}
