#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("The Given Number is a three digit number");
    }
    else{
        printf("The Given Number is not a three digit number");
    }
}