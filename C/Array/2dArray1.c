#include<stdio.h>
int main(){
    int b[3][4];
    int i,j;
    printf("\nEnter value of b: ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++){
            printf("\nb[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=3;j++){
            printf("\t%d",b[i][j]);
        }

    }
    printf("\n");
    return 0;
}