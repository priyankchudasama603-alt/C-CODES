#include<stdio.h>
int main(){
    int n;
    printf("Enter Number Of Row : ");
    scanf("%d",&n);
    int m=n/2+1;
    int nsp=n/2;
    int nst=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            char ch=k+64;
            printf("%c",ch);
        }
        printf("\n");
        if(i<m){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
    }
    return 0;
}