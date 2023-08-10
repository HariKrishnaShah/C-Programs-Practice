#include <stdio.h>
#include <conio.h>

//VIT number:21BCS0167
int main(){
	int a,b;
	printf("This is a program to check if first number is less than 50 or the second number.");
	printf("\nPlease enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	
	if(a<50 || a<b){
		printf("Condition Satisfied: Either %d is less than 50 or %d is less than the number %d.", a, a, b);
	}
	else{
		printf("Condition Unsatisfied. Neither %d is less than 50 nor %d is less than the number %d.",a, a, b);
	}
	return 0;
}
