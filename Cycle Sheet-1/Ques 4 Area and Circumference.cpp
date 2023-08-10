#include <stdio.h>
//VIT ID: 21BCS0167
#define pi 3.14159

int main(){
	float radius, area, circum;
	printf("Please enter the radius of the circle: ");
	scanf("%f", &radius);
	area = pi*(radius*radius);
	circum = 2*pi*radius;
	printf("The area of the circle is %.2f and the circumference is %.2f.", area, circum);
	return 0;
}
