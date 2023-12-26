#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a,b,c;
    printf("sayilari gir\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a en buyuk");
    }
    else if(b>c){
        printf("b en buyuk");
    }
    else{
        printf("c en buyuk");
    }*/
    int sayi;
    printf("sayiyi gir\n");
    scanf("%d",&sayi);
    if(sayi%2 == 0){
        printf("girilen sayi cift");
    }
    else
        printf("girilen sayi tek");
    return 0;
}
