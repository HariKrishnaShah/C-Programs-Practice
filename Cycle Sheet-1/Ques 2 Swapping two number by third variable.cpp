#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("The entered first number is %d and second number was %d.", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swapping the first number becomes %d and second number becomes %d.", a, b);	
	return 0;
}
