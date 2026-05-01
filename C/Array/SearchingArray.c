#include<stdio.h>
int main(){
    int myNumbers[]={22,4,5,1,11,40,16,80,45,18};
    int n,i;
    printf("Enter Number  : ");
    scanf("%d",&n);
    for (i=0;i<10;i++){
        if(n==myNumbers[i]){
            printf("Yes this number is present in array at index %d",i);
            break;   
        }   
    }
    if(sizeof(myNumbers)/sizeof(myNumbers[0])<=i){
        printf("No this number is not present in array");
    }
    return 0;
}