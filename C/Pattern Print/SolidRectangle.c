#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Number of line : ");
    scanf("%d",&n);
    printf("Enter Number of star in a line : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}