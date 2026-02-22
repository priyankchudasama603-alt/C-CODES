#include<stdio.h>
int main(){
    int a,b,c,d,temp;
    printf("Enter Number a=");
    scanf("%d",&a);
    printf("Enter Number b=");
    scanf("%d",&b);
    printf("Enter Number c=");
    scanf("%d",&c);
    printf("Enter Number d=");
    scanf("%d",&d);
    temp=d;
    d=c;
    c=b;
    b=a;
    a=temp;
    printf("After Swaping a= %d\n",a);
    printf("After Swaping b= %d\n",b);
    printf("After Swaping c= %d\n",c);
    printf("After Swaping d= %d",d);
    return 0;
}

