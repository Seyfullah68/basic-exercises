#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sayi,toplam=0;
   printf("sayi giriniz\n");
   scanf("%d",&sayi);
   for(i=0;i<=sayi;i++){
    toplam += i;

   }
   printf("toplam: %d",toplam);
    return 0;
}
