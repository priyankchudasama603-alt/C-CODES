#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,average;
    printf("Enter Marks Of Subject1 : ");
    scanf("%d",&m1);
    printf("Enter Marks Of Subject2 : ");
    scanf("%d",&m2);
    printf("Enter Marks Of Subject3 : ");
    scanf("%d",&m3);
    printf("Enter Marks Of Subject4 : ");
    scanf("%d",&m4);
    printf("Enter Marks Of Subject5 : ");
    scanf("%d",&m5);
    average=(m1+m2+m3+m4+m5)/5;
    printf("The Average is : %d",average);
    return 0;

    
}