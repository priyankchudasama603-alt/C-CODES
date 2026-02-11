#include <stdio.h>
int main(){
    int n;
    printf("Enter Your Percentage:");
    scanf("%d",&n);
    if(n>=75 && n<=100){
        printf("Pass with First Division with Distinction ");
    }

    else if(n>=60 && n<=74){
        printf("Pass with First Division ");
    }
    else if(n>=45 && n<=59){
        printf("Pass with Second Division");
    }
    else if(n>=33 && n<=44){
        printf("Pass with Third Division");
    }
    else{
        if(n>100){
            printf("Invalid Percentage");
        }
        else{
            printf("Failed");
        }
    }
}