#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dizi[100];
    printf("metni gir\n");
    fgets(dizi,sizeof(dizi),stdin);
    printf("metnin kucuk hali %s\n",strlwr(dizi));
    printf("metnin buyuk hali %s\n",strupr(dizi));
    return 0;
}
