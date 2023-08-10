#include <stdio.h>

int main(){
	int n, sum, count, i, j;
	printf("Please enter upto what number you want to find prime numbers: ");
	scanf("%d", &n);
	
	for(int j = 1; j<=n; ++j ){
		count = 0;
		for(int i = 1; i<=j; ++i){
		if(j%i==0){
			count = count + 1;
		}
	}
	if(count==2){
		printf("%d ", j);
		sum = sum + j;
	}
		
	}
	

	printf("\nThe sum of the generated prime number is %d.", sum);
	
	return 0;
}

