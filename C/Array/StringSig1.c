#include<string.h>
#include<stdio.h>
int main(){
    char s1[20]={'a','k','a','s','h'};
    char s2[20]="Spiderman";
    char s3[20];
    int len;
    printf("%s",s1);
    printf("\nEnter a string:");
    scanf("%s",s3);
    printf("%s",s3);
    puts(s3);
    printf("Bye!");

    len=strlen(s2);
    printf("\nLength of string : %d",len);
    return 0;
    
}