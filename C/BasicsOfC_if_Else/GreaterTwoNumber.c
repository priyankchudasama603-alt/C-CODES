#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    
    if(a>b){
        printf("%d is the greater",a);
    }
    else if(b>a ){
        printf("%d is the greater",b);
    }
    else if(b=a){
        printf("Both The Numbers Are Equal ");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}