#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Number Of Row : ");
    scanf("%d",&r);
    printf("Enter Number Of Column : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter element of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }


    printf("The 2D Array elements are : \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}