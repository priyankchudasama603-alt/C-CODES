#include<stdio.h>
int main(){
    int i,a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i+1);
        scanf("%d",&myNumbers[i]);
   }
   for(i=0;i<a;i++){
    if(i%2!=0){
        myNumbers[i]*=2;
    }
    else{
        myNumbers[i]+=10;
    }
   }
   for(i=0;i<a;i++){
    printf("%d ",myNumbers[i]);
   }
}