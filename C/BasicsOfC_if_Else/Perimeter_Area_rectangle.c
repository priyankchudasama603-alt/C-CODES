#include <stdio.h>
int main(){
	float L,B,P,A;
	printf("Enter length of rectangle:");
	scanf("%f",&L);
	printf("Enter breadth of rectangle:");
	scanf("%f",&B);
	P=2*(L+B);
	A=L*B;
	if(A>P){
		printf("Area=%f \nPerimeter=%f\n",A,P);
		printf("The Area is greater then Perimeter");
	}
	else if(P>A){
		printf("Area=%f \nPerimeter=%f\n",A,P);
		printf("The Perimeter is greater then Area");
	}
	else{
		printf("Area=%f \nPerimeter=%f",A,P);
		printf("The Area and Perimeter both are equal");
	}
	return 0;
}
