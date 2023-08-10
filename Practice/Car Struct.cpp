#include <stdio.h>



int main(){
	
	struct car{
		char name[50];
		int cc;
		float milage;
		
		
	};
	
	
	struct car car1;
	printf("Enter the name of the car: ");
	gets(car1.name);
	printf("Enter the engine capactity cc: ");
	scanf("%d", &car1.cc);
	printf("Enter the milage per litre: ");
	scanf("%f", &car1.milage);
	
	printf("The car1 details are as follow: \n \
	Name: %s \n \
	Engine Capacity: %d\n\
	Milage: %.2f", car1.name, car1.cc, car1.milage);
	
	
	
	
	
	return 0;
}
