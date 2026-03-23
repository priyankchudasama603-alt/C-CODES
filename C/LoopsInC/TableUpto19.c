#include<stdio.h>
int main(){
    int x;
    for(int i=1;i<=10;i++){
        for(int j=2;j<=19;j++){
            x=j*i;
            printf("%d * %d = %d\t",j,i,x);
        }
        printf("\n");
    }
    return 0;
}