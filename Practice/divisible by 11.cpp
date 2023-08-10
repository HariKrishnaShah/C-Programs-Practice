#include <stdio.h>

int main(){
	int num, sume = 0, sumo = 0, diff = 0, temp, count = 0, mod, temp1;
	
	printf("Enter a digit with more than 3 digits: ");
	scanf("%d", &num);
	temp1 = num;
	
	while(!(temp1 == 0)){
		temp1 = temp1/10;
		count  = count + 1;
		
	}
	while(!(num == 0)){
		temp = num%10;
		if((count % 2 == 0)){
		sume = sume + temp;
		}
		else{
			sumo = sumo + temp;
		}
		num = num/10;
		count = count - 1;
	}
	diff = sumo - sume;
	if(diff%11 == 0 || diff == 0){
		printf("\nThe number is divisible by 11.");
	}
	else{
		printf("\nThe number is not divisible by 11.");
	}	
			
	
	
	return 0;
}

