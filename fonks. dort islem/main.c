#include <stdio.h>
#include <stdlib.h>

float dortislem(float x, float y, char xy){
    if (xy == '+'){
        return x+y;
    }
    else if (xy == '-'){
        return x-y;
    }
    else if (xy == '*'){
        return x*y;
    }
    else if (xy == '/'){
        return x/y;
    }
    else {
        printf("yanlis operator\n");
    }
}
int main()
{
    float sayi1,sayi2;
    char islem;
    printf("islemi gir\n");
    scanf("%c",&islem);
    printf("sayilari gir\n");
    scanf("%f%f",&sayi1,&sayi2);
    printf("sonuc: %.2f",dortislem(sayi1,sayi2,islem));
    return 0;
}
