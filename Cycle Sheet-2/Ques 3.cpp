#include <stdio.h>
//VIT ID: 21BCS0167

int main(){
	float n, sum;
	sum = 0;
	printf("Please enter the number of terms: ");
	scanf("%f", &n);
	for(float i = 1; i<=n; ++i){
		sum = sum + (1/i);
	}
	printf("The sum is %.2f.", sum);
	return 0;
}
