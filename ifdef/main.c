#include <stdio.h>
#include <stdlib.h>
#define sss 5.5
#define aaa
#undef aaa

int main()
{
    #ifdef sss
        printf("deger %f\n",sss);
    #endif // sss
    #ifdef aaa
        printf("zzzzz");
    #endif // aaa
    #ifdef ccc
        printf("viii");
    #else
        printf("tanim yok");
    #endif
    return 0;
}
