#include<stdio.h>
int main(){
    int firstTerm,n,difference;
    printf("Enter First Term :");
    scanf("%d",&firstTerm);
    printf("Enter common difference :");
    scanf("%d",&difference);
    printf("Enter number of terms :");
    scanf("%d",&n);
    
    for (int  i = 0; i < n ; i++)
    {
        int x =  firstTerm  + i * difference;
        printf("%d  ", x);
    }
    return 0;
}