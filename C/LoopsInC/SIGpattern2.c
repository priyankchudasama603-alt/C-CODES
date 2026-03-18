#include<stdio.h>
int main(){
    int i=1,x;
    while(i<10){
        x=i*i;
        printf("%d/%d + ",i,x);
        i++;
    }
    printf("%d/%d ",i,i*i);
    return 0;

}