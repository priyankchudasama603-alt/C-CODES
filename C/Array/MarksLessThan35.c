#include<stdio.h>
int main(){
    int marks[10]={89,78,34,55,78,31,87,20,45,85};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d  ",i);
        }
    }
    return 0;
}