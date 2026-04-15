#include <stdio.h>
int main() {
    int n;
    int nst=1;
    printf("Enter Number Of Row : ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp-=1;
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    return 0;
}