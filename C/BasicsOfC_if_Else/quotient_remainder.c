#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter dividend:");
	scanf("%d",&a);
	printf("Enter divisor:");
	scanf("%d",&b);
	c=a/b;
	d=a%b;
	printf("The quotient is:%d\n",c);
	printf("The remainder is:%d",d);
	return 0;
}
