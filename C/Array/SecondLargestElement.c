#include<stdio.h>
#include<limits.h>
int main(){
    int i,a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i);
        scanf("%d",&myNumbers[i]);
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(i=0;i<a;i++){
        if(max<myNumbers[i]){
            smax=max;
            max=myNumbers[i];
        }
        else if(smax<myNumbers[i] && max!=myNumbers[i]){
            smax=myNumbers[i];
        }
    }
    printf("Maximum Number in this Array is %d",max);
    printf("\nSecond Maximum Number in this Array is %d",smax);
}