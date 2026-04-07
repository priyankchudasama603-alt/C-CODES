#include<stdio.h>
int main(){
    int n,m,k;
    printf("Enter Number of line : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        k=65+n;
        for(int j=65;j<k;j++){
            char ch=(char)j;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}