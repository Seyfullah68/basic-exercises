#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[3];
    int i;
    for(i=0;i<3;i++){
        printf("%d inci sayiyi gir\n",i+1);
        scanf("%d",&dizi[i]);
    }
    for(i=0;i<3;i++){
        printf("%d\n",dizi[i]);
    }
    return 0;
}
