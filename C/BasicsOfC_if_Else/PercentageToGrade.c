#include <stdio.h>
int main(){
    float n;
    printf("Enter Your Percentage:");
    scanf("%f",&n);
    if(n>=90.0 && n<=100.0){
        printf("Excellent,Grade-A+");
    }
    else if(n>=80.0 && n<90.0){
        printf("Very Good,Grade-A");
    }
    else if(n>=70.0 && n<80.0){
        printf("Good,Grade-B+");
    }
    else if(n>=60.0 && n<70.0){
        printf("Can do better,Grade-B");
    }
    else if(n>=50.0 && n<60.0){
        printf("Average,Grade-C");
    }
    else if(n>=40.0 && n<50.0){
        printf("Below Average,Grade-D");
    }
    else{
        if(n>100){
            printf("Invalid Percentage");
        }
        else{
            printf("Fail!!");
        }
    }
}