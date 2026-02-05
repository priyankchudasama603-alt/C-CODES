#include <stdio.h>
int main(){
    int num1,num2,result;
    char c;
    printf("1)+ \n2)- \n3)* \n4)/");
    printf("Enter Your Choice:");
    scanf("%c",&c);
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    switch (c)
    {
    case '+' : result=num1+num2;
        printf("Addition of %d and %d is %d.",num1,num2,result);
        break;
    case '-' : result=num1-num2;
        printf("Subtraction of %d and %d is %d.",num1,num2,result);
        break;
    case '*' : result=num1*num2;
        printf("Multiplication of %d and %d is %d.",num1,num2,result);
        break;
    case '/' : result=num1/num2;
        printf("Division of %d and %d is %d.",num1,num2,result);
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}