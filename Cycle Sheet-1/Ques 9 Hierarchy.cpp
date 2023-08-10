#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int a, b, c, d, e, result_1, result_2;
	a = 2;
	b = 4;
	c = 8;
	d = 9;
	result_1 = (a-b)*(a+b*a)+a/b;
	result_2 = a+b*b-a/b%a;
	 e = a * b / c - a * 2 + d * 3;
	printf("Result-1 is %d\nResult-2 is %d and\ne is %d.", result_1, result_2, e);
	return 0;
}
