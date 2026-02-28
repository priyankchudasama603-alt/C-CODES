#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0){
        count++;
        n/=10;
    }
    printf("The Number Of Digit is: %d",count);
    return 0;
}