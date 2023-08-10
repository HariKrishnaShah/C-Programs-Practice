#include <stdio.h>

int areaperi(int r, float *a, float *p);
int main(){
	int radius;
	float area, perimeter;
	printf("Enter the radius: ");
	scanf("%d", &radius);
	areaperi(radius, &area, &perimeter);
	
	printf("Area = %f", area);
	printf("\nPerimeter = %f", perimeter);
	
	
	
	
	return 0;
}

areaperi(int r, float *a, float *p){
	*a = 3.14*r*r;
	*p = 2*3.14*r;
	
}
