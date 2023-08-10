#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	float marks[5], sum, average;
	printf("Please enter the marks of five subjects: ");
	for(int i = 0; i<5; ++i){
		scanf("%f", &marks[i]);
	}
	for(int i = 0; i<5; ++i){
		sum = sum + marks[i];
	}
	average = sum/5;
	printf("The average marks is %.2f.", average);
	return 0;
}
