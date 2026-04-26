#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 elements :\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Duplicate element are ");
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]==a[j]){
                printf("%d " ,a[i]);
                break;
            }
    }
    }
    return 0;
}