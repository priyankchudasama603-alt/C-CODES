#include<stdio.h>
int main(){
    int myNumbers[]={22,4,5,1,11,40,16,80,45,18};
    int max=myNumbers[0];
    int max2=myNumbers[0];
    for (int i =0;i<10;i++){
        if(max<myNumbers[i]){
            max2=max;
            max=myNumbers[i];

        }
        else if (myNumbers[i]>max2){
            max2=myNumbers[i];
        }
        
        }
    printf("first maximum= %d \nsecond maximum = %d",max,max2);

    return 0;
}