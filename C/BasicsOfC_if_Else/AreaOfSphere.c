#include <stdio.h>
int main(){
	float radius,area;
	printf("Enter Radius of Sphere: ");
    scanf("%f",&radius);
	area=4*3.14*radius*radius;
	printf("The Surface Area of Sphere is %f",area);
	return 0;
}
