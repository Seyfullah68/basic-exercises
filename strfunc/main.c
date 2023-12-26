#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ori[]="naberss";
    char fake[100];
    char fake1[100]="";
    char fake2[100]="";
    strcpy(fake,ori);
    printf("%s\n",fake);
    strncpy(fake1,ori,3);
    printf("%s\n",fake1);
    strcat(fake2,"ss");
    strcat(fake2,ori);
    printf("%s",fake2);

    return 0;
}
