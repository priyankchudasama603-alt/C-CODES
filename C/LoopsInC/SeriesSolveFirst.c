//Print The Sum of Series 1-2+3-4+5-6.... upto n terms
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
    
}