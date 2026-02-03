#include <stdio.h>
int main(){
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(n<1){
		n=n*(-1);
		printf("The absolute value of the given number is: %d",n);
	}
	else{
		n=n;
		printf("The absolute value of the given number is: %d",n);
	}
	return 0;
}
