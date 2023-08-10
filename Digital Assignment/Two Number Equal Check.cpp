#include <stdio.h>
#include <conio.h>
using namespace std;

//VIT number:21BCS0167

int main(){
	int a, b;
	printf("\t\tThis is a program to check if two numbers are equal.");
	printf("\nEnter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	if(a==b){
		printf("\nThe numbers %d and %d are equal in value.", a, b);
	}
	else{
		printf("\nThe numbers %d and %d are not equal in value.", a, b);
	}
	
	
	
	getchar();
	return 0;	
}
