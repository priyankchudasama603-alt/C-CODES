#include<stdio.h>
int main(){
    int n,i,a=1,b=1,sum=0;
    printf("Enter Number of term: ");
    scanf("%d",&n);
    for(i=1;i<=n-3;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth fabonacci series term is %d",n,sum);
    return 0;
}
