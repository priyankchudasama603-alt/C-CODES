#include <stdio.h>
int main() {
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1+64;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c",ch);
        }
        for(int l=1;l<=i-1;l++){
            char ch2=(char)(a);
            printf("%c",ch2);
            a--;
        }
        printf("\n");
    }
    return 0;
}