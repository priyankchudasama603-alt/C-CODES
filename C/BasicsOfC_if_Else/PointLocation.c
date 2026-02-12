#include <stdio.h>
int main(){
    int x,y;
    printf("Enter The Coordinates:");
    scanf("%d %d",&x,&y);
    if(y==0){
        printf("The Point Lies On X-axis");
    }
    else if(x==0){
        printf("The Point Lies On y-axis");
    }
    else{
        printf("The Point does not lie on any axis");
    }
    return 0;
}