#include<stdio.h>
int main(){
    int n;
    int a=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("The given Number is Prime Number");
    }
    else{
        printf("The given Number is Composite Number");
    }
    return 0;
}