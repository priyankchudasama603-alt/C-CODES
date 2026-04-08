#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Number of row : ");
    scanf("%d",&n);
    printf("Enter Numbers in a line : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}