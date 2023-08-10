#include <stdio.h>


int main(){
	float num, guess, sc, pguess;
	printf("Please enter a number whose square root is to be found: ");
	scanf("%f", &num);
	guess = num/2;
	
	do{
		sc = num/guess;
		pguess = guess;
		guess = (guess+sc)/2;
	}
	while(pguess-guess>0.0001*pguess);
	
	printf("The square root of the number is %f.", guess);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
