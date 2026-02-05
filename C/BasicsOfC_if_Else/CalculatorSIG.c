#include <stdio.h>
int main(){
    int num1,num2,result,n;
    char c;
    do
    {
        printf("1)Addition \n2)Substraction \n3)Multiplication \n4)Division");
        printf("Enter Your Choice:");
        scanf("%d",&n);
        printf("Enter First Number:");
        scanf("%d",&num1);
        printf("Enter Second Number:");
        scanf("%d",&num2);
        switch (n){
            case 1 : result=num1+num2;
                printf("Addition of %d and %d is %d.",num1,num2,result);
                break;
            case 2 : result=num1-num2;
                printf("Subtraction of %d and %d is %d.",num1,num2,result);
                break;
            case 3 : result=num1*num2;
                printf("Multiplication of %d and %d is %d.",num1,num2,result);
                break;
            case 4 : result=num1/num2;
                printf("Division of %d and %d is %d.",num1,num2,result);
                break;
            default:
                printf("Invalid input");
                break;
    }
        printf("\n");
        printf("Do you want to perform another operation(Y/N)");
        scanf("%c",&c);
        }
        while(c=='Y'|| c=='y');
    
    return 0;
}