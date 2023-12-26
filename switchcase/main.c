#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char op;
    printf("operator gir\n");
    scanf("%c",&op);
    printf("islemi yapilacak sayilari giriniz\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+':
            {
                printf("%.2f",a+b);
                break;
            }
        case '-':
            {
                printf("%.2f",a-b);
                break;
            }
        case '*':
            {
                printf("%.2f",a*b);
                break;
            }
        case '/':
            {
                printf("%.2f",a/b);
                break;
            }
        default:
            {
                printf("yanlis sayi girdin");
            }
    }
    return 0;
}
