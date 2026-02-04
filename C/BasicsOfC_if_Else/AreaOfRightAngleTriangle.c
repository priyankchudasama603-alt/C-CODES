#include<stdio.h>
int main(){
    float length,base,area;
	printf("Enter length of Triangle:");
	scanf("%f",&length);
    printf("Enter base of Triangle:");
	scanf("%f",&base);
	area=0.5*base*length; 
    printf("The Area of Triangle is : %f",area);
    return 0;  
}