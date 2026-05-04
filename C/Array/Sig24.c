#include<stdio.h>
int main(){
    int i,a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i);
        scanf("%d",&myNumbers[i]);
    }
    for ( i =0;i<10;i++){
        printf("element = %d ",myNumbers[i]);
        printf("adreess =%p \n",&myNumbers[i]);
    }

    return 0;
}