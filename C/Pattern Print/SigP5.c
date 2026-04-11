#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of line : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=n+1-i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}