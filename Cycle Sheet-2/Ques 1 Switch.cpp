#include <stdio.h>
//VIT ID:21BCS0167
#define pi 3.14
int main(){
	int x,area, l, b, r;
	printf("Please enter one of these numbers to calulate the area of\n\
			1: Square \n\
			2:Rectangle\n\
			3:Circle\n");
			scanf("%d", &x);
	switch(x){
		case 1:
			printf("Please Enter the length: ");
			scanf("%d", &l);
			area = l*l;
			break;
		
		case 2:
			printf("Please enter length and breadth: ");
			scanf("%d%d", &l, &b);
			area = l*b;
			break;
		
		case 3:
			printf("Please enter the radius: ");
			scanf("%d", &r);
			area = pi*(r*r);
			break;
		
		default:
			printf("Please enter a valid number and try again.");
	}
	printf("The area is %d.", area);
	
	return 0;
}
