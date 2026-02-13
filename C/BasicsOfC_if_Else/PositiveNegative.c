#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    if(n>0) printf("The Given Number %d is Positive.",n);
    else if(n<0) printf("The Given Number %d is Negative.",n);
    else printf("The Given Number %d is neutral.",n);
    return 0;
}