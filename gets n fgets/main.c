#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char isim[30];
    printf("isminizi giriniz\n");
    gets(isim);
    printf("%s\n",isim);
    char soyisim[30];
    printf("soyisminizi giriniz\n");
    fgets(soyisim,sizeof(soyisim),stdin); //girilecek yer, girilecek boyut, ve girilecek dosya(standart input bu ornek icin)
    printf("%s\n",soyisim);
    printf("isminin ters hali %s\n",strrev(isim));
    return 0;
}
