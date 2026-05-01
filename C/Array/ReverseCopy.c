#include<stdio.h>
int main(){
    int arr[5]={22,4,5,1,11};
    int b[5];
    int n=4;
    for(int i=0;i<=4;i++){
        b[i]=arr[n-i];
    }
    printf("The new array (reversed) : [");
    for(int i=0;i<=4;i++){
        printf("%d ",b[i]);

    }
    printf("]");
    
}