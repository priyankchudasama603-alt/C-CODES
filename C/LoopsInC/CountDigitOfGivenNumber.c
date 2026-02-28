#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(n;n>0;n/=10){
        count++;
    }
    printf("The Number Of Digit is: %d",count);
    return 0;
}