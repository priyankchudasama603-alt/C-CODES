#include <stdio.h>
int main(){
	float cp,sp,pl;
	printf("Enter cost price:");
	scanf("%f",&cp);
	printf("Enter selling price:");
	scanf("%f",&sp);
	pl=sp-cp;
	if(pl>0.0){
		printf("The profit is:%f",pl);
	}
	else{
		printf("The loss is:%f",pl);
	}
	return 0;
}
