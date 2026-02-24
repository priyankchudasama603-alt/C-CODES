#include<stdio.h>
int main(){
    int num,i=1;
    printf("Enter a Number : ");
    scanf("%d",&num);
    table:
    printf("%d X %d = %d \n",num,i,num*i);
    i++;
    if(i<=10)
    goto table;
}