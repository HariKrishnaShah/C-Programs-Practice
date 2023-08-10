#include <stdio.h>
//VIT ID: 21BCS0167


int main(){
	float price, Fprice, discountPer;
	discountPer = 5;
	printf("This is a program to calculate the final price.");
	printf("\nPlease enter the amount to be paid by the customer: ");
	scanf("%f", &price);
	if(price >= 1000){
		Fprice = price - price*discountPer/100;
		printf("Congrats ! You are eligible for a discount of %.2f percent.", discountPer);
	}
	else{
		Fprice = price;
		printf("Sorry! No discount for you.");
	}
	printf("\nThe final price to be paid is %.2f.", Fprice);
	
	return 0;
}
