#include<stdio.h>
int main(){
    int myNumbers[]={22,4,5,1,11,40,16,80,45,18};
    for (int i =0;i<10;i++){
        if(myNumbers[i]%2==0){
            printf("%d\n",myNumbers[i]);
        }
    }
    return 0;
}