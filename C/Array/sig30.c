#include<stdio.h>
int main(){
    int myNumbers[]={22,4,5,1,11,40,16,80,45,18};
    int n,check;
    check=0;
    printf("Enter Number  : ");
    scanf("%d",&n);
    for (int i =0;i<10;i++){
        if(n==myNumbers[i]){
            check=1;
            break;   
        }
        else{
            check=0;
        }
        
    }
    if(check==1){
        printf("Yes this number is present in array");
    }
    else{
        printf("No this number is not present in array");
    }
    return 0;
}