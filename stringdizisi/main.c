#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[]={'d','i','z','i','\0'};
    char dizi1[]="dizim";
    char dizi3[100];
    printf("diziyi gir\n");
    scanf("%s",&dizi3);
    printf("\n");
    printf("%s\n",dizi);
    printf("%s\n",dizi1);
    printf("%s\n",dizi3);
    dizi1[4]='M';
    printf("%s\n",dizi1);
    printf("dizi1 un boyu %d\n",strlen(dizi1));
    printf("dizi1 un boyu %d\n",sizeof(dizi1)); //\0 dahil


    return 0;
}
