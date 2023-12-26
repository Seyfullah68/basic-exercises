#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define Area(r) (PI*r*r)

int main()
{
    float yaricap,alan;
    printf("yaricapi gir\n");
    scanf("%f",&yaricap);
    alan=Area(yaricap);
    printf("alan: %.2f",alan);
    return 0;
}
