#include <stdio.h>
//VIT ID: 21BCS0167


int main(){
	float p, t, r, i;
	printf("Please enter the principle, time and interest rate: ");
	scanf("%f%f%f", &p, &t, &r);
	i = p*t*r/100;
	printf("The simple interest is %.2f.", i);
	return 0;
}
