#include <stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter principle value:");
	scanf("%f",&p);
	printf("Enter Rate of interest:");
	scanf("%f",&r);
	printf("Enter time period(in years):");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple interest is:%f",si);
	return 0;
	
}
