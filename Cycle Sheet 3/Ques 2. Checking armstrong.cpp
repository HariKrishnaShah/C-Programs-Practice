#include <stdio.h>
//VIT ID: 21BCS0167
void armstrong(int n){
	int len, temp, check, rem;
	len = 0;
	temp = n;
	check = 0;
	while(temp !=0){
		temp = temp/10;
		len = len +1;
	}
	temp = n;
	while(temp !=0){
		rem = temp%10;
		check = check + pow(rem, len);
		temp = temp/10;		
	}
	if(check == n){
		printf("The number %d is an armstrong number.", n);
	}
	else{
		printf("The number %d is not an armstrong number.", n);
	}
}

int main(){
	int num;
	printf("Enter the number to check if it is armstrong number: ");
	scanf("%d", &num);
	armstrong(num);
	return 0;
}
