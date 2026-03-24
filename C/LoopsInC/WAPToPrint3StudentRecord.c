#include<stdio.h>

int main(){
    int en1, cn1, sub11, sub12, total1, average1;
    int en2, cn2, sub21, sub22, total2, average2;
    int en3, cn3, sub31, sub32, total3, average3;
    char Name1[30];
    char address1[30];
    char section1;
    char Name2[30];
    char address2[30];
    char section2;
    char Name3[30];
    char address3[30];
    char section3;
//Student 1
    printf("Enter Enrollment Number: ");
    scanf("%d", &en1);

    printf("Enter Name: ");
    scanf(" %s", Name1); 

    printf("Enter Section: ");
    scanf(" %c", &section1); 

    printf("Enter Address: ");
    scanf(" %s", address1); 

    printf("Enter Contact Number: ");
    scanf("%d", &cn1);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &sub11);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &sub12);

    total1 = sub11 + sub12;
    average1 = total1 / 2;

//Student 2
    printf("Enter Enrollment Number: ");
    scanf("%d", &en2);

    printf("Enter Name: ");
    scanf(" %s", Name2); 

    printf("Enter Section: ");
    scanf(" %c", &section2); 

    printf("Enter Address: ");
    scanf(" %s", address2); 

    printf("Enter Contact Number: ");
    scanf("%d", &cn2);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &sub21);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &sub22);

    total2= sub21 + sub22;
    average2 = total2 / 2;

//Student 3
    printf("Enter Enrollment Number: ");
    scanf("%d", &en3);

    printf("Enter Name: ");
    scanf(" %s", Name3); 

    printf("Enter Section: ");
    scanf(" %c", &section3); 

    printf("Enter Address: ");
    scanf(" %s", address3); 

    printf("Enter Contact Number: ");
    scanf("%d", &cn3);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &sub31);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &sub32);

    total3 = sub31 + sub32;
    average3 = total3 / 2;

    printf("Enrollment \t Name \t\t Section \t Address \t Contact\t Sub1 \t Sub2 \t Total \t Average\n");
    printf("%d \t\t %s \t %c \t\t %s \t %d \t\t %d \t %d \t %d \t %d\n", en1, Name1, section1, address1, cn1, sub11, sub12, total1, average1);
    printf("%d \t\t %s \t %c \t\t %s \t %d \t\t %d \t %d \t %d \t %d\n", en2, Name2, section2, address2, cn2, sub21, sub22, total2, average2);
    printf("%d \t\t %s \t %c \t\t %s \t %d \t\t %d \t %d \t %d \t %d\n", en3, Name3, section3, address3, cn3, sub31, sub32, total3, average3);

    return 0;
}
