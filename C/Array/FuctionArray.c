#include<stdio.h>
void fun(int x[]){
    x[0]=2245;
}
int main(){
    int i,a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i);
        scanf("%d",&myNumbers[i]);
    }
    printf("Before using Function value of first elemet of array =%d",myNumbers[0]);
    fun(myNumbers);
    printf("\n");
    printf("After using Function value of first elemet of array =%d",myNumbers[0]);
    return 0;
}