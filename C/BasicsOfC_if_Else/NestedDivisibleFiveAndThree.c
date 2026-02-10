#include <stdio.h>
int main(){
    int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a%5==0){
        if(a%3==0){
            printf("Given number is divisible by both 5 and 3");
        }
        else{
            printf("Given number is divisible by 5 but not by 3");
        }
        
    }
    else if(a%3==0){
        if(a%5!=0){
            printf("Given number is divisible by 3 but not by 5");
        }
        else{
            printf("Given number is divisible by 5 but not by 3");
        }
        
    }
    return 0;
}