#include<string.h>
#include<stdio.h>
int main(){
    char s1[20]="SGPA";
    char s2[20];
    int i;
    puts(s1);
    strcpy(s2,s1);
    printf("String copy using inbuilt function:");
    puts(s2);

}