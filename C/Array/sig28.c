#include<stdio.h>
int main(){
    int myNumbers[]={22,4,5,1,11,40,16,80,45,18};
    int min=myNumbers[0];
    for (int i =0;i<10;i++){
        if(min>myNumbers[i]){
            min=myNumbers[i];

        }
        
        }
    printf("%d",min);

    return 0;
}