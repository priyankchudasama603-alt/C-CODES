#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf( "It is a Number.\n");
    } 
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("It is a Vowel");
    }
    else printf("It is a Consonant");
    } 
    else {
        printf("'%c' is neither a Vowel, Consonant, nor a Number.\n", ch);
    }

    return 0;
}