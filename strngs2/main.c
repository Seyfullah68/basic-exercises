#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi1[100];
    char dizi2[100];
    int a;
    printf("ilk cumleyi gir\n");
    scanf("%s",&dizi1);
    printf("ikinci cumleyi gir\n");
    scanf("%s",&dizi2);
    printf("kac harf gir\n");
    scanf("%d",&a);
    strncat(dizi1,dizi2,a);
    printf("%s",dizi1);
    return 0;
}
