#include<stdio.h>
int main() {
    int num, orig , rem ;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int arm=0;
    orig=num;
    while (num > 0)
    {
        rem = num % 10;
        arm = arm + (rem * rem * rem);
        num  = num /10;
    }if (orig == arm){
    printf("The Number is armstrong number %d  " , orig);
    }
    else{
        printf("The Number is not armstrong number %d  " ,orig);
    }

    return 0;
}