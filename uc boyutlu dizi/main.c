#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[3][2];
    int dizi2[3][2];
    int uc[2][3][2];
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("1. matris %dinci satir %d inci sutun\n",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("2. matris %dinci satir %d inci sutun\n",i+1,j+1);
            scanf("%d",&dizi2[i][j]);
        }
    }
    for(k=0;k<2;k++){
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                if(k==0){
                uc[k][i][j]=dizi1[i][j];
                }
                else{
                    uc[k][i][j]=dizi2[i][j];
                }
        }
    }
    }
    for(k=0;k<2;k++){
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                printf("%3d",uc[k][i][j]);
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
