#include<stdio.h>
int main(){
    int n,x;
    int sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0){
        x=n%10;
        if(x%2==0){
            sum=sum+x;
        }
        n/=10;
    }
    printf("The Sum of Even Digit is: %d",sum);
    return 0;
}