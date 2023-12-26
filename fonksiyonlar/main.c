#include <stdio.h>
#include <stdlib.h>

/*void tekcift(int x){  //fonk geriye deger dondurmedigi icin void
    if(x%2==0){
        printf("sayi cift\n");
    }
    else{
        printf("sayi tek\n");
    }
}*/
int cifttek(int y){
    if(y%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int sayi,sonuc;
    printf("sayiyi gir\n");
    scanf("%d",&sayi);
   // tekcift(sayi);
   sonuc=cifttek(sayi);
   if(sonuc==1){
    printf("sayi cift");
   }
   if (sonuc==0){
    printf("sayi tek");
   }
    return 0;
}
