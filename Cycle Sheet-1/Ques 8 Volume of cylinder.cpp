#include <stdio.h>
//VIT ID: 21BCS0167
#define pi 3.14159

int main(){
	float r, h, v;
	printf("Enter the radius and height of the cylinder: ");
	scanf("%f%f", &r, &h );
	v = pi*(r*r)*h;
	printf("The volume of the cylinder is %.2f.", v);
	return 0;
}
