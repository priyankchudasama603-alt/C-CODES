#include<stdio.h>
int main(){
    int n,x,y,reverse=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    y=n;
    while (n!=0)
    {
        x=n%10;
        reverse=reverse*10;
        reverse+=x;
        n/=10;
    }
    if(reverse==y){
        printf("The Given Number is Palindrome",reverse);
    }
    else{
        printf("The Given Number is not a Palindrome");
    }
    return 0;
    
}