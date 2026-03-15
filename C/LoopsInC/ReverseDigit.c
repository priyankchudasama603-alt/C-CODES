#include<stdio.h>
int main(){
    int n,x,reverse=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    while (n!=0)
    {
        x=n%10;
        reverse=reverse*10;
        reverse+=x;
        n/=10;
    }
    printf("The Reverse Of Given Number is: %d",reverse);
    return 0;
    
}