#include<stdio.h>
int main(){
    int a[5],mid,key,low=0,high=4,flag=1;
    for(int i=0;i<5;i++)
    {
        printf("\n enter the number%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n enter the search no:");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key=a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1) printf("\n number to be found at %d position %d",key,mid+1);
    else printf("\n number %d not found",key);
    return 0;

}