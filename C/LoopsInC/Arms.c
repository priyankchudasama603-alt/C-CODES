#include<stdio.h>
int main() {
    int num, orig , rem ;
    for (int i = 1; i < 500; i++)
    {           num  = i;
            orig = num;
            int arm = 0 ; //must for redefine......
        while (num > 0)
    {
        rem = num % 10;
        arm = arm + (rem * rem * rem);
        num  = num /10;
    }if (orig == arm){
    printf("%d  " , arm);
    } 
    }
    return 0;
  
}