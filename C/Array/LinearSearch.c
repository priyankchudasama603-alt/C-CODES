#include<stdio.h>
int main(){
    int a[5],i,key,pos,flag=0;
    for(i=0;i<5;i++)
    {
        printf("\n enter the number%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n enter the search no:");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            flag=1;
            pos=i+1;
            break;
        }
        
    }
    if(flag==1) printf("Element Found At %d Position",pos);
    else printf("Element not Found");
    }