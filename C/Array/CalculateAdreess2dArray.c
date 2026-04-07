#include<stdio.h>
int main(){
    int b[3][4]={{1,2,3,4},{5,6,7,8},{9,6,3,1}};
    int i,j;
    printf("Enter index of row :");
    scanf("%d",&i);
    printf("Enter index of column :");
    scanf("%d",&j);
    int B=&b[0][0];
    int w= sizeof(b[0][0]);
    int n=4;
    int l1=0;
    int l2=0;
    int adress=B+w*(n*(i-l1)+(j-l2));
    printf("%d\n",adress);
    printf("%d",&b[i][j]);

}