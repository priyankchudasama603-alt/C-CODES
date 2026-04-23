#include<stdio.h>
int main(){
    int i,a;
    printf("Enter size of array : ");
    scanf("%d",&a);
    int myNumbers[a];
    for(i=0;i<a;i++){
        printf("Enter element %d = ",i);
        scanf("%d",&myNumbers[i]);
    }
    int j;
    printf("Enter The index for the adress of that elemnt : ");
    scanf("%d",&j);
    int *b=&myNumbers[0];
    int l=0;
    int w=sizeof(myNumbers[0]);
    int adress= (int)b+w*(j-l);
    printf("%d \n",adress);
    printf("%d",&myNumbers[j]);
    return 0;

}