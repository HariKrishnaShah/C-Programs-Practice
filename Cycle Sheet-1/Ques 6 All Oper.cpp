#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int a, b, sum, diff, mult, divide, modulo, OR, NOT, AND, pre_incre, pre_decre, post_incre, post_decre;
	printf("Enter two numbers: ");
	scanf("%d%d", &a, &b);
	sum = a+b;
	diff = a - b;
	mult = a*b;
	divide = a/b;
	modulo = a%b;
	pre_incre = ++a;
	pre_decre  = --b;
	post_incre = a++;
	post_decre = b--;
	OR = (a>b) || (a>100);
	AND = (a<60) && (b<40);
	NOT = a != 5;
	
	printf("The operations are:\n \
			sum = %d and diff = %d and multiplication = %d and divide = %d and modulo = %d\n \
			The pre_increment of a = %d and pre_decrement of b = %d and post_increment of a = %d\n \
			and post_decrement of b = %d\n \
			The logic OR = %d and logic AND = %d and logic NOT = %d", sum, diff, mult, divide, modulo, pre_incre, pre_decre, post_incre, post_decre, OR, AND, NOT);
	return 0;
}
