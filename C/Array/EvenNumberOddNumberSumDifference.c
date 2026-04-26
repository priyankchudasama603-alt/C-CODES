#include<stdio.h>
int main(){
    int i,a;
    int oddsum=0;
    int evensum=0;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i+1);
        scanf("%d",&myNumbers[i]);
   }
   for(i=0;i<a;i++){
    if(i%2!=0){
        oddsum+=myNumbers[i];
    }
    else{
        evensum+=myNumbers[i];
    }
    }
    if(oddsum>evensum) printf("Diffrence between oddsum and evensum is : %d",oddsum-evensum);
    else printf("Diffrence between oddsum and evensum is : %d",evensum-oddsum);
}