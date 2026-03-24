#include<stdio.h>
int main(){
    int n,x,i=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(i<=10){
        x=n*i;
        printf("%d * %d = %d\n",n,i,x);
        i++;
    }
    return 0;
}