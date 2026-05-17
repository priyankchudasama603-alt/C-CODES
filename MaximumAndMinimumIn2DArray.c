#include<stdio.h>
int main(){
    int arr[3][3]={{22,4,5},{1,11,4},{19,81,6}};
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    printf("Maximum Element in Matrix is :%d\n",max);
    printf("Minimum Element in Matrix is :%d",min);


    return 0;
}