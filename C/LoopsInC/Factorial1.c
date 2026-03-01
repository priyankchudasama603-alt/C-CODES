#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product*=i;
    }
    printf("The Factorial is: %d",product);
    return 0;
}