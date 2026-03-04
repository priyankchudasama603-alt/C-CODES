#include <stdio.h>
int main(){
    int firstTerm,n,ratio;
    printf("Enter First Term :");
    scanf("%d",&firstTerm);
    printf("Enter common ratio :");
    scanf("%d",&ratio);
    printf("Enter number of terms :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d  ",firstTerm);
        firstTerm=firstTerm*ratio;
    }

    return 0;
}