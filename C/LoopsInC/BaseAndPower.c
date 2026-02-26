#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("Enter Base Number: ");
    scanf("%d",&a);
    printf("Enter power Number: ");
    scanf("%d",&b);
    for(int i=0;i<=b;i++){
        power=power*a;
    }
    printf("%d raise to the power %d is %d",a,b,power);
    return 0;
}