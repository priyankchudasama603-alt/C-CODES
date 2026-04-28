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
    int max=myNumbers[0];
    for(i=0;i<a;i++){
        if(max<myNumbers[i]){
            max=myNumbers[i];
        }
    }
    printf("Maximum Number in this Array is %d",max);
}