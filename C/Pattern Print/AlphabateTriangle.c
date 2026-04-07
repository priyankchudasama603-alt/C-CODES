#include<stdio.h>
int main(){
    int n,k;
    printf("Enter Number of line : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            k=64+j;
            char ch=(char)k;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}