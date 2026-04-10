#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter Number of row : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i+=2){
        for(int j=1;j<=i;j+=2){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}