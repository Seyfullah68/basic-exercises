#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*char dizi1[]="bonne";
    char dizi2[]="soiree";
    char sonuc[100]="";
    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,5);
    printf("%s\n",sonuc);*/

    char orn[100][100]={"bir","iki","uc","dort","bes"};
    printf("dizinin dorduncu elemani  %s\n  ",orn[3]);
    printf("dorduncu elemanin ucuncu kaakteri %c",orn[3][2]);


    return 0;
}
