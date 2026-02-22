#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Number a=");
    scanf("%d",&a);
    printf("Enter Number b=");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("After Swapping, a=%d\n",a);
    printf("After Swapping, b=%d",b);
    return 0;

}