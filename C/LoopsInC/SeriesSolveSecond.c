//Print The Sum of Series 1-2+3-4+5-6.... upto n terms
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    if(n%2==0){
        sum=-n/2;
        }
    else{
        sum=-n/2+n;
        }

    printf("%d",sum);
    return 0;
    
}