#include <stdio.h>
#include <stdlib.h>
#define sayi 2
int main()
{
    #if (!sayi || sayi<5)
    #error hataaaaaa
    #else
        printf("hata yok");
    #endif
    return 0;
}
