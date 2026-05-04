#include<stdio.h>
int main(){
    int Num[10]={22,4,5,1,33,18,45,66,21,17};
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    printf("The number greater than given elements are : ");
    for(int i=0;i<=10;i++){
        if(x<Num[i]){
            printf("%d ",Num[i]);
        }
    }
}