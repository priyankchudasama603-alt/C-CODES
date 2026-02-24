#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Number a=");
    scanf("%d",&a);
    printf("Enter Number b=");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=b^a;
    printf("After Swapping, a=%d\n",a);
    printf("After Swapping, b=%d",b);
    return 0;

}