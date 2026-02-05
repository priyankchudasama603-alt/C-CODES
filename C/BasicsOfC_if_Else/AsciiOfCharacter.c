#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    printf("%c-",c);
    int n=(int)c;
    printf("%d",n);
    return 0;
}