#include<string.h>
#include<stdio.h>
int main(){
    char s1[20]="SGPA";
    char s2[20];
    int i=0;
    while(s1[i]){
        s2[i]=s1[i];
        i++;
    }
    printf("String copy without using inbuilt function:");
    puts(s2);

}
