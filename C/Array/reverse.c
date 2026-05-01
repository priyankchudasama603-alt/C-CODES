#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=4;
    while(i!=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int arr[5]={22,4,5,1,11};
    reverse(arr);
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}