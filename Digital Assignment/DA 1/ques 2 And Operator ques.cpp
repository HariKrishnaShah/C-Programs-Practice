#include <stdio.h>
#include <conio.h>

//VIT number:21BCS0167

int main(){
	int a,b;
	printf("\t\tThis is a program to check if first number is less than 50 and the second number.");
	printf("\nPlease enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	if(a<50 && a<b){
		printf("\nThe number %d is less than 50 and less than the number %d.", a, b);
	}
	else{
		printf("\nThe entered number does not satisfy the condition of being less than both 50 and %d.", b);
	}
	return 0;
}
