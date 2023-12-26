#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int i=10;
    while(i > 0){
        printf("%d\n",i);
        i--;
    }*/
    int i=1;
    int sayi;
    printf("sayi giriniz\n");
    scanf("%d",&sayi);
    do {
        printf("%d\n",100*i);
        i++;
    }
    while(i<=10);
    return 0;
}
