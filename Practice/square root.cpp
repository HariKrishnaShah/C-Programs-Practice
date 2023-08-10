#include <stdio.h>


int main(){
	float num,i, sqr;
	
	printf("Enter the number whose square root is to be found: ");
	scanf("%f", &num);
	i = 0.000001;
	
	while(sqr<num){
		sqr = i*i;
		i = i + 0.000001;
		
	}
	
	printf("The square root of number is %.3f.", i);

	
	
	
	
	return 0;
}
