#include <stdio.h>
#include <conio.h>
#include <math.h>

//VIT number:21BCS0167
int main(){
	int a, b, sumi, diffi;
	float c, d, sumf, difff;
	printf("Please enter two integer numbers one after another: ");
	scanf("%d%d", &a, &b);
	printf("Please enter two float numbers one after another: ");
	scanf("%f%f", &c, &d);
	
	sumi = a + b;
	diffi = a-b;
	sumf = c + d;
	difff = c - d;
	
	printf("\nThe sum and differences of the intregers are %d, %d respectively.", sumi, diffi);
	printf("\nThe sum and differences of the floats rounded up to one decimal point are %.1f, %.1f respectively.", sumf, difff);
	return 0;
}
