#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[2][4]={{4,7,8,3},{3,9,1,2}};
    int dizi2[2][4]={{1,6,8,5},{4,9,7,2}};
    int dizi3[2][4];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            dizi3[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            printf("%3d",dizi3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
