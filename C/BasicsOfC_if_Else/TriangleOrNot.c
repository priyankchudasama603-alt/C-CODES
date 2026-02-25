#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter First side:");
    scanf("%d",&a);
    printf("Enter Second side:");
    scanf("%d",&b);
    printf("Enter Third side:");
    scanf("%d",&c);
    if(a+b>c && a+c>b && c+b>a){
        printf("Yes This is triangle");
    }
    else {
        printf("No this is not a triangle");
    }
    return 0;
}