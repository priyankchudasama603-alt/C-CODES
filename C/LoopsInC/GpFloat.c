#include <stdio.h>
int main(){
    float firstTerm=100,n,ratio=0.5;
    printf("Enter number of terms :");
    scanf("%f",&n);
    for(int i=0;i<=n;i++){
        printf("%.3f  ",firstTerm);
        firstTerm=firstTerm*ratio;
    }
    return 0;
}