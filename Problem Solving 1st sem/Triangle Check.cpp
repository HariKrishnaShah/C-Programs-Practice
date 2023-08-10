#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	int a, b, c;
	printf("Welcome, This is a program to check if the angles form a triangle.");
	printf("\nPlease enter three angles:\n");
	scanf("%d%d%d", &a, &b,  &c);
	if(a+b+c ==180){
		printf("The angles form a triangle.");
		if(a == 90 || b == 90 || c == 90){
			printf("\nThe formed triangle is a right angle triangle.");
		}
		else if(a==b==c){
			printf("\nThe formed triangle is equilateral traingle.");
		}
		else if(a==b || b==c || c==a){
			printf("\nThe triangle is isosceles triangle.");
		}
		else if(a !=b && b!=c && c!=a){
			printf("\nThe triangle is scalence triangle.");
		}
	}
	else{
		printf("\nThe angles do not form a triangle.");
	}
	
	return 0;
}
