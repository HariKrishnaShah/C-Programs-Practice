#include <stdio.h>

int main(){
	int num1, num2, *a, *b, sum;
	
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	
	a = &num1;
	b = &num2;
	
	sum = *a + *b;
	printf("The sum of %d and %d is %d.", *a, *b, sum);
	return 0;
}

